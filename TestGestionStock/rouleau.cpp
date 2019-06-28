#include "rouleau.h"

Rouleau::Rouleau()
{

}

Rouleau::Rouleau(string &_reference, short &_diametre) : reference(_reference), diametre(_diametre)
{

}

Rouleau::Rouleau(const Rouleau &)
{

}

void Rouleau::AffecterAlveole(const short _rangee, const short _colonne)
{
    rangee = _rangee;
    colonne = _colonne;
}

void Rouleau::ObtenirLocalisation(short &_rangee, short &_colonne)
{
    _rangee = rangee;
    _colonne = colonne;
}

short Rouleau::ObtenirDiametre()
{
    return diametre;
}

string Rouleau::ObtenirReference()
{
    return reference;
}

bool Rouleau::operator <(const Rouleau &autreRouleau) const
{
    return diametre < autreRouleau.diametre ;
}
