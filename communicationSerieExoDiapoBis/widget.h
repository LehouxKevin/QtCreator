#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QMessageBox>
#include <QBuffer>
#include <QByteArray>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

    void afficherPortDisponible();
    void ouvrirPortSerie();

    void configPort();
    void configVitesse();
    void configNbBitsDonnees();
    void configParite();
    void configNbBitsStop();
    void configControleFLux();

private slots:
    void on_pushButtonOuvrirPort_clicked();

    void on_pushButtonEnvoyer_clicked();

    void onQSerialPort_readyRead();

private:
    Ui::Widget *ui;
    QSerialPort *port;
};

#endif // WIDGET_H
