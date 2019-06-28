#include "segment.h"

Segment::Segment(const float _longueur, const float _angle, const int _numero, const int _vitesse): Element(_numero,_vitesse),longueur(_longueur), angle(_angle)
{

}

void Segment::Afficher() const
{
    cout << "Trajectoire :";
    cout << "Segment L = " << longueur << " A = " << angle << endl;
}
