#include "interfaceaccesbdbanque.h"

//InterfaceAccesBDBanque::InterfaceAccesBDBanque(QString hote, QString bd, QString login, QString mdp)
InterfaceAccesBDBanque::InterfaceAccesBDBanque()
{
    EcrireFichierIniBdd();
    LireFichierIniBdd();
    bdd=QSqlDatabase::addDatabase(typeBase);
    bdd.setHostName(ip);
    bdd.setDatabaseName(dataBaseName);
    bdd.setUserName(userName);
    bdd.setPassword(password);
    if(!bdd.open())
    {
        qDebug()<<"Database acces erorr : "<<bdd.lastError();
    }
    else {
        qDebug()<<"Database acess sucess";
    }
}

float InterfaceAccesBDBanque::ObtenirSolde(int numCompte)
{
    QSqlQuery requetePrepare;
    requetePrepare.prepare("select solde from comptes where idCompte = :idr" );
    qDebug()<<"num compte :  : " << numCompte;
    requetePrepare.bindValue(":idr", numCompte);
    if(!requetePrepare.exec())
    {
        qDebug()<<"ObtenirSolde request error : " << requetePrepare.lastError();
    }
    requetePrepare.next();
    return requetePrepare.value("solde").toFloat();
}

void InterfaceAccesBDBanque::MettreAjourLeSolde(int numCompte, float nouveauSolde)
{
    if(CompteExiste(numCompte))
    {
        QSqlQuery requete;
        requete.prepare("update comptes set solde = :ids where idCompte = :idc;");
        requete.bindValue(":ids", nouveauSolde);
        requete.bindValue(":idc", numCompte);
        if(!requete.exec())
        {
            qDebug()<<"MettreAjourLeSolde request error : " << requete.lastError();
        }
    }
    else {
        qDebug()<<"Account " << numCompte << " doesn't exist";
    }
}

void InterfaceAccesBDBanque::creerCompte(int numCompte)
{
    if(!CompteExiste(numCompte))
    {
        QSqlQuery requete;
        requete.prepare("insert into comptes(idCompte, solde, nom, prenom, Ville, id_agence) values (:idr,200, ' ',' ',' ' , 1)");
        requete.bindValue(":idr", numCompte);
        if(!requete.exec())
        {
            qDebug()<<"creerCompte request error : " << requete.lastError();
        }
    }
    else {
        qDebug()<<"Account " << numCompte << " already exist";
    }
}

bool InterfaceAccesBDBanque::CompteExiste(int numCompte)
{
    QSqlQuery requete;
    bool existe=false;
    requete.prepare("select solde from comptes where idCompte=:id;");
    requete.bindValue(":id",numCompte);
    requete.exec();
    if (!requete.exec()){
        qDebug()<<"CompteExiste request error  "<<requete.lastError();
    }
    // si le compte existe on passe existe a vrai
    if (requete.size()!=0)
    {
        existe=true;
    }
    return existe;
}

void InterfaceAccesBDBanque::EcrireFichierIniBdd()
{
    QString nomFichierIni=qApp->applicationName()+".ini";
    QFileInfo testFichier(nomFichierIni);

    if(!testFichier.exists() && !testFichier.isFile())
    {
        QSettings paramsSocket(nomFichierIni,QSettings::IniFormat);

        paramsSocket.beginGroup("CONFIG");
        paramsSocket.setValue("typeBase","QMYSQL");
        paramsSocket.setValue("ip","172.18.58.14");
        paramsSocket.setValue("dataBaseName","banque");
        paramsSocket.setValue("userName","snir");
        paramsSocket.setValue("password","snir");
        paramsSocket.endGroup();

        qDebug()<<"Ini file created";
    }
    else {
        qDebug()<<"Ini file already exist";
    }

}

void InterfaceAccesBDBanque::LireFichierIniBdd()
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
        qDebug()<<"Ini file invalid";
    }
}
