#include "stock.h"

Stock::Stock()
{

}


void Stock::AjouterRouleau(Rouleau *_nouveauRouleau)
{
    insert(_nouveauRouleau);
}

short Stock::RechercherSerie(const POSITION_STOCK _positionDebut)
{
    /*short diametre=0;
     do {
         foreach(Rouleau *rouleau, this) // A verifier
         {
             if(rouleau->ObtenirDiametre()>=diametre) // Ne pas prendre le diametre le plus elever mais le plus recurent
             {
                 if(rouleau->ObtenirDiametre()==diametre)
                 {
                     listeRouleaux.append(rouleau);
                 }
                 if(rouleau->ObtenirDiametre()>diametre)
                 {
                     diametre = rouleau->ObtenirDiametre();
                     listeRouleaux.clear();
                 }
             }
      }
     }while(listeRouleaux.length()>=6);*/

    short diametre = 0;
    foreach(Rouleau *rouleau, this)
    {
        diametre = rouleau->ObtenirDiametre();
        it=find(diametre);

    }


    return 0;
}

void Stock::SortirRouleau(const POSITION_STOCK _positionRouleau)
{

}


