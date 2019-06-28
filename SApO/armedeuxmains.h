#ifndef ARMEDEUXMAINS_H
#define ARMEDEUXMAINS_H

#define EpeeBatarde 25
#define Katana 30
#define Claymore 32
#define Flamberge 35

#include <QObject>

class ArmeDeuxMains
{
public:
    ArmeDeuxMains(QString deuxMain);

private:
    int degats;
    QString nom;
};

#endif // ARMEDEUXMAINS_H
