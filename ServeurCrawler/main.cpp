#include "serveurcrawler.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ServeurCrawler w;
    w.show();

    return a.exec();
}
