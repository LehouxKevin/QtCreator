#ifndef BANQUEMAINWINDOW_H
#define BANQUEMAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QTcpServer>
#include <QDataStream>
#include <QDialog>
#include <QtNetwork>
#include <QByteArray>
#include <QAbstractSocket>
#include <QChar>
#include <QHostInfo>
#include <QObject>

#include "serveurbanque.h"

namespace Ui {
class BanqueMainWindow;
}

class BanqueMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BanqueMainWindow(QWidget *parent = nullptr);
    ~BanqueMainWindow();

private:
    Ui::BanqueMainWindow *ui;
    ServeurBanque *leServeur;
};

#endif // BANQUEMAINWINDOW_H
