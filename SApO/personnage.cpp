#include "personnage.h"

Personnage::Personnage(QString _nom, QString _prenom, int _age, double _taille, double _poids, QString _classe) : nom(_nom), prenom(_prenom), age(_age), taille(_taille), poids(_poids), classe(_classe)
{
    xp = 0;
    niveau = 1;
    pv = 500;
    pvMax = 500;
    /*armeUneMain = false;
    armeUneMain = true;*/

    resistance=determinerResistance();
    //attaqueArme = calculAttaque();
    attaqueArme = 10;
}

void Personnage::recevoirDegats(int nbDegats)
{
    pv-=nbDegats;
}

void Personnage::attaquer(Personnage* cible)
{
    //float attaque = ()
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
    if(pv+=quantitePotion <= pvMax)
    {
        pv+=quantitePotion;
    }
    else {
        pv=pvMax;
    }
}

int Personnage::calculDefence(Personnage *p)
{
    return 3;
}

int Personnage::calculAttaque(Personnage *p)
{
    double bonus;
    int attaque;

    if(p->classe == "Bretteur")
    {
        bonus += BONUSATTBRETTEUR;
    }
    if(p->classe == "Paladin")
    {
        bonus += BONUSATTPALADIN;
    }
    if(p->classe == "Berserk")
    {
        bonus += BONUSATTBERSERK;
    }
    if(p->classe == "Assassin")
    {
        bonus += BONUSATTASSASSIN;
    }
    if(p->classe == "Guerrier")
    {
        bonus += BONUSATTGUERRIER;
    }
    if(p->classe == "Samourai")
    {
        bonus += BONUSATTSAMOURAI;
    }

    attaque = p->niveau * ((p->poids * p->taille) / p->age) * bonus;

    // tester armes
    //if()

    return attaque;

}

void Personnage::mettreAJourNiveau(Personnage *p,float xpGagner)
{
    p->xp += xpGagner;
    if(p->xp >= EXPERIENCEPASSAGE)
    {
        p->niveau++;
        p->xp-= EXPERIENCEPASSAGE;
        p->pvMax += PVMAXINIT / p->niveau;
        p->pv = p->pvMax;
        if(p->classe == "Bretteur")
        {
            p->resistance += RESBRETTEUR;
        }
        if(p->classe == "Paladin")
        {
            p->resistance += RESPALADIN;
        }
        if(p->classe == "Berserk")
        {
            p->resistance += RESBERSERK;
        }
        if(p->classe == "Assassin")
        {
            p->resistance += RESASSASSIN;
        }
        if(p->classe == "Guerrier")
        {
            p->resistance += RESGUERRIER;
        }
        if(p->classe == "Samourai")
        {
            p->resistance += RESSAMOURAI;
        }
    }
}

int Personnage::determinerResistance()
{
    int retVal=0;
    float bonus = 0;
    if(classe == "Bretteur")
    {
        bonus = BONUSDEFBRETTEUR;
    }
    if(classe == "Paladin")
    {
        bonus = BONUSDEFPALADIN;
    }
    if(classe == "Berserk")
    {
        bonus = BONUSDEFBERSERK;
    }
    if(classe == "Assassin")
    {
        bonus = BONUSDEFASSASSIN;
    }
    if(classe == "Guerrier")
    {
        bonus = BONUSDEFGUERRIER;
    }
    if(classe == "Samourai")
    {
        bonus = BONUSDEFSAMOURAI;
    }

    retVal = ((bonus * niveau * (poids * taille))/age);


    // Testé le type d'arme, bouclier ou non etc...
    /*if()
    {

    }*/

    // retVal = retVal + attaqueArme
    QRandomGenerator gen;

    retVal = retVal * 0.5 + gen.bounded(2);

    return retVal;
}

int Personnage::calculerGainExperience(Personnage *joueur, Personnage *ennemi, bool victoire, int tour)
{
    int exp = 0;
    if(victoire)
    {
        exp = 2 * (ennemi->niveau + joueur->niveau +1) * tour;
    }
    else {
        exp = (ennemi->niveau + joueur->niveau + 1) * tour;
    }
    return exp;
}

int Personnage::faireUnDuel(Personnage *ennemi)
{
    bool joueurGagne = false;
    bool ennemiGagne = false;
    int tour = 0;
    int exp = 0;
    int degat;

    do {
        degat = calculDegats(this,ennemi);
        ennemi->pv -= degat;
        degat = calculDegats(ennemi,this);
        this->pv -= degat;
        tour++;
    }while(this->pv > 0 && ennemi->pv > 0);

    if(this->pv > 0 && ennemi->pv > 0)
    {
        this->pv += 100;
        if(this->pv > pvMax)
        {
            this->pv = pvMax;
        }
    }
    else {
        this->pv = 0;
    }

    exp = calculerGainExperience(this,ennemi,joueurGagne,tour);
    mettreAJourNiveau(this,exp);
}

int Personnage::calculDegats(Personnage *joueur, Personnage *ennemi)
{
    int degats;
    int att;
    int def;
    att = calculAttaque(joueur);
    def = calculDefence(ennemi);
    degats = att-def;
    if(degats<=0)
    {
        degats = 1;
    }
    return degats;
}

QString Personnage::ObtenirNom()
{
    return nom;
}

QString Personnage::ObtenirPrenom()
{
    return prenom;
}

int Personnage::ObtenirAge()
{
    return age;
}

float Personnage::ObtenirTaille()
{
    return taille;
}

float Personnage::ObtenirPoids()
{
    return poids;
}

int Personnage::ObtenirResistance()
{
    return resistance;
}

int Personnage::ObtenirPv()
{
    return pv;
}

int Personnage::ObtenirPvMax()
{
    return pvMax;
}

int Personnage::ObtenirNiveau()
{
    return niveau;
}

int Personnage::ObtenirXp()
{
    return xp;
}

QString Personnage::ObtenirClasse()
{
    return classe;
}

int Personnage::ObtenirAttaque()
{
    return attaqueArme;
}

void Personnage::attribuerNom(QString _nom)
{
    nom = _nom;
}

void Personnage::attribuerPrenom(QString _prenom)
{
    prenom =  _prenom;
}

void Personnage::attribuerAge(int _age)
{
    age = _age;
}

void Personnage::attributerTaille(float _taille)
{
    taille = _taille;
}

void Personnage::attribuerPoids(float _poids)
{
    poids = _poids;
}
