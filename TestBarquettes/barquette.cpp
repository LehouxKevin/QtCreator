#include "barquette.h"

Barquette::Barquette(const int _emplacement, const int _codeProduit) : emplacement(_emplacement), codeProduit(_codeProduit)
{
    capteurCourant=0;
    capteurs=0;
}

void Barquette::run()
{
    while (emplacement!=capteurs)
    {
        synchro.lock();

    }
}

QString Barquette::ObtenirCodeProduit()
{
    return this->codeProduit;
}

void Barquette::on_CapteurChange(quint8 _capteurs)
{
    capteurs=_capteurs;
    synchro.unlock();
}
