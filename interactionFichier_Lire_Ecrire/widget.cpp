#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButtonLire_clicked()
{
    QString adresseIp;
    int numeroPort;
    QChar h,d,j;
    QString nomFichierIni=qApp->applicationName()+".ini";
    QFileInfo testFichier(nomFichierIni);

    if(testFichier.exists() && testFichier.isFile())
    {
        QSettings paramsSocket(nomFichierIni,QSettings::IniFormat);

        adresseIp=paramsSocket.value("CONFIG/ip").toString();
        numeroPort=paramsSocket.value("CONFIG/port").toInt();
        d=paramsSocket.value("COMMANDES/date").toString().at(0);
        h=paramsSocket.value("COMMANDES/heure").toString().at(0);
        j=paramsSocket.value("COMMANDES/jour").toString().at(0);
        qDebug()<<adresseIp<<numeroPort<<h<<"/"<<d<<"/"<<j;
    }
    else {
        qDebug()<<"fichier ini non valide";
    }
}

void Widget::on_pushButtonEcrire_clicked()
{
    QString nomFichierIni=qApp->applicationName()+".ini";
    QSettings paramsSocket(nomFichierIni,QSettings::IniFormat);

    paramsSocket.beginGroup("CONFIG");
    paramsSocket.setValue("ip","192.168.0.2");
    paramsSocket.setValue("port",9999); // Entier pas necessairement besoin de guillement
    paramsSocket.endGroup();

    paramsSocket.beginGroup("COMMANDES");
    paramsSocket.setValue("heure","H"); // Pas de simple guillemets
    paramsSocket.setValue("date","D");  // Pas de simple guillemets
    paramsSocket.setValue("jour","J");  // Pas de simple guillemets
    paramsSocket.endGroup();
    qDebug()<<"fichier ini creer";
}
