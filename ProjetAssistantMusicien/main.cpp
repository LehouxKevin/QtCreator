#include "assistsantmusicien.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AssistsantMusicien w;
    w.show();

    return a.exec();
}
