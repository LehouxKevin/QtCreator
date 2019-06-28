#include "calculatriceip.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculatriceIP w;
    w.show();

    return a.exec();
}
