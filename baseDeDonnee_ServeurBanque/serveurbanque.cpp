#include "serveurbanque.h"

ServeurBanque::ServeurBanque(QObject *object) : QTcpServer ()
{
    qDebug()<<"constructeur serveur";
    bool retVal = connect(this,&QTcpServer::newConnection,this,&ServeurBanque::onServeurBanque_newConnection);

    if(retVal)
    {
        qDebug()<<"Connect de la méthode réussis";
    }
    else {
        QMessageBox message;
        message.setText("Erreur liaison méthode");
        message.exec();
    }
}

void ServeurBanque::Start()
{
    qDebug()<<"Serveur start";
    bool retVal = this->listen(QHostAddress::Any,8888);
    if(retVal)
    {
        qDebug()<<"Serveur en écoute";
    }
    else {
        QMessageBox message;
        message.setText("Erreur écoute");
        message.exec();
    }
}

void ServeurBanque::Stop()
{
    this->close();
}

void ServeurBanque::EnvoyerMessage(QString msg, CompteClient *client)
{
    quint16 taille=0;
    QBuffer tampon;
    tampon.open(QIODevice::WriteOnly);
    QDataStream out(&tampon);
    out << taille << msg;
    taille=tampon.size()-sizeof(taille);
    tampon.seek(0);
    out << taille;
    client->write(tampon.buffer());
}

void ServeurBanque::onServeurBanque_newConnection()
{
    qDebug()<<"New Connection";
    CompteClient *client;

    while(this->hasPendingConnections())
    {
        qDebug()<<"acceptation du client";
        QTcpSocket *c;
        c=this->nextPendingConnection();
        //client=qobject_cast<CompteClient*>(c);
        client=(CompteClient*)(c);
        qDebug()<<"Connexion des methodes aux clients";
        connect(client,&CompteClient::readyRead,this,&ServeurBanque::onCompteClient_readyRead);
        connect(client,&CompteClient::disconnected,this,&ServeurBanque::onCompteClient_disconnected);
        qDebug()<<"Ajout du client à la liste";
        lesConnexionsClients.append(client);
        qDebug()<<"Envoyer message";
        EnvoyerMessage("Entrez votre numéro de compte",client);
    }
}

void ServeurBanque::onCompteClient_disconnected()
{
    CompteClient *client = (CompteClient*)sender();
    if(!client)
    {
        QMessageBox msg;
        msg.setText("Erreur deconnexion : " + client->errorString());
        msg.exec();
    }
    else {
        lesConnexionsClients.removeOne(client);
        client->deleteLater();
    }
}

void ServeurBanque::onCompteClient_readyRead()
{
    qDebug()<<"ready read";
    CompteClient *client=(CompteClient*)sender();
    quint16 taille=0;
    float montant;
    int numeroCompte;
    QChar commande;

    // Si il y a des octets en attente de lecture
    if(client->bytesAvailable() >= (qint64)sizeof (taille))
    {
        // Liaison de la socket client au flux
        QDataStream in(client);
        // Lecture de la taille
        in >> taille;

        // Si la taille des données en attente est au moins supérieur à la taille
        if(client->bytesAvailable() >= (qint64)taille)
        {
            // lecture de la commande
            in >> commande;
            if (commande=="N") // Numero de compte
            {
                in >> numeroCompte;
                qDebug()<<"numero compte : " << numeroCompte;
                client->DefinirNumCompte(numeroCompte);
            }
            else {
                if (commande=="S") // Solde
                {
                    //client=(CompteClient*)socketClient;
                    EnvoyerMessage(QString::number((int)client->ObtenirSolde()), client);
                }
                else {
                    if(commande == "R" || commande == "D")
                    {
                        // lecture du montant
                        in >> montant;
                        qDebug()<<"montant " << montant;
                        if (commande=="R") // Retirer
                        {
                            client->Retirer(montant);
                            EnvoyerMessage("Nouveau solde : " + QString::number((int)client->ObtenirSolde()), client);
                        }
                        if (commande=="D") // Deposer
                        {
                            client->Deposer(montant);
                            EnvoyerMessage("Nouveau solde : " + QString::number((int)client->ObtenirSolde()), client);
                        }
                    }
                }
            }
        }
    }
}
