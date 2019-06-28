#ifndef SERVEURCRAWLER_H
#define SERVEURCRAWLER_H

#include <QWidget>
#include <QDataStream>
#include <QDialog>
#include <QtNetwork>
#include <QByteArray>
#include <QTcpSocket>
#include <QTcpServer>
#include <QGridLayout>
#include <QToolButton>
#include <QRandomGenerator>
#include <QDateTime>
#include <QTimer>
#include <QThread>
#include <QDebug>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QSpinBox>
#include <QDataStream>

#define TAILLE 20

namespace Ui {
class ServeurCrawler;
}

class ServeurCrawler : public QWidget
{
    Q_OBJECT

public:
    explicit ServeurCrawler(QWidget *parent = nullptr);
    ~ServeurCrawler();

private:
    Ui::ServeurCrawler *ui;
    QTcpServer *socketEcoute;
    QList <QTcpSocket*> listeSocketsClient;
    QList <QPoint> listePositions;
    QPoint tresor;
    QGridLayout *grille;

    void EnvoyerDonnees(QTcpSocket *client, QPoint pt, QString msg);
    void AfficherGrille();
    void ViderGrille();
    QPoint DonnerPositionUnique();
    double CalculerDistance(QPoint pos);

private slots:
    void on_pushButtonLancementServeur_clicked();
    void onQTcpServer_newConnection();
    void onQTcpSocket_readyRead();
    void onQTcpSocket_disconnected();
    void onQTcpSocket_error(QTcpSocket::SocketError socketError);

};

#endif // SERVEURCRAWLER_H
