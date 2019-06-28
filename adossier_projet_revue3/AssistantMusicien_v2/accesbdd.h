#ifndef ACCESBDD_H
#define ACCESBDD_H

#include <QObject>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>
#include <QSettings>
#include <QApplication>
#include <QFileInfo>

#include "titre.h"

#define DATABASE "QMYSQL"
#define HOSTNAME "172.18.58.14"
#define DATABASENAME "AssistantMusicien"
#define USERNAME "snir"
#define PASSWORD "snir"

#define NOM_FICHIER_INI "Settings.ini"

class AccesBdd
{
public:
    AccesBdd();


    // Gestion bdd
    void connexionBDD();

    void LireFichierIni();
    void EcrireFichierIni();

    bool verifierBdd();

    // Gestionnaire Liste
    QList <QString> obtenirListeTitre();
    void enregistrerTitre(Titre *titre);
    void enregistrerModificationTitre(Titre *titre);

    QList <QString> obtenirListeTitreFiltreParTitre(QString texte);
    QList <QString> obtenirListeTitreFiltreParInterprete(QString texte);

    Titre* obtenirTitreAModifier(QString nomTitre);

    QList<Titre *> obtenirListeTitreSet(QList <QString> listeSet);

    // sets

    QList <QString> obtenirListeSetsDansBdd();
    QList <QString> obtenirListeTitreDansSetSelectionner(QString nomSet,QString date,QString genre);

    int creerSetMusical(QString nomSet, QString genre, QString jours, QString mois, QString annee);
    void enregistrerSetMusical(QList <QString> listeTitreSet, int idSet);

    void supprimerSet(QString nomSet,QString date, QString genre);
    QList <QString> supprimerTitre(QString nomTitre);  // Retourne la liste de chemins à supprimer

    // partitions

    QList <QString> obtenirListeCheminsPartitions(QList <QString> listeNom);


    // Metronome

    QStringList obtenirCheminMetronome(QString cheminPartition);

private :
    QSqlDatabase bdd;

    QString database;
    QString hostname;
    QString dataBaseName;
    QString username;
    QString password;
};

#endif // ACCESBDD_H
