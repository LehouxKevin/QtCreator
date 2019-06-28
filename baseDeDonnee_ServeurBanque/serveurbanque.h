#ifndef SERVEURBANQUE_H
#define SERVEURBANQUE_H

#include <QTcpServer>
#include <QDataStream>
#include <QDialog>
#include <QtNetwork>
#include <QByteArray>
#include <QAbstractSocket>
#include <QChar>
#include <QHostInfo>
#include <QObject>
#include <QMessageBox>

#include "compteclient.h"

class ServeurBanque : public QTcpServer
{
    Q_OBJECT

public :
    ServeurBanque(QObject *object = nullptr);

    void Start();
    void Stop();
    void EnvoyerMessage(QString msg, CompteClient *client);

private:
    QList <CompteClient *> lesConnexionsClients;

private slots :
    void onServeurBanque_newConnection();
    void onCompteClient_disconnected();
    void onCompteClient_readyRead();
};

#endif // SERVEURBANQUE_H
