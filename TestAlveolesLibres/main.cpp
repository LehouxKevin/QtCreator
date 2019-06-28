#include "testalveoleslibres.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestAlveolesLibres w;
    w.show();

    return a.exec();
}
