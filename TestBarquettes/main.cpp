#include "partieoperative.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PartieOperative w;
    w.show();

    return a.exec();
}
