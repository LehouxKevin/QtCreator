#ifndef BARQUETTE_H
#define BARQUETTE_H


#include <QThread>
#include <QDebug>
#include <QMutex>

class Barquette : public QThread
{
public:
    Barquette(const int _emplacement, const int _codeProduit);

    void run();
    QString ObtenirCodeProduit();

public slots:

    void on_CapteurChange(quint8 _capteurs);

private:
    QString emplacement;
    QString codeProduit;
    QMutex synchro;
    quint8 capteurs;
    int capteurCourant;
};

#endif // BARQUETTE_H
