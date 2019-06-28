#include "monthread.h"

MonThread::MonThread(QString _chaine) : nom(_chaine)
{

}

void MonThread::run()
{
    qDebug()<< "je suis le thread" << nom;
    qDebug()<<"mon id est " << currentThreadId();

}
