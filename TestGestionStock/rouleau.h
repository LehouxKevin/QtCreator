#ifndef ROULEAU_H
#define ROULEAU_H
#include <string>
#include <iostream>
#include <QDebug>

using namespace std;

class Rouleau
{
public:
    Rouleau();

    Rouleau(string & _reference, short & _diametre);
    Rouleau(const Rouleau &);

    void AffecterAlveole(const short _rangee, const short _colonne);
    void ObtenirLocalisation(short &_rangee, short &_colonne);
    short ObtenirDiametre();
    string ObtenirReference();
    bool operator < (const Rouleau &autreRouleau) const;


private :
     string reference;
     short diametre;
     short rangee;
     short colonne;
};

#endif // ROULEAU_H
