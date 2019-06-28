#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    afficherPortDisponible();



}

Widget::~Widget()
{
    delete ui;
}

void Widget::afficherPortDisponible()
{
    ui->comboBoxListePort->addItem("Choissez un port série");

    foreach(QSerialPortInfo info, QSerialPortInfo::availablePorts())
    {
        qDebug()<<info.portName();
        ui->comboBoxListePort->addItem(info.portName());
    }
}

void Widget::ouvrirPortSerie()
{
    qDebug()<<ui->comboBoxListePort->currentText();
    if(ui->comboBoxListePort->currentText() != "Choissez un port série")
    {
        qDebug()<<"Trying to open serial port " << ui->comboBoxListePort->currentText();
        port = new QSerialPort();
        port->setPortName(ui->comboBoxListePort->currentText());
        port->setBaudRate(QSerialPort::Baud9600);
        port->setDataBits(QSerialPort::Data8);
        port->setParity(QSerialPort::NoParity);
        port->setStopBits(QSerialPort::OneStop);
        port->setFlowControl(QSerialPort::NoFlowControl);

        if(!port->open(QIODevice::ReadWrite))
        {
            qDebug()<<"An error has occur during serial port opening";
            ui->labelEtat->setStyleSheet("QLabel { color: red; }");
            delete port;
        }
        else {
            connect(port,&QSerialPort::readyRead,this,&Widget::onQSerialPort_readyRead);
            ui->labelEtat->setStyleSheet("QLabel { color: green; }");
        }
    }
    else {
        QMessageBox message;
        message.setText("Choisissez un port série");
        message.exec();
    }

}

void Widget::on_pushButtonOuvrirPort_clicked()
{
    ouvrirPortSerie();
}

void Widget::onQSerialPort_readyRead()
{
    QByteArray dataReceive;
    dataReceive = port->readAll();
    qDebug()<<dataReceive;
    ui->textBrowserTexteRecu->append(dataReceive);

}

void Widget::on_pushButtonEnvoyer_clicked()
{
    port->write(ui->lineEditTexteAenvoyer->text().toUtf8());
}

void Widget::on_lineEditTexteAenvoyer_returnPressed()
{
    port->write(ui->lineEditTexteAenvoyer->text().toUtf8());
}
