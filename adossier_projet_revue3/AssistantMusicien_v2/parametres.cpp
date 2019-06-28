#include "parametres.h"
#include "ui_parametres.h"

void qtPauseParam(int millisecondes)
{
    QTimer timer;
    timer.start(millisecondes);
    QEventLoop loop;
    QObject::connect(&timer, SIGNAL(timeout()), &loop, SLOT(quit()));
    loop.exec();
}

Parametres::Parametres(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Parametres)
{
    ui->setupUi(this);

    ui->stackedWidgetGestionCheminFichier->setCurrentIndex(0);
    LireFichierIni();
    actualiserAffichageChemins();
}

Parametres::~Parametres()
{
    delete ui;
}

void Parametres::LireFichierIni()
{
    QString nomFichierIni = NOM_FICHIER_INI;
    QFileInfo testFichier(nomFichierIni);

    if(testFichier.exists() && testFichier.isFile())
    {
        QSettings paramsSocket(nomFichierIni,QSettings::IniFormat);

        cheminAudioParDefaut=paramsSocket.value("DEFAULT_CONFIG_PATHS/audioDefault").toString();
        cheminPartitionParDefaut=paramsSocket.value("DEFAULT_CONFIG_PATHS/partitionDefault").toString();
        cheminEnregistrementParDefaut=paramsSocket.value("DEFAULT_CONFIG_PATHS/enregistrementDefault").toString();
        cheminRythmeParDefaut=paramsSocket.value("DEFAULT_CONFIG_PATHS/rythmeDefault").toString();

        cheminAudio=paramsSocket.value("CONFIG_PATHS/audio").toString();
        cheminPartition=paramsSocket.value("CONFIG_PATHS/partition").toString();
        cheminEnregistrement=paramsSocket.value("CONFIG_PATHS/enregistrement").toString();
        cheminRythme=paramsSocket.value("CONFIG_PATHS/rythme").toString();
    }
    else {
        qDebug()<<"fichier ini non valide";

        on_pushButtonModifierParametreDefaut_clicked();
    }
}

void Parametres::EcrireFichierIni()
{
    QString nomFichierIni=NOM_FICHIER_INI;
    QSettings paramsSocket(nomFichierIni,QSettings::IniFormat);

    paramsSocket.beginGroup("CONFIG_PATHS");
    paramsSocket.setValue("audio",ui->lineEditCheminAudio->text());
    paramsSocket.setValue("partition",ui->lineEditCheminPartition->text());
    paramsSocket.setValue("enregistrement",ui->lineEditCheminEnregistrement->text());
    paramsSocket.setValue("rythme",ui->lineEditCheminRythme->text());
    paramsSocket.endGroup();
}

void Parametres::actualiserAffichageChemins()
{
    ui->lineEditCheminAudio->setText(cheminAudio);
    ui->lineEditCheminPartition->setText(cheminPartition);
    ui->lineEditCheminEnregistrement->setText(cheminEnregistrement);
    ui->lineEditCheminRythme->setText(cheminRythme);

    ui->lineEditCheminAudioDefaut->setText(cheminAudioParDefaut);
    ui->lineEditCheminPartitionDefaut->setText(cheminPartitionParDefaut);
    ui->lineEditCheminEnregistrementDefaut->setText(cheminEnregistrementParDefaut);
    ui->lineEditCheminRythmeDefaut->setText(cheminRythmeParDefaut);
}

QString Parametres::obtenirCheminAudio()
{
    return cheminAudio;
}

QString Parametres::obtenirCheminPartition()
{
    return cheminPartition;
}

QString Parametres::obtenirCheminEnregistrement()
{
    return cheminEnregistrement;
}

QString Parametres::obtenirCheminRythme()
{
    return cheminRythme;
}

void Parametres::on_pushButtonAppliquerModifications_clicked()
{

    QMessageBox::StandardButton reponse;

    reponse = QMessageBox::question(this, "Avertissement", "Voulez-vous vraiment enregistrer les modifications ?",
                                    QMessageBox::Yes|QMessageBox::No);
    if (reponse == QMessageBox::Yes) {
        if(ui->stackedWidgetGestionCheminFichier->currentIndex()==0)
        {
            EcrireFichierIni();
            QMessageBox message;
            message.setText("Les modifications ont bien été enregistrés");
            message.exec();
        }
        else {
            if(ui->stackedWidgetGestionCheminFichier->currentIndex()==1)
            {
                if(!ui->lineEditCheminAudioDefaut->text().isEmpty() && !ui->lineEditCheminPartitionDefaut->text().isEmpty() && !ui->lineEditCheminEnregistrementDefaut->text().isEmpty() && !ui->lineEditCheminRythmeDefaut->text().isEmpty())
                {
                    cheminAudioParDefaut = ui->lineEditCheminAudioDefaut->text();
                    cheminPartitionParDefaut = ui->lineEditCheminPartitionDefaut->text();
                    cheminEnregistrementParDefaut = ui->lineEditCheminEnregistrementDefaut->text();
                    cheminRythmeParDefaut = ui->lineEditCheminRythmeDefaut->text();

                    cheminAudio = ui->lineEditCheminAudioDefaut->text();
                    cheminPartition = ui->lineEditCheminPartitionDefaut->text();
                    cheminEnregistrement = ui->lineEditCheminEnregistrementDefaut->text();
                    cheminRythme = ui->lineEditCheminRythmeDefaut->text();

                    QString nomFichierIni=NOM_FICHIER_INI;
                    QSettings paramsSocket(nomFichierIni,QSettings::IniFormat);

                    paramsSocket.beginGroup("DEFAULT_CONFIG_PATHS");
                    paramsSocket.setValue("audioDefault",ui->lineEditCheminAudioDefaut->text());
                    paramsSocket.setValue("partitionDefault",ui->lineEditCheminPartitionDefaut->text());
                    paramsSocket.setValue("enregistrementDefault",ui->lineEditCheminEnregistrementDefaut->text());
                    paramsSocket.setValue("rythmeDefault",ui->lineEditCheminRythmeDefaut->text());
                    paramsSocket.endGroup();

                    paramsSocket.beginGroup("CONFIG_PATHS");
                    paramsSocket.setValue("audio",ui->lineEditCheminAudioDefaut->text());
                    paramsSocket.setValue("partition",ui->lineEditCheminPartitionDefaut->text());
                    paramsSocket.setValue("enregistrement",ui->lineEditCheminEnregistrementDefaut->text());
                    paramsSocket.setValue("rythme",ui->lineEditCheminRythmeDefaut->text());
                    paramsSocket.endGroup();

                    paramsSocket.beginGroup("CONFIG_BDD");
                    paramsSocket.setValue("dataBaseName","AssistantMusicien");
                    paramsSocket.setValue("database","QMYSQL");
                    paramsSocket.setValue("hostname","172.18.58.14");
                    paramsSocket.setValue("password","snir");
                    paramsSocket.setValue("username","snir");
                    paramsSocket.endGroup();

                    ui->lineEditCheminAudio->setText(ui->lineEditCheminAudioDefaut->text());
                    ui->lineEditCheminPartition->setText(ui->lineEditCheminPartitionDefaut->text());
                    ui->lineEditCheminEnregistrement->setText(ui->lineEditCheminEnregistrementDefaut->text());
                    ui->lineEditCheminRythme->setText(ui->lineEditCheminRythmeDefaut->text());


                    ui->stackedWidgetGestionCheminFichier->setCurrentIndex(0);
                    ui->pushButtonModifierParametreDefaut->setVisible(true);
                }
                else {
                    if(ui->lineEditCheminAudioDefaut->text().isEmpty())
                    {
                        ui->lineEditCheminAudioDefaut->setStyleSheet("background-color: #db343c");
                    }
                    if(ui->lineEditCheminPartitionDefaut->text().isEmpty())
                    {
                        ui->lineEditCheminPartitionDefaut->setStyleSheet("background-color: #db343c");
                    }
                    if(ui->lineEditCheminEnregistrementDefaut->text().isEmpty())
                    {
                        ui->lineEditCheminEnregistrementDefaut->setStyleSheet("background-color: #db343c");
                    }
                    if(ui->lineEditCheminRythmeDefaut->text().isEmpty())
                    {
                        ui->lineEditCheminRythmeDefaut->setStyleSheet("background-color: #db343c");
                    }
                    qtPauseParam(1500);
                    ui->lineEditCheminAudioDefaut->setStyleSheet("background-color: #C2D3EF");
                    ui->lineEditCheminPartitionDefaut->setStyleSheet("background-color: #C2D3EF");
                    ui->lineEditCheminEnregistrementDefaut->setStyleSheet("background-color: #C2D3EF");
                    ui->lineEditCheminRythmeDefaut->setStyleSheet("background-color: #C2D3EF");
                }
            }
        }
    }
    else {
        qDebug()<<"no";
    }
}

void Parametres::on_pushButtonResetAudio_clicked()
{
    ui->lineEditCheminAudio->setText(cheminAudioParDefaut);
}

void Parametres::on_pushButtonReset_clicked()
{
    ui->lineEditCheminPartition->setText(cheminPartitionParDefaut);
}

void Parametres::on_pushButtonResetEnregistrement_clicked()
{
    ui->lineEditCheminEnregistrement->setText(cheminEnregistrementParDefaut);
}

void Parametres::on_pushButtonRythme_clicked()
{
    ui->lineEditCheminRythme->setText(cheminRythmeParDefaut);
}

void Parametres::on_pushButtonCheminAudio_clicked()
{
    QString nomRepertoire;

    nomRepertoire = QFileDialog::getExistingDirectory(this,"Choisir un répertoire de sauvegarde des fichiers audios",cheminAudioParDefaut);
    nomRepertoire+='/';

    if(ui->stackedWidgetGestionCheminFichier->currentIndex()==0)
    {
        ui->lineEditCheminAudio->setText(nomRepertoire);
    }
    if(ui->stackedWidgetGestionCheminFichier->currentIndex()==1)
    {
        ui->lineEditCheminAudioDefaut->setText(nomRepertoire);
    }
}

void Parametres::on_pushButtonCheminPartition_clicked()
{
    QString nomRepertoire;

    nomRepertoire = QFileDialog::getExistingDirectory(this,"Choisir un répertoire de sauvegarde des fichiers partitions",cheminPartitionParDefaut);
    nomRepertoire+='/';

    if(ui->stackedWidgetGestionCheminFichier->currentIndex()==0)
    {
        ui->lineEditCheminPartition->setText(nomRepertoire);
    }
    if(ui->stackedWidgetGestionCheminFichier->currentIndex()==1)
    {
        ui->lineEditCheminPartitionDefaut->setText(nomRepertoire);
    }
}

void Parametres::on_pushButtonCheminEnregistrement_clicked()
{
    QString nomRepertoire;

    nomRepertoire = QFileDialog::getExistingDirectory(this,"Choisir un répertoire de sauvegarde des fichiers d'enregistrements",cheminEnregistrementParDefaut);
    nomRepertoire+='/';

    if(ui->stackedWidgetGestionCheminFichier->currentIndex()==0)
    {
        ui->lineEditCheminEnregistrement->setText(nomRepertoire);
    }
    if(ui->stackedWidgetGestionCheminFichier->currentIndex()==1)
    {
        ui->lineEditCheminEnregistrementDefaut->setText(nomRepertoire);
    }
}

void Parametres::on_pushButtonCheminRythme_clicked()
{
    QString nomRepertoire;

    nomRepertoire = QFileDialog::getExistingDirectory(this,"Choisir un répertoire de sauvegarde des fichiers de rythmes",cheminRythmeParDefaut);
    nomRepertoire+='/';

    if(ui->stackedWidgetGestionCheminFichier->currentIndex()==0)
    {
        ui->lineEditCheminRythme->setText(nomRepertoire);
    }
    if(ui->stackedWidgetGestionCheminFichier->currentIndex()==1)
    {
        ui->lineEditCheminRythmeDefaut->setText(nomRepertoire);
    }
}

void Parametres::on_pushButtonModifierParametreDefaut_clicked()
{
    ui->stackedWidgetGestionCheminFichier->setCurrentIndex(1);
    ui->pushButtonModifierParametreDefaut->setVisible(false);
}
