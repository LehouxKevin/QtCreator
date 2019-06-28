#ifndef SERVEURWIDGET_H
#define SERVEURWIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QTcpServer>
#include <QDataStream>
#include <QDialog>
#include <QtNetwork>
#include <QByteArray>
#include <QAbstractSocket>
#include <QChar>
#include <QHostInfo>

namespace Ui {
class ServeurWidget;
}

class ServeurWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ServeurWidget(QWidget *parent = nullptr);
    ~ServeurWidget();

private slots:
    void on_pushButtonLancement_clicked();

    void onQTcpServer_newConnection();

    void onQTcpSocket_readyRead();

    void onQTcpSocket_disconnected();

    void onQProcess_readyReadStandardOutput();

private:
    Ui::ServeurWidget *ui;
    QTcpServer *socketEcouteServeur;
    QTcpSocket *socketDialogueClient;
    QProcess *process;
};

#endif // SERVEURWIDGET_H
