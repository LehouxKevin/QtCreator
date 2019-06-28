#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lineEditNomDept->setReadOnly(true);
    ecrireFichier();
    lireFichier();
    connexionBase();


    ui->comboBoxRegions->addItem("Choisissez une région");

    QSqlQuery requete("select regions_id,region_nom from regions order by region_nom;" );
    if (!requete.exec()){
        qDebug()<<"pb requete "<<requete.lastError();
    }
    QString nom;
    int id;

    while(requete.next())
    {
        nom=requete.value("region_nom").toString();
        id=requete.value("regions_id").toInt();
        ui->comboBoxRegions->addItem(nom,id);
    }
}

Widget::~Widget()
{
    delete ui;
}


void Widget::connexionBase()
{
    bd=QSqlDatabase::addDatabase(typeBase);
    bd.setHostName(ip);
    bd.setDatabaseName(dataBaseName);
    bd.setUserName(userName);
    bd.setPassword(password);
    if(!bd.open())
    {
        qDebug()<<"pb acces bd"<<bd.lastError();
    }
    else {
        qDebug()<<"acces bd ok";
    }
}

void Widget::ecrireFichier()
{
    QString nomFichierIni=qApp->applicationName()+".ini";
    QFileInfo testFichier(nomFichierIni);
    if(!testFichier.exists() && !testFichier.isFile())
    {
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
    else {
        qDebug()<<"fichier ini deja creer";
    }

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

void Widget::on_pushButtonObtenirNomDept_clicked()
{
    QSqlQuery requete;
    requete.prepare("select departement_nom from departements where departement_code = :idr" );
    QString numeroDepartement = ui->lineEditNumeroDept->text();
    qDebug()<<"Numero departement : " << numeroDepartement;
    requete.bindValue(":idr", numeroDepartement);
    if(!requete.exec())
    {
        qDebug()<<"pb requete"<<requete.lastError();
    }
    else {
        QString nomDepartement;
        requete.next();
        nomDepartement = requete.value("departement_nom").toString();
        ui->lineEditNomDept->setText(nomDepartement);
        qDebug()<<"nom departement : " << nomDepartement;

    }
}

void Widget::on_comboBoxRegions_currentIndexChanged(int index)
{
    qDebug()<<"Entree combo box regions signal";
    // recupere l'id de la region
    int idRegion=ui->comboBoxRegions->itemData(index).toInt();
    // vider la liste des departements
    ui->comboBoxDepartements->clear();
    ui->comboBoxDepartements->addItem("Choisissez un département");

    // Remplir la liste de departements
    QSqlQuery requete;
    requete.prepare("select departement_nom, departement_id from departements,regions where departement_region_id = regions.regions_id and departement_region_id = :idr order by departement_nom;" );
    requete.bindValue(":idr", idRegion);
    if (!requete.exec()){
        qDebug()<<"pb requete "<<requete.lastError();
    }
    QString nom;
    int id;

    while(requete.next())
    {
        nom=requete.value("departement_nom").toString();
        id=requete.value("departement_id").toInt();
        ui->comboBoxDepartements->addItem(nom,id);
    }
}

void Widget::on_comboBoxDepartements_currentIndexChanged(int index)
{
    qDebug()<<"Entree combo box departement signal";
    // recupere l'id du departement
    int idDepartement=ui->comboBoxDepartements->itemData(index).toInt();
    // vider la liste des villes
    ui->comboBoxVilles->clear();
    ui->comboBoxVilles->addItem("Choisissez une ville");

    // Remplir la liste de departements
    QSqlQuery requete;
    requete.prepare("select ville_nom from villes,departements,regions where departement_region_id = regions.regions_id and ville_departement_id = departement_id and ville_departement_id = :idr order by ville_nom;" );
    requete.bindValue(":idr", idDepartement);
    if (!requete.exec()){
        qDebug()<<"pb requete "<<requete.lastError();
    }
    QString nom;

    while(requete.next())
    {
        nom=requete.value("ville_nom").toString();
        ui->comboBoxVilles->addItem(nom);
    }
}
