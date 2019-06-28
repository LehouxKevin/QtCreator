#include "monthread.h"

QBuffer MonThread::zoneCommune;
QMutex MonThread::verrou;
unsigned int MonThread::nbThread=0;

MonThread::MonThread(QString _chaine) : nom(_chaine)
{
    nbThread++;
}

void MonThread::run()
{
    verrou.lock();
    zoneCommune.open(QIODevice::ReadWrite);
    QDataStream out(&zoneCommune);
    qDebug()<<"Debut lancement du thread" << nom << " id : " << (quint64)QThread::currentThreadId();
    out << (quint64)QThread::currentThreadId();
    out<<nom;
    afficherZone();
    emit monId((quint64)currentThreadId());
    verrou.unlock();
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

