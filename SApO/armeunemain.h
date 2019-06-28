#ifndef ARMEUNEMAIN_H
#define ARMEUNEMAIN_H

#define Dague 5
#define Wakizashi 8
#define Glaive 10
#define Xiphos 11
#define Cladio 12
#define Rapiere 13

#include <QObject>

class ArmeUneMain
{
public:
    ArmeUneMain(QString _armeMainGauche, QString armeMainDroite);


private:
    int degatsArme;
    bool mainGauche;
    bool mainDroite;
    bool bouclier;
};

#endif // ARMEUNEMAIN_H
