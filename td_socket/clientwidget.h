#ifndef CLIENTWIDGET_H
#define CLIENTWIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QDataStream>
#include <QDialog>
#include <QtNetwork>
#include <QByteArray>

namespace Ui {
class ClientWidget;
}

class ClientWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ClientWidget(QWidget *parent = nullptr);
    ~ClientWidget();

private slots:
    void on_pushButtonConnexion_clicked();

    void on_pushButtonNomOrdi_clicked();

    void on_pushButtonNomUtilisateur_clicked();

    void on_pushButtonArchitecture_clicked();

    void on_pushButtonOS_clicked();

    void onQTcpSocket_connected();

    void onQTcpSocket_disconnected();

    void onQTcpSocket_error(QAbstractSocket::SocketError socketError);

    void onQTcpSocket_hostFound();

    void onQTcpSocket_stateChanged(QAbstractSocket::SocketState socketState);

    void onQTcpSocket_aboutToClose();

    void onQTcpSocket_bytesWritten(quint64 bytes);

    void onQTcpSocket_readChannelFinished();

    void onQTcpSocket_readyRead();

private:
    Ui::ClientWidget *ui;
    QTcpSocket *socketDeDialogueAvecServeur;
    QString typeDeDemande;
};

#endif // CLIENTWIDGET_H
