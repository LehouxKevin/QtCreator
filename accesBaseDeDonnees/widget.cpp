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

void Widget::connexionBase()
{
    bd=QSqlDatabase::addDatabase("QMYSQL");
    bd.setHostName("172.18.58.14");
    bd.setDatabaseName("france2015");
    bd.setUserName("snir");
    bd.setPassword("snir");
    if(!bd.open())
    {
        qDebug()<<"pb acces bd"<<bd.lastError();
    }
    else {
        qDebug()<<"acces bd ok";
    }
}

void Widget::connexionBaseFichierIni()
{
    bdIni=QSqlDatabase::addDatabase(typeBase);
    bdIni.setHostName(ip);
    bdIni.setDatabaseName(dataBaseName);
    bdIni.setUserName(userName);
    bdIni.setPassword(password);
    if(!bdIni.open())
    {
        qDebug()<<"pb acces bd"<<bdIni.lastError();
    }
    else {
        qDebug()<<"acces bd ok";
    }
}

void Widget::requeteDepartements()
{
    QSqlQuery requete("select departement_nom from departements;" );
    if(!requete.exec())
    {
        qDebug()<<"pb requete"<<requete.lastError();
    }
    int nbLignes=requete.size();
    qDebug()<<"nombre departements : " << nbLignes;
    QString nomDepartement;
    while(requete.next())
    {
        nomDepartement=requete.value("departement_nom").toString();
        qDebug()<<nomDepartement;
    }
}

void Widget::ecrireFichier()
{
    QString nomFichierIni=qApp->applicationName()+".ini";
    QSettings paramsSocket(nomFichierIni,QSettings::IniFormat);

    paramsSocket.beginGroup("CONFIG");
    paramsSocket.setValue("typeBase","QMYSQL");
    paramsSocket.setValue("ip","172.18.58.14");
    paramsSocket.setValue("dataBaseName","france2015");
    paramsSocket.setValue("userName","snir");
    paramsSocket.setValue("password","snir");
    paramsSocket.endGroup();

    qDebug()<<"fichier ini creer";
}

void Widget::lireFichier()
{
    QString nomFichierIni=qApp->applicationName()+".ini";
    QFileInfo testFichier(nomFichierIni);

    if(testFichier.exists() && testFichier.isFile())
    {
        QSettings paramsSocket(nomFichierIni,QSettings::IniFormat);

        typeBase=paramsSocket.value("CONFIG/typeBase").toString();
        ip=paramsSocket.value("CONFIG/ip").toString();
        dataBaseName=paramsSocket.value("CONFIG/dataBaseName").toString();
        userName=paramsSocket.value("CONFIG/userName").toString();
        password=paramsSocket.value("CONFIG/password").toString();
        qDebug()<<ip<<dataBaseName<<userName<<password;
    }
    else {
        qDebug()<<"fichier ini non valide";
    }
}

void Widget::on_pushButtonVoir_clicked()
{
    ecrireFichier();
    lireFichier();
    //connexionBase();
    connexionBaseFichierIni();
    QSqlQuery requetePrepare;
    requetePrepare.prepare("select departement_nom from departements where departement_code = :idr" );
    qDebug()<<"numero departement : " << ui->lineEditNumero->text();
    QString numeroDepartement = ui->lineEditNumero->text();
    requetePrepare.bindValue(":idr", numeroDepartement);
    if(!requetePrepare.exec())
    {
        qDebug()<<"pb requete" << requetePrepare.lastError();
    }

    QString nomDepartement;
    requetePrepare.next();
    nomDepartement = requetePrepare.value("departement_nom").toString();
    ui->lineEditNom->setText(nomDepartement);
    qDebug()<<"nom departement : " << nomDepartement;
}
