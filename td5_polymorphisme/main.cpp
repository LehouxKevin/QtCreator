#include <QCoreApplication>
#include "segment.h"
#include "element.h"
#include "trajectoire.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Segment *s1 = new Segment(9,0,1,1);
    Segment *s2 = new Segment(7.07,0.785398,1,1);

    s1->Afficher();
    s2->Afficher();



    return a.exec();
}
