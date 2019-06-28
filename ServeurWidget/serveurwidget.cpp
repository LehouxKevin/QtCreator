#include "serveurwidget.h"
#include "ui_serveurwidget.h"

ServeurWidget::ServeurWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServeurWidget)
{
    ui->setupUi(this);

    socketEcouteServeur = new QTcpServer;

    connect(socketEcouteServeur,&QTcpServer::newConnection,this,&ServeurWidget::onQTcpServer_newConnection);
}

ServeurWidget::~ServeurWidget()
{
    delete ui;
}

void ServeurWidget::on_pushButtonLancement_clicked()
{
    bool retVal = socketEcouteServeur->listen(QHostAddress::Any,ui->spinBoxPort->text().toUShort());

    if(retVal)
    {
        ui->pushButtonLancement->setEnabled(false);
        ui->textBrowserClients->append("Server is now listening to potential connection");
    }
    else {
        ui->textBrowserClients->append("Server start failed");
    }
}

void ServeurWidget::onQTcpServer_newConnection()
{
    QTcpSocket *client;
    client=socketEcouteServeur->nextPendingConnection();
    connect(client,&QTcpSocket::readyRead,this,&ServeurWidget::onQTcpSocket_readyRead);
    connect(client,&QTcpSocket::disconnected,this,&ServeurWidget::onQTcpSocket_disconnected);
    socketDialogueClient.append(client);

    QString message = "Connexion : " + client->peerAddress().toString();
    ui->textBrowserClients->append(message);

    QProcess *processus;
    processus = new QProcess;
    connect(processus,&QProcess::readyReadStandardOutput,this,&ServeurWidget::onQProcess_readyReadStandardOutput);
    process.append(processus);
}

void ServeurWidget::onQTcpSocket_readyRead()
{
    QTcpSocket *client=qobject_cast<QTcpSocket*>(sender());
    int indexProcess=socketDialogueClient.indexOf(client);

    QByteArray dataReceive = socketDialogueClient.at(indexProcess)->readAll();


    if (dataReceive.toStdString()=="o")
    {
        process.at(indexProcess)->start("uname");
    }
    if (dataReceive.toStdString()=="a")
    {
        process.at(indexProcess)->start("uname",QStringList("-p"));
    }
    if (dataReceive.toStdString()=="c")
    {
        socketDialogueClient.at(indexProcess)->write(QHostInfo::localHostName().toLatin1());
    }
    if (dataReceive.toStdString()=="u")
    {
        socketDialogueClient.at(indexProcess)->write(getenv("USERNAME"));
    }
}

void ServeurWidget::onQTcpSocket_disconnected()
{
    QTcpSocket *client=qobject_cast<QTcpSocket*>(sender());
    int indexProcess=socketDialogueClient.indexOf(client);

    ui->textBrowserClients->append("Deconnexion du client : " + client->peerAddress().toString());

    process.removeAt(indexProcess);
    socketDialogueClient.removeOne(socketDialogueClient.at(indexProcess));
}

void ServeurWidget::onQProcess_readyReadStandardOutput()
{
    QProcess *pro=qobject_cast<QProcess*>(sender());
    int indexClient=process.indexOf(pro);

    QString reponse = pro->readAllStandardOutput();
    if(!reponse.isEmpty())
    {
    QString message = "Réponse envoyée à " + socketDialogueClient.at(indexClient)->peerAddress().toString()+" : " + reponse;
    ui->textBrowserClients->append(message);
    socketDialogueClient.at(indexClient)->write(reponse.toLatin1());
    }
}
