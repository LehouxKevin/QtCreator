#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::onQWebSocketServer_newConnection()
{
    if(client = serveur->nextPendingConnection())
    {
        ui->textEditInformations->append("Nouveau client : " + client->peerAddress().toString());
        connect(client,&QWebSocket::textMessageReceived,this,&Widget::onQWebSocket_textMessageReceived);
    }
    else {
        qDebug()<<"Erreur de connection du client";
    }

}

void Widget::onQWebSocket_textMessageReceived(QString data)
{
    QString date = QDateTime::currentDateTime().toString();
    qDebug()<<"chaine reçu : " << data;

    majDate = new QTimer();
    connect(majDate,&QTimer::timeout,this,&Widget::onQTimer_majDate);

    if(data == "date")
    {
        majDate->start(120);
    }
}

void Widget::onQTimer_majDate()
{
    QString date = QDateTime::currentDateTime().toString();
    client->sendTextMessage(date);
}

void Widget::on_pushButtonLancer_clicked()
{
    serveur = new QWebSocketServer(QStringLiteral("Server"), QWebSocketServer::NonSecureMode,this);
    connect(serveur,&QWebSocketServer::newConnection,this,&Widget::onQWebSocketServer_newConnection);
    if(serveur->listen(QHostAddress::Any,ui->lineEditPort->text().toInt()))
    {
        ui->textEditInformations->append("Serveur en écoute sur le port : " + ui->lineEditPort->text());
        ui->lineEditPort->setEnabled(false);
        ui->pushButtonArreter->setEnabled(true);
        ui->pushButtonLancer->setEnabled(false);
    }
    else {
        qDebug()<<"Erreur lors du listen";
    }
}

void Widget::on_pushButtonArreter_clicked()
{
    ui->lineEditPort->setEnabled(true);
    ui->pushButtonArreter->setEnabled(false);
    ui->pushButtonLancer->setEnabled(true);
    serveur->close();
    serveur->deleteLater();
}
