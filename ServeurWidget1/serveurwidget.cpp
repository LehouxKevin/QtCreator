#include "serveurwidget.h"
#include "ui_serveurwidget.h"
#include <QDebug>


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
        ui->textBrowserClients->append("Server is now listening to potential connection");
    }
    else {
        ui->textBrowserClients->append("Server start failed");
    }
}

void ServeurWidget::onQTcpSocket_readyRead()
{
    QByteArray dataReceive = socketDialogueClient->readAll();
    QString reponse;

    if (dataReceive.toStdString()=="o")
    {
        process->start("uname");
    }
    if (dataReceive.toStdString()=="a")
    {
        process->start("uname",QStringList("-p"));
    }
    if (dataReceive.toStdString()=="c")
    {
        socketDialogueClient->write(QHostInfo::localHostName().toLatin1());
    }
    if (dataReceive.toStdString()=="u")
    {
        socketDialogueClient->write(getenv("USERNAME"));
    }
}

void ServeurWidget::onQTcpServer_newConnection()
{
    socketDialogueClient = socketEcouteServeur->nextPendingConnection();
    connect(socketDialogueClient,&QTcpSocket::readyRead,this,&ServeurWidget::onQTcpSocket_readyRead);
    connect(socketDialogueClient,&QTcpSocket::disconnected,this,&ServeurWidget::onQTcpSocket_disconnected);

    QString message = "Connexion : " + socketDialogueClient->peerAddress().toString();
    ui->textBrowserClients->append(message);

    process = new QProcess;
    connect(process,&QProcess::readyReadStandardOutput,this,&ServeurWidget::onQProcess_readyReadStandardOutput);

}

void ServeurWidget::onQProcess_readyReadStandardOutput()
{
    QString reponse = process->readAllStandardOutput();
    if(!reponse.isEmpty())
    {
        QString message = "Réponse envoyée à " + socketDialogueClient->peerAddress().toString()+" : " + reponse;
        ui->textBrowserClients->append(message);
        socketDialogueClient->write(reponse.toLatin1());
    }
}

void ServeurWidget::onQTcpSocket_disconnected()
{
    qDebug()<<"deconnexion client";
    socketDialogueClient->deleteLater();

}
