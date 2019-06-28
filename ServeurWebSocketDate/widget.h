#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QWebSocketServer>
#include <QWebSocket>
#include <QTime>
#include <QTimer>
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QWebSocketServer *serveur;
    QWebSocket *client;
    QTimer *majDate;

private slots:

    void onQWebSocketServer_newConnection();
    void onQWebSocket_textMessageReceived(QString data);
    void onQTimer_majDate();
    void on_pushButtonLancer_clicked();
    void on_pushButtonArreter_clicked();
};

#endif // WIDGET_H
