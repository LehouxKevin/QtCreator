#include "element.h"

Element::Element(const int _numero, const int _vitesse) : numero(_numero), vitesse(_vitesse)
{

}

Element::~Element()
{

}

float Element::ObtenirLongueur() const
{

}

void Element::ObtenirTemps() const
{

}

QPointF Element::ObtenirPtFin() const
{

}

int Element::ObtenirNum()
{
    return numero;
}

void Element::FixerNum(int _numero)
{
    numero = _numero;
}
