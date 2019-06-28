#include "armeunemain.h"

ArmeUneMain::ArmeUneMain(QString _armeMainGauche, QString armeMainDroite)
{
    degatsArme = 0;
    bouclier = false;

    if(_armeMainGauche == "Dague")
    {
        degatsArme += Dague;
    }
    if(_armeMainGauche == "Wakizashi")
    {
        degatsArme += Wakizashi;
    }
    if(_armeMainGauche == "Glaive")
    {
        degatsArme += Glaive;
    }
    if(_armeMainGauche == "Xiphos")
    {
        degatsArme += Xiphos;
    }
    if(_armeMainGauche == "Cladio")
    {
        degatsArme += Cladio;
    }
    if(_armeMainGauche == "Rapiere")
    {
        degatsArme += Rapiere;
    }
    if(_armeMainGauche == "Bouclier")
    {
        bouclier = true;
    }
}
