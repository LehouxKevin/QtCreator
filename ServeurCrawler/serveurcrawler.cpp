#include "serveurcrawler.h"
#include "ui_serveurcrawler.h"

void qtPause(int millisecondes)
{
    QTimer timer;
    timer.start(millisecondes);
    QEventLoop loop;
    QObject::connect(&timer, SIGNAL(timeout()), &loop, SLOT(quit()));
    loop.exec();
}

ServeurCrawler::ServeurCrawler(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServeurCrawler)
{
    ui->setupUi(this);
    grille = new QGridLayout();
    socketEcoute = new QTcpServer;
    connect(socketEcoute,&QTcpServer::newConnection,this,&ServeurCrawler::onQTcpServer_newConnection);

    tresor = DonnerPositionUnique();

    QToolButton *grilleBoutons[TAILLE*TAILLE];

    // Instanciations des 400 toolbuttons + couleurs de fond blanche
    for(int i = 0; i< TAILLE*TAILLE;i++)
    {
        grilleBoutons[i]= new QToolButton();
        grilleBoutons[i]->setStyleSheet("background-color: white;");

    }
    // Ajout des boutons dans le QGridLayout à la ligne "ligne" et la colonne "colonne" qui varie
    int i=0;
    for(int ligne=0;ligne<TAILLE;ligne++)
    {
        for(int colonne=0;colonne<TAILLE;colonne++)
        {
            grille->addWidget(grilleBoutons[i], ligne,colonne);
            i++;
        }
    }

    AfficherGrille();

    // Création des composant constituant l'interface des informations serveur
    QHBoxLayout *interfaceInformations = new QHBoxLayout();
    // Label Port ecoute
    QLabel *labelPort = new QLabel();
    labelPort->setText("Port d'écoute");
    interfaceInformations->addWidget(labelPort,2);

    // SpinBox port
    QSpinBox *numeroPort = new QSpinBox();
    interfaceInformations->addWidget(numeroPort,2);
    numeroPort->setMaximum(10000);
    numeroPort->setValue(9999);

    // Bouton de lancement du serveur
    QPushButton *boutonLancement = new QPushButton();
    boutonLancement->setText("Lancement");
    connect(boutonLancement,&QPushButton::clicked,this,&ServeurCrawler::on_pushButtonLancementServeur_clicked);
    interfaceInformations->addWidget(boutonLancement,2);

    // Bouton Quitter
    QPushButton *boutonQuitter = new QPushButton();
    boutonQuitter->setText("Quitter");
    connect(boutonQuitter,&QPushButton::clicked,this,&ServeurCrawler::close);
    interfaceInformations->addWidget(boutonQuitter,2);

    grille->addLayout(interfaceInformations,22,0,1,18);
}

ServeurCrawler::~ServeurCrawler()
{
    delete ui;
}

void ServeurCrawler::EnvoyerDonnees(QTcpSocket *client, QPoint pt, QString msg)
{
    int index=listeSocketsClient.indexOf(client);

    quint16 taille=0;
    QBuffer tampon;

    tampon.open(QIODevice::WriteOnly);
    QDataStream out(&tampon);
    out << taille << pt << msg << CalculerDistance(pt);
    taille = tampon.size()-sizeof(taille);
    tampon.seek(0);
    out << taille;
    listeSocketsClient.at(index)->write(tampon.buffer());
}

void ServeurCrawler::AfficherGrille()
{
    QList <QToolButton*>listeBoutonsGrilles=findChildren<QToolButton*>();
    foreach(QToolButton *b, listeBoutonsGrilles)
    {

        b->setStyleSheet("background-color: white");

    }

    // Affichage des clients
    foreach(QPoint pt, listePositions)
    {
        int x = pt.x();
        int y = pt.y();
        grille->itemAtPosition(y,x)->widget()->setStyleSheet("background-color : black");
    }

    // Changement de la couleur du tresor en rouge
    int x = tresor.x();
    int y = tresor.y();

    grille->itemAtPosition(y,x)->widget()->setStyleSheet("background-color : red");


    this->setLayout(grille);
}

QPoint ServeurCrawler::DonnerPositionUnique()
{
    QRandomGenerator gen;
    QPoint pt;
    gen.seed(QDateTime::currentMSecsSinceEpoch());
    int ligne;
    int colonne;
    do
    {
        ligne=gen.bounded(TAILLE);
        qtPause(20);
        colonne=gen.bounded(TAILLE);
        qtPause(20);
        pt=QPoint(colonne,ligne);
    }while (listePositions.contains(pt));
    return pt;
}

double ServeurCrawler::CalculerDistance(QPoint pos)
{
    double distance;
    int xVecteur=tresor.x()-pos.x();
    int yVecteur=tresor.y()-pos.y();
    distance=sqrt((xVecteur*xVecteur+yVecteur*yVecteur));
    return distance;
}

void ServeurCrawler::on_pushButtonLancementServeur_clicked()
{
    QSpinBox *entreePort=findChild<QSpinBox*>();
    QList <QPushButton*>listeBoutonsInterfaces=findChildren<QPushButton*>();

    bool retVal = socketEcoute->listen(QHostAddress::Any,entreePort->text().toUShort());
    if(retVal)
    {
        qDebug()<<"Server now listening on port " + entreePort->text();
        foreach(QPushButton *b, listeBoutonsInterfaces)
        {
            if(b->text() == "Lancement")
            {
                b->setStyleSheet("color: green");
            }
        }
    }
    else {
        qDebug()<<"Server error while trying to listen on port " + entreePort->text();
    }
}

void ServeurCrawler::onQTcpServer_newConnection()
{
    QTcpSocket *client;
    client=socketEcoute->nextPendingConnection();
    connect(client,&QTcpSocket::readyRead,this,&ServeurCrawler::onQTcpSocket_readyRead);
    connect(client,&QTcpSocket::disconnected,this,&ServeurCrawler::onQTcpSocket_disconnected);
    connect(client,QOverload<QTcpSocket::SocketError>::of(&QTcpSocket::error),this,&ServeurCrawler::onQTcpSocket_error);
    listeSocketsClient.append(client);

    QPoint point = DonnerPositionUnique();
    listePositions.append(point);

    EnvoyerDonnees(client,point,"start");
    AfficherGrille();

    qDebug()<<"New connection :  " + client->peerAddress().toString();
}

void ServeurCrawler::onQTcpSocket_readyRead()
{


    /*quint16 tailleTrame=0;
    QChar commande;
    QBuffer tampon;
    tampon.open(QIODevice::ReadOnly);
    QDataStream in(&tampon);
    listeSocketsClient.at(index)->readAll();
    in << tailleTrame << commande;

    qDebug()<<tampon.buffer();
    qDebug()<<tailleTrame;
    qDebug()<<commande;*/



    QTcpSocket *client=qobject_cast<QTcpSocket*>(sender());
    int index=listeSocketsClient.indexOf(client);
    qDebug()<<"Ready read on client : " << client->peerAddress().toString();

    QString msg;
    QByteArray dataReceive = listeSocketsClient.at(index)->readAll();
    QPoint pt = listePositions.at(index);
    int x = pt.x();
    int y = pt.y();

    if(dataReceive[3].operator==('U'))
    {
        qDebug()<<"U";
        pt.setY(y-1);
        if(y-1<0)
        {
            pt.setY(TAILLE);
            if(x != tresor.x() && y != tresor.y())
            {
                msg="vide";
            }
            else {
                if(x == tresor.x() && y == tresor.y())
                {
                    msg="Victoire de " + client->peerAddress().toString();
                }
            }
        }
    }
    if(dataReceive[3].operator==('D'))
    {
        qDebug()<<"D";
        pt.setY(y+1);
        if(y+1<0)
        {
            pt.setY(TAILLE);
            if(x != tresor.x() && y != tresor.y())
            {
                msg="vide";
            }
            else {
                if(x == tresor.x() && y == tresor.y())
                {
                    msg="Victoire de " + client->peerAddress().toString();
                }
            }
        }
    }
    if(dataReceive[3].operator==('L'))
    {
        qDebug()<<"L";
        pt.setX(x-1);
        if(x-1<0)
        {
            pt.setY(x+1);
            if(x != tresor.x() && y != tresor.y())
            {
                msg="vide";
            }
            else {
                if(x == tresor.x() && y == tresor.y())
                {
                    msg="Victoire de " + client->peerAddress().toString();
                }
            }
        }
    }
    if(dataReceive[3].operator==('R'))
    {
        qDebug()<<"R";
        pt.setX(x+1);
        if(x+1<0)
        {
            pt.setY(TAILLE);
            if(x != tresor.x() && y != tresor.y())
            {
                msg="vide";
            }
            else {
                if(x == tresor.x() && y == tresor.y())
                {
                    msg="Victoire de " + client->peerAddress().toString();
                }
            }
        }
    }
    listePositions.replace(index,pt);
    EnvoyerDonnees(client,pt,msg);
    AfficherGrille();
}

void ServeurCrawler::onQTcpSocket_disconnected()
{
    QTcpSocket *client=qobject_cast<QTcpSocket*>(sender());
    int index=listeSocketsClient.indexOf(client);

    qDebug()<<"socket disconnected : " << client->peerAddress().toString();

    //QPoint pt = listePositions.at(index);
    /*QPoint pt=qobject_cast<QPoint>(listePositions.at(index));
    int x = pt.x();
    int y = pt.y();
    grille->itemAtPosition(y,x)->widget()->setStyleSheet("background-color : white");*/
    listeSocketsClient.removeAt(index);
    listePositions.removeAt(index);
    AfficherGrille();
}

void ServeurCrawler::onQTcpSocket_error(QTcpSocket::SocketError socketError)
{
    QTcpSocket *client=qobject_cast<QTcpSocket*>(sender());
    int index=listeSocketsClient.indexOf(client);
    listeSocketsClient.removeAt(index);
    listePositions.removeAt(index);
    AfficherGrille();
    qDebug()<<"Erreur sur la socket avec le client " << client->peerAddress().toString();
    qDebug()<< socketError;
}
