#ifndef WIDGET_H
#define WIDGET_H

#define LARGEUR 20
#define HAUTEUR 10

#define VIDE 0
#define MONSTRE 1
#define TRESOR 4
#define SORTIE 5
#define DEJAVISITE 6
#define PIEGE 10

#define POTION 120

#define NBMONSTRES 6
#define NBPIEGES 5
#define NBPOTIONS 4

#include <QWidget>
#include <QToolButton>
#include <QGridLayout>
#include <QKeyEvent>
#include <QDebug>
#include <QRandomGenerator>
#include <QTimer>
#include <QDateTime>
#include <QLCDNumber>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QMediaPlayer>

#include "personnage.h"
#include "creationperso.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

    void InitialiserMonde(); // Genere les pieges, tresor, positons, ennemis
    void genererPlateau();  // Genere la grille
    void afficherPlateau(); // Affiche la grille
    void resetEtage();  // Lorsqu'on passe à létage suivant, le plateau est reset et les valeur aussi
    void genererPieges();
    void genererPotions();
    void genererMonstres();

    QPoint DonnerPositionUnique();
    double CalculerDistanceTresor(QPoint pos);
    double CalculerDistanceSortie(QPoint pos);

    void keyPressEvent(QKeyEvent *event);

public slots:

    void on_creationPersonnage(QString classe ,QString nom,QString prenom, QString age, QString taille, QString poids, QString armeUneMainOuDeuxMainsOuiOuNon,QString choixArmeMainDroite, QString choixArmeMainGauche, QString choixArmeDeuxMains);

private:
    Ui::Widget *ui;
    int grille[LARGEUR][HAUTEUR];
    QGridLayout *plateau;
    QHBoxLayout *interface;
    QVBoxLayout *infoPerso;
    QVBoxLayout *etatPerso;
    QVBoxLayout *layout;

    QToolButton *tabCases[LARGEUR*HAUTEUR];
    QPoint tresor;
    QPoint posJoueur;
    QPoint sortie;
    //QPoint piege;
    //QPoint potion;
    QList <QPoint> listePositions;
    QLCDNumber *affichageDistanceTresor;
    int etage;
    bool etatTresor;
    int nbPieges;
    int nbPotions;
    int nbMonstres;

    QLabel *resistance;
    QLabel *nbPv;
    //QLabel *pvMax;
    QLabel *niveau;
    QLabel *exp;
    QLabel *etageActuel;

    // interface perso
    QLabel *nomPerso;
    QLabel *prenomPerso;
    QLabel *agePerso;
    QLabel *taillePerso;
    QLabel *poidsPerso;
    QLabel *classePerso;


    QMediaPlayer player;
    QMediaPlayer musiqueFond;

    Personnage *joueur;
    CreationPerso interfaceCreation;
};

#endif // WIDGET_H
