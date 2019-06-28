#include "Sonometre.h"
#include "ui_sonometre.h"
/**
 * @brief sonometre::sonometre
 * @param parent
 * @details constructeur , lance initializeAudio
 */
sonometre::sonometre(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sonometre)
{
    ui->setupUi(this);
    indice = 0;
    initializeAudio(QAudioDeviceInfo::defaultInputDevice());
    seuil=50;

}

sonometre::~sonometre()
{
    delete ui;
}

void sonometre::calculerMoyenne()
{
    indice++;


    QString valeur = QString::number(m_audioInfo->level(),'f',1);
    stockageDB = stockageDB + valeur.toFloat();



    if(indice >= 10)
    {
        float moyenne = stockageDB/indice;



        ui->labelDb->setText(QString::number(moyenne));


        if (moyenne>seuil){
            ui->labelDb->setStyleSheet("color:red;");
        }
        else{
            ui->labelDb->setStyleSheet("color:black;");
        }
        indice = 0;
        stockageDB =0;
    }
    else {
        //qDebug()<<indice;
    }



    //ui->labelDb->setText(QString::number(m_audioInfo->level(),'f',1));
    //qDebug()<<QString::number(m_audioInfo->level());




}
/**
 * @brief sonometre::LevelChange
 * @details affiche le niveau sonore dans le lablelDb
 */
void sonometre::LevelChange()
{
   QTimer *timer = new QTimer(this);
   connect(timer, SIGNAL(timeout()),this,SLOT(calculerMoyenne()));
    timer->start(2000);

}
/**
 * @brief sonometre::initializeAudio
 * @param deviceInfo
 * @details initialise l'audio et lance la surveillance sonore
 */
void sonometre::initializeAudio(const QAudioDeviceInfo &deviceInfo)
{
    float value;
    QAudioFormat format;
    format.setSampleRate(4000);
    format.setChannelCount(1);
    format.setSampleSize(8);
    format.setSampleType(QAudioFormat::SignedInt);
    format.setByteOrder(QAudioFormat::LittleEndian);
    format.setCodec("audio/pcm");


    if (!deviceInfo.isFormatSupported(format)) {
        qWarning() << "Default format not supported - trying to use nearest";
        format = deviceInfo.nearestFormat(format);
    }

    m_audioInfo.reset(new AudioInfo(format));
    connect(m_audioInfo.data(),&AudioInfo::update, [this]() {
        sonometre::LevelChange();
    });

    m_audioInput.reset(new QAudioInput(deviceInfo,format));
    connect(ui->volumeSlider,&QSlider::valueChanged,this,&sonometre::sliderChanged);
    qreal initialVolume = QAudio::convertVolume(m_audioInput->volume(),
                                                QAudio::LinearVolumeScale,
                                                QAudio::LinearVolumeScale);
    ui->volumeSlider->setValue(qRound(initialVolume*100));


    m_audioInfo->start();

    auto io = m_audioInput->start();
    connect(io, &QIODevice::readyRead,
            [&, io]() {
        qint64 len = m_audioInput->bytesReady();
        const int BufferSize = 4096;
        if (len > BufferSize)
            len = BufferSize;

        QByteArray buffer(len, 0);
        qint64 l = io->read(buffer.data(), len);
        if (l > 0)
            m_audioInfo->write(buffer.constData(), l);
    });

   /* qreal linearVolume = QAudio::convertVolume(value / qreal(100),
                                                QAudio::LogarithmicVolumeScale,
                                                QAudio::LinearVolumeScale);

     //linearVolume=0.11;
     m_audioInput->setVolume(linearVolume);
     qDebug()<<linearVolume;*/


}

/**
 * @brief sonometre::on_pushButtonQuitter_clicked
 * @details Permet d'arrêter audioInput et audioInfo et fermer le programme
 */
void sonometre::on_pushButtonQuitter_clicked()
{
    m_audioInput->stop();
    m_audioInfo->stop();
    close();
}
/**
 * @brief sonometre::sliderChanged
 * @param value
 * @details permet de définir le slider de volume du microphone
 */
void sonometre::sliderChanged(int value)
{
   qreal linearVolume = QAudio::convertVolume(value / qreal(100),
                                               QAudio::LogarithmicVolumeScale,
                                               QAudio::LinearVolumeScale);

    //linearVolume=0.04;
    m_audioInput->setVolume(linearVolume);
}



void sonometre::on_lineEditSeuil_textChanged(const QString &arg1)
{
    seuil=arg1.toFloat();
}

void sonometre::on_horizontalSliderSeuil_valueChanged(int value)
{
    ui->lineEditSeuil->setText(QString::number(value));
}
