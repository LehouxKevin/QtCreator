#include "mainwindow.h"
#include "ui_mainwindow.h"

typedef struct
{
    QString etablissement;
    double vitesse;
}typeGeneral;

typedef struct
{
    QString modele;
    QString date;
    QString numeroSerie;
    double capacite;
    double sensibilite;
}typeJauge;

typedef struct
{
    double coefficient;
    double ordonne;
}typeGain;

typedef struct
{
    typeGain gain;
}typeFiltre;

typedef struct
{
    QString id;
    typeJauge jauge;
    typeFiltre filtre;
}typePalier;

typedef struct
{
    typeGeneral general;
    typePalier palier;
}typeConfiguration;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOuvrir_Fichier_triggered()
{
    QString nomFichierXml=QFileDialog::getOpenFileName(this,tr("Ouverture fichier xml"),".",tr("Fichier XML (*.xml *.XML)"));

    QFile fichierXml(nomFichierXml);
    bool open = fichierXml.open(QIODevice::ReadOnly | QIODevice::Text);
    if(!open)
    {
        qDebug()<< fichierXml.errorString();
    }
    else {
        qDebug()<< "File opened OK";
    }
    QXmlStreamReader fluxXml(&fichierXml);
}

void MainWindow::on_actionEnregistrer_Fichier_triggered()
{
    QString nomFichierXml = QFileDialog::getSaveFileName(this,tr("Sauvegarder fichier xml"),".",tr("Fichier XML (*.xml *.XML)"));
}


void MainWindow::on_actionQuitter_triggered()
{

}

