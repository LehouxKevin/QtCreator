#include "testgestionstock.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestGestionStock w;
    w.show();

    return a.exec();
}
