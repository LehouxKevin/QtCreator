#ifndef ELEMENT_H
#define ELEMENT_H

#include <iostream>
#include <QPointF>

using namespace std;

class Element
{
public:
    Element(const int _numero, const int _vitesse);
    virtual ~Element();
    virtual void Afficher() const = 0;

    virtual float ObtenirLongueur() const;
    virtual void ObtenirTemps() const;
    virtual QPointF ObtenirPtFin() const;

    int ObtenirNum();
    void FixerNum(const int _numero);

protected:
    int numero;
    int vitesse = 1;
};

#endif // ELEMENT_H
