#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#define NBPVMAX 500
#define EXPERIENCEPASSAGE 200
#define PVMAXINIT 500

#define RESBRETTEUR 20
#define RESPALADIN 15
#define RESBERSERK 5
#define RESASSASSIN 25
#define RESGUERRIER 10
#define RESSAMOURAI 15

#define BONUSDEFPALADIN 1.5
#define BONUSDEFSAMOURAI 1.5
#define BONUSDEFBERSERK 0.5
#define BONUSDEFBRETTEUR 1.5
#define BONUSDEFGUERRIER 1
#define BONUSDEFASSASSIN 3

#define BONUSATTPALADIN 1.5
#define BONUSATTSAMOURAI 1.5
#define BONUSATTBERSERK 3
#define BONUSATTBRETTEUR 1.75
#define BONUSATTGUERRIER 1
#define BONUSATTASSASSIN 0.5

#include <QObject>
#include <QDebug>
#include <iostream>
#include <QRandomGenerator>

#include "typearmement.h"

class Personnage
{
public:
    Personnage(QString _nom, QString _prenom, int _age, double _taille, double _poids, QString _classe);
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage* cible);
    void boirePotionDeVie(int quantitePotion);
    bool estVivant();
    int calculDefence(Personnage *p);
    int calculAttaque(Personnage *p);
    void mettreAJourNiveau(Personnage *p,float xpGagner);
    int determinerResistance();
    int calculerGainExperience(Personnage *joueur,Personnage *ennemi, bool victoire, int etage);
    int faireUnDuel(Personnage *ennemi);
    int calculDegats(Personnage *joueur, Personnage *ennmi);
    //void afficherClasse(competenceDeClasse c);


    QString ObtenirNom();
    QString ObtenirPrenom();
    int ObtenirAge();
    float ObtenirTaille();
    float ObtenirPoids();
    int ObtenirResistance();
    int ObtenirPv();
    int ObtenirPvMax();
    int ObtenirNiveau();
    int ObtenirXp();
    QString ObtenirClasse();
    int ObtenirAttaque();


    void attribuerNom(QString _nom);
    void attribuerPrenom(QString _prenom);
    void attribuerAge(int _age);
    void attributerTaille(float _taille);
    void attribuerPoids(float _poids);


private:
    QString nom;
    QString prenom;
    int age;
    float taille;
    float poids;
    int resistance;
    int pv;
    int pvMax;
    int niveau;
    int xp;
    QString classe;
    int attaqueArme;
    TypeArmement typeArme;

};

#endif // PERSONNAGE_H
