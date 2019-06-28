#ifndef STOCK_H
#define STOCK_H

#include "rouleau.h"

#include <set>
#include <iterator>


typedef std::multiset <Rouleau *> stockRouleau;
typedef stockRouleau::iterator POSITION_STOCK;

class Stock : public stockRouleau
{
public:
    Stock();

    void AjouterRouleau(Rouleau * _nouveauRouleau);
    short RechercherSerie(const POSITION_STOCK _positionDebut);
    void SortirRouleau(const POSITION_STOCK _positionRouleau);

};

#endif // STOCK_H
