#include "banquemainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BanqueMainWindow w;
    w.show();

    return a.exec();
}
