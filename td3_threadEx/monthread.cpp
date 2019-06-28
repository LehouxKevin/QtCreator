#include "monthread.h"

QBuffer MonThread::zoneCommune;
unsigned int MonThread::nbThread=0;

MonThread::MonThread(QString _chaine) : nom(_chaine)
{
    nbThread++;
}

void MonThread::run()
{
    zoneCommune.open(QIODevice::ReadWrite);
    QDataStream out(&zoneCommune);
    qDebug()<<"Debut lancement du thread" << nom << " id : " << (quint64)QThread::currentThreadId();
    out << (quint64)QThread::currentThreadId();
    out<<nom;
    afficherZone();

    if(nom.toInt()%2==0)
    {
        emit monId((quint64)currentThreadId());
    }

}

void MonThread::afficherZone()
{
    zoneCommune.open(QIODevice::ReadWrite);
    QDataStream in(&zoneCommune);
    qint64 ptr;
    QString chaine;
    in>>ptr>>chaine;
    qDebug()<<" thread " << nom << "zone commune " << chaine << " id : " << ptr;
}

