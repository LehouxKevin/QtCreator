#ifndef MONTHREAD_H
#define MONTHREAD_H


#include <QThread>
#include <QDebug>
#include <QBuffer>
#include <iostream>
#include <QDataStream>


class MonThread : public QThread
{
    Q_OBJECT
public:
    MonThread(QString _chaine);
    void run();
    static unsigned int nbThread;

private :
    QString nom;
    static QBuffer zoneCommune;
    void afficherZone();

signals:
    void monId(qint64 id);
};

#endif // MONTHREAD_H
