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

class AccesBdd
{
public:
    AccesBdd();


    // Gestion bdd
    void connexionBDD();

    // Gestionnaire Liste
    QList <QString> obtenirListeTitre();
    void enregistrerTitre(Titre *titre);

    QList <QString> obtenirListeTitreFiltreParTitre(QString texte);
    QList <QString> obtenirListeTitreFiltreParInterprete(QString texte);

    Titre* obtenirTitreAModifier(QString nomTitre);


    // Metronome
    void enregistrerPreset(QString  cheminPresetMetronome, int idTitre);

private :
    QSqlDatabase bdd;
};

#endif // ACCESBDD_H
