#include "clientwidget.h"
#include "ui_clientwidget.h"



ClientWidget::ClientWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientWidget)
{
    ui->setupUi(this);
    ui->frameInfoClients->setDisabled(true);
    socketDeDialogueAvecServeur = new QTcpSocket;

    connect(socketDeDialogueAvecServeur,&QAbstractSocket::aboutToClose,this,&ClientWidget::onQTcpSocket_aboutToClose);
    connect(socketDeDialogueAvecServeur,&QAbstractSocket::bytesWritten,this,&ClientWidget::onQTcpSocket_bytesWritten);
    connect(socketDeDialogueAvecServeur,&QAbstractSocket::connected,this,&ClientWidget::onQTcpSocket_connected);
    connect(socketDeDialogueAvecServeur,&QAbstractSocket::disconnected,this,&ClientWidget::onQTcpSocket_disconnected);
    connect(socketDeDialogueAvecServeur,&QAbstractSocket::hostFound,this,&ClientWidget::onQTcpSocket_hostFound);
    connect(socketDeDialogueAvecServeur,&QAbstractSocket::readyRead,this,&ClientWidget::onQTcpSocket_readyRead);
    connect(socketDeDialogueAvecServeur,&QAbstractSocket::stateChanged,this,&ClientWidget::onQTcpSocket_stateChanged);
    connect(socketDeDialogueAvecServeur,&QAbstractSocket::readChannelFinished,this,&ClientWidget::onQTcpSocket_readChannelFinished);

    connect(socketDeDialogueAvecServeur,QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error),this,&ClientWidget::onQTcpSocket_error);
}

ClientWidget::~ClientWidget()
{
    delete ui;
}

void ClientWidget::on_pushButtonConnexion_clicked()
{
    QString ip;
    QString portS;
    quint16 port;

    ip = ui->lineEditIP->text();
    portS = ui->lineEditPort->text();

    port = portS.toUShort();

    if(ui->pushButtonConnexion->text()=="Connexion")
    {
        socketDeDialogueAvecServeur->connectToHost(ip,port);

    }
    else {
        if(ui->pushButtonConnexion->text()=="Deconnexion")
        {
            socketDeDialogueAvecServeur->disconnectFromHost();

        }
    }
}

void ClientWidget::on_pushButtonNomOrdi_clicked()
{
    typeDeDemande="c";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButtonNomUtilisateur_clicked()
{
    typeDeDemande="u";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButtonArchitecture_clicked()
{
    typeDeDemande="a";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButtonOS_clicked()
{
    typeDeDemande="o";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::onQTcpSocket_connected()
{
    //socketDeDialogueAvecServeur->stateChanged(socketDeDialogueAvecServeur->state());
    ui->frameInfoClients->setDisabled(false);
    ui->pushButtonConnexion->setText("Deconnexion");
    ui->lineEditIP->setDisabled(true);
    ui->lineEditPort->setDisabled(true);
}

void ClientWidget::onQTcpSocket_disconnected()
{
    //socketDeDialogueAvecServeur->stateChanged(socketDeDialogueAvecServeur->state());
    ui->frameInfoClients->setDisabled(true);
    ui->pushButtonConnexion->setText("Connexion");
    ui->lineEditIP->setDisabled(false);
    ui->lineEditPort->setDisabled(false);
}

void ClientWidget::onQTcpSocket_hostFound()
{
    //socketDeDialogueAvecServeur->stateChanged(socketDeDialogueAvecServeur->state());
}

void ClientWidget::onQTcpSocket_stateChanged(QAbstractSocket::SocketState socketState)
{

    switch (socketState) {
    case QAbstractSocket::UnconnectedState : ui->textEditEtat->append("Disconnected");        
        break;
    case QAbstractSocket::HostLookupState :  ui->textEditEtat->append("The socket is performing a host name lookup");
        break;
    case QAbstractSocket::ConnectingState : ui->textEditEtat->append("The socket has started establishing a connection");
        break;
    case QAbstractSocket::ConnectedState : ui->textEditEtat->append("Connected");       
        break;
    case QAbstractSocket::ClosingState : ui->textEditEtat->append("Closing connection");
        break;
    case QAbstractSocket::BoundState : ui->textEditEtat->append("bound state");
        break;
    case QAbstractSocket::ListeningState : ui->textEditEtat->append("listening state");
        break;
    }
}

void ClientWidget::onQTcpSocket_aboutToClose()
{

}

void ClientWidget::onQTcpSocket_bytesWritten(quint64 bytes)
{
    ui->textEditEtat->append("bytes written");
}

void ClientWidget::onQTcpSocket_readChannelFinished()
{

}

void ClientWidget::onQTcpSocket_readyRead()
{

    QByteArray dataReceive = socketDeDialogueAvecServeur->readAll();

    if(typeDeDemande == 'o')
    {
        ui->lineEditOS->setText(dataReceive.data());
    }
    if(typeDeDemande == 'a')
    {
        ui->lineEditArchitecture->setText(dataReceive.data());
    }

    if(typeDeDemande == 'c')
    {
        ui->lineEditNomOrdi->setText(dataReceive.data());
    }

    if(typeDeDemande == 'u')
    {
        ui->lineEditNomUtilisateur->setText(dataReceive.data());
    }


}

void ClientWidget::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{
    ui->textEditEtat->append(socketDeDialogueAvecServeur->errorString());
}
