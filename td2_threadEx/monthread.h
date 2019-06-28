#ifndef MONTHREAD_H
#define MONTHREAD_H


#include <QThread>
#include <QDebug>


class MonThread : public QThread
{
    Q_OBJECT
public:
    MonThread(QString _chaine);
    void run();

private :
    QString nom;

signals:
    void monId(qint64 id);
};

#endif // MONTHREAD_H
