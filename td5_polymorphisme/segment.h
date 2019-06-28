#ifndef SEGMENT_H
#define SEGMENT_H

#include "element.h"

class Segment : public Element
{
public:
    Segment(const float _longueur, const float _angle, const int _numero, const int _vitesse);
    virtual void Afficher()const;

private:
    float longueur;
    float angle;
};

#endif // SEGMENT_H
