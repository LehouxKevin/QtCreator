#include "serveurwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ServeurWidget w;
    w.show();

    return a.exec();
}
