#include <QCoreApplication>
#include "monthread.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MonThread *tab[5];

    for(int i=0;i<5;i++)
    {
        tab[i]=new MonThread(QString::number(i));
    }
    tab[0]->start();
    tab[1]->start();
    tab[2]->start();
    tab[3]->start();
    tab[4]->start();


    return a.exec();
}
