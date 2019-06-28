#ifndef INTERFACEACCESBDBANQUE_H
#define INTERFACEACCESBDBANQUE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QSettings>
#include <QApplication>
#include <QFileInfo>
#include <QDebug>
#include <QMessageBox>

class InterfaceAccesBDBanque
{

public:
    //InterfaceAccesBDBanque(QString hote, QString bd, QString login, QString mdp);
    InterfaceAccesBDBanque();
    float ObtenirSolde(int numCompte);
    void MettreAjourLeSolde(int numCompte, float nouveauSolde);
    void creerCompte(int numCompte);
    bool CompteExiste(int numCompte);

private :
    QSqlDatabase bdd;

    QString typeBase;
    QString ip;
    QString dataBaseName;
    QString userName;
    QString password;

    void EcrireFichierIniBdd();
    void LireFichierIniBdd();
};

#endif // INTERFACEACCESBDBANQUE_H
