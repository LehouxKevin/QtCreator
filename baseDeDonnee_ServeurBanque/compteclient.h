#ifndef COMPTECLIENT_H
#define COMPTECLIENT_H


#include <QObject>
#include <QDataStream>
#include <QDialog>
#include <QtNetwork>
#include <QByteArray>
#include <QAbstractSocket>
#include <QChar>
#include <QHostInfo>
#include <QTcpSocket>

#include "interfaceaccesbdbanque.h"

class CompteClient  : public QTcpSocket
{
    Q_OBJECT
public:
    CompteClient(QObject *object = nullptr);
    bool Retirer(float montant);
    void Deposer(float montant);
    float ObtenirSolde();
    void DefinirNumCompte(int nc);
    int ObtenirNumCompte();

    static InterfaceAccesBDBanque bd;

private :
    int numCompte;
    float solde;
};

#endif // COMPTECLIENT_H