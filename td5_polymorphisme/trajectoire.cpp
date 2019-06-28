#include "trajectoire.h"

Trajectoire::Trajectoire(const int _tailleMaxi) : tailleMaxi(_tailleMaxi)
{
    parcours = new Element*[_tailleMaxi];
    nbEtapes=0;
}

void Trajectoire::Ajouter(Element * const _pElement)
{
    if(nbEtapes<tailleMaxi)
    {
        parcours[nbEtapes++]=_pElement;
    }
}

void Trajectoire::Afficher()
{
    for(int i=0;i<nbEtapes;i++)
    {
        parcours[i]->Afficher();
    }
}
