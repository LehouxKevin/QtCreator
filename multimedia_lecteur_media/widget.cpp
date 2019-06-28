#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(&player,&QMediaPlayer::stateChanged,this,&Widget::onQMediaPlayer_stateChanged);
    connect(&player,&QMediaPlayer::durationChanged,this,&Widget::onQMediaPlayer_durationChanged);
    connect(&player,&QMediaPlayer::positionChanged,this,&Widget::onQMediaPlayer_positionChanged);

    connect(&player,QOverload<QMediaPlayer::Error>::of(&QMediaPlayer::error),this,&Widget::onQMediaPlayer_error);

    ui->progressBarProgression->setValue(0);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonChoisirFichier_clicked()
{
    nomFichier=QFileDialog::getOpenFileName();
}

void Widget::on_pushButtonJouerSon_clicked()
{
    player.setMedia(QUrl::fromLocalFile(nomFichier));
    player.setVolume(100);
    player.play();
}

void Widget::onQMediaPlayer_stateChanged(QMediaPlayer::State state)
{
    qDebug()<<state;
}

void Widget::onQMediaPlayer_error(QMediaPlayer::Error error)
{
    qDebug()<<error;
    player.stop();
}

void Widget::onQMediaPlayer_durationChanged(qint64 duree)
{
    qDebug()<<duree/1000;
    ui->progressBarProgression->setMaximum(duree/1000);
}

void Widget::onQMediaPlayer_positionChanged(qint64 position)
{
    qDebug()<<position/1000;
    ui->progressBarProgression->setValue(position/1000);
}
