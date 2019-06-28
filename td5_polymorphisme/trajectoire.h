#ifndef TRAJECTOIRE_H
#define TRAJECTOIRE_H

#include "element.h"

class Trajectoire
{
public:
    Trajectoire(const int _tailleMaxi);
    ~Trajectoire();
    void Ajouter(Element * const  _pElement);
    void Afficher();

private :
    int nbEtapes;
    int tailleMaxi;
    Element **parcours;
};

#endif // TRAJECTOIRE_H
