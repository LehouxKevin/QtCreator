#include "dab_mainwindow.h"
#include "ui_dab_mainwindow.h"

DAB_MainWindow::DAB_MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DAB_MainWindow)
{
    ui->setupUi(this);
    ui->groupBoxOperations->setDisabled(true);
    ui->radioButtonSolde->setChecked(true);

    socketClientBanque = new QTcpSocket;

    connect(socketClientBanque,&QAbstractSocket::connected,this,&DAB_MainWindow::onQTcpSocket_connected);
    connect(socketClientBanque,&QAbstractSocket::disconnected,this,&DAB_MainWindow::onQTcpSocket_disconnected);
    connect(socketClientBanque,&QAbstractSocket::readyRead,this,&DAB_MainWindow::onQTcpSocket_readyRead);
    connect(socketClientBanque,&QAbstractSocket::stateChanged,this,&DAB_MainWindow::onQTcpSocket_stateChanged);    
    connect(socketClientBanque,QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error),this,&DAB_MainWindow::onQTcpSocket_error);


}

DAB_MainWindow::~DAB_MainWindow()
{
    delete ui;
}

void DAB_MainWindow::on_pushButtonConnexion_clicked()
{
    QString ip;
    QString portS;
    quint16 port;

    ip = ui->lineEditAdresse->text();
    portS = ui->lineEditPort->text();

    port = portS.toUShort();

    if(ui->pushButtonConnexion->text()=="Connexion")
    {
        socketClientBanque->connectToHost(ip,port);
        socketClientBanque->waitForConnected();
    }
    else {
        if(ui->pushButtonConnexion->text()=="Deconnexion")
        {
            socketClientBanque->disconnectFromHost();
            ui->groupBoxOperations->setDisabled(true);
            ui->pushButtonConnexion->setText("Connexion");
        }
    }
}

void DAB_MainWindow::on_pushButtonEnvoi_clicked()
{
    quint16 taille=0;
    QChar commande;
    QBuffer tampon;
    float montant=ui->lineEditMontant->text().toFloat();

    tampon.open(QIODevice::WriteOnly);
    QDataStream out(&tampon);

    if(ui->radioButtonSolde->isChecked())
    {
        commande = 'S';
        out<<taille<<commande;
        taille=tampon.size()-sizeof(taille);
        tampon.seek(0);
        out<<taille;
        socketClientBanque->write(tampon.buffer());
    }
    if(ui->radioButtonRetrait->isChecked())
    {
        commande = 'R';
        out<<taille<<commande<<montant;
        taille=tampon.size()-sizeof(taille);
        tampon.seek(0);
        out<<taille;
        socketClientBanque->write(tampon.buffer());
    }
    if(ui->radioButtonDepot->isChecked())
    {
        commande = 'D';
        out<<taille<<commande<<montant;
        taille=tampon.size()-sizeof(taille);
        tampon.seek(0);
        out<<taille;
        socketClientBanque->write(tampon.buffer());
    }
}

void DAB_MainWindow::on_pushButtonNumeroCompte_clicked()
{
    quint16 taille=0;
    QChar commande = 'N';
    int compte=ui->lineEditNumeroCompte->text().toInt();
    QBuffer tampon;

    if(compte > 0 )
    {
        tampon.open(QIODevice::WriteOnly);
        // association du tampon au flux de sortie
        QDataStream out(&tampon);
        // construction de la trame
        out<<taille<<commande<<compte;
        // calcul de la taille de la trame
        taille=tampon.size()-sizeof(taille);
        // placement sur la premiere position du flux pour pouvoir modifier la taille
        tampon.seek(0);
        //modification de la trame avec la taille reel de la trame
        out<<taille;
        // envoi du QByteArray du tampon via la socket
        socketClientBanque->write(tampon.buffer());
    }
    else {
        ui->lineEditNumeroCompte->setText("Numéro invalide");
    }

}

void DAB_MainWindow::onQTcpSocket_connected()
{

}

void DAB_MainWindow::onQTcpSocket_disconnected()
{

}

void DAB_MainWindow::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{
     ui->listWidgetEtat->addItem(socketClientBanque->errorString());
}

void DAB_MainWindow::onQTcpSocket_readyRead()
{
    quint16 taille=0;
    QString message;
    // si le nombre d'octets recu est au moins egal a celui de la taille de ce que l'on doit recevoir
    if (socketClientBanque->bytesAvailable() >= (qint64)sizeof(taille))
    {
    // association de la socket au flux d'entree
    QDataStream in(socketClientBanque);
    // extraire la taille de ce que l'on doit recevoir
    in >> taille;
    // si le nombre d'octets recu est au moins egal a celui de ce que l'on doit recevoir
    if (socketClientBanque->bytesAvailable() >= (qint64)taille)
    {
    // extraire le message de la banque et le mettre dans message
    in>>message;
    }
    }
    ui->lineEditMessage->setText(message);
}

void DAB_MainWindow::onQTcpSocket_stateChanged(QAbstractSocket::SocketState socketState)
{
    switch (socketState) {
    case QAbstractSocket::UnconnectedState : ui->listWidgetEtat->addItem("Disconnected");
        break;
    case QAbstractSocket::HostLookupState :  ui->listWidgetEtat->addItem("The socket is performing a host name lookup");
        break;
    case QAbstractSocket::ConnectingState : ui->listWidgetEtat->addItem("The socket has started establishing a connection");
        break;
    case QAbstractSocket::ConnectedState : ui->listWidgetEtat->addItem("Connected");
        ui->groupBoxOperations->setDisabled(false);
        ui->pushButtonConnexion->setText("Deconnexion");
        break;
    case QAbstractSocket::ClosingState : ui->listWidgetEtat->addItem("Closing connection");
        break;
    case QAbstractSocket::BoundState : ui->listWidgetEtat->addItem("bound state");
        break;
    case QAbstractSocket::ListeningState : ui->listWidgetEtat->addItem("listening state");
        break;
    }
}
