#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    /*** Choix Vitesse ***/
    ui->comboBoxVitesseTransmission->addItem("1200 bauds");
    ui->comboBoxVitesseTransmission->addItem("2400 bauds");
    ui->comboBoxVitesseTransmission->addItem("4800 bauds");
    ui->comboBoxVitesseTransmission->addItem("9600 bauds");
    ui->comboBoxVitesseTransmission->addItem("19200 bauds");
    ui->comboBoxVitesseTransmission->addItem("38400 bauds");
    ui->comboBoxVitesseTransmission->addItem("57600 bauds");
    ui->comboBoxVitesseTransmission->addItem("115200 bauds");
    ui->comboBoxVitesseTransmission->addItem("Non défini");

    ui->comboBoxVitesseTransmission->setCurrentText("9600 bauds");


    /*** Choix Nombre De Bits De Donnees ***/
    ui->comboBoxNbBitsDonnees->addItem("5 bits");
    ui->comboBoxNbBitsDonnees->addItem("6 bits");
    ui->comboBoxNbBitsDonnees->addItem("7 bits");
    ui->comboBoxNbBitsDonnees->addItem("8 bits");
    ui->comboBoxNbBitsDonnees->addItem("Non défini");

    ui->comboBoxNbBitsDonnees->setCurrentText("8 bits");

    /*** Choix Parite ***/

    ui->comboBoxParite->addItem("Aucune");
    ui->comboBoxParite->addItem("Pair");
    ui->comboBoxParite->addItem("Impair");
    ui->comboBoxParite->addItem("Spaciale");
    ui->comboBoxParite->addItem("Marque");
    ui->comboBoxParite->addItem("Non défini");

    ui->comboBoxParite->setCurrentText("Aucune");

    /*** Choix Nombre Bits De Stop ***/

    ui->comboBoxNbBitsStop->addItem("1");
    ui->comboBoxNbBitsStop->addItem("1.5");
    ui->comboBoxNbBitsStop->addItem("2");
    ui->comboBoxNbBitsStop->addItem("Non défini");

    ui->comboBoxNbBitsStop->setCurrentText("1");

    /*** Choix Controle De Flux ***/

    ui->comboBoxControleDeFlux->addItem("Non");
    ui->comboBoxControleDeFlux->addItem("Matériel");
    ui->comboBoxControleDeFlux->addItem("Logiciel");
    ui->comboBoxControleDeFlux->addItem("Non défini");

    ui->comboBoxControleDeFlux->setCurrentText("Non");
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
        configPort();
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

void Widget::configPort()
{
    configVitesse();
    configNbBitsDonnees();
    configParite();
    configNbBitsStop();
    configControleFLux();
}

void Widget::configVitesse()
{
    if(ui->comboBoxVitesseTransmission->currentText() == "1200 bauds")
    {
        port->setBaudRate(QSerialPort::Baud1200);
    }
    else if(ui->comboBoxVitesseTransmission->currentText() == "2400 bauds")
    {
        port->setBaudRate(QSerialPort::Baud2400);
    }
    else if(ui->comboBoxVitesseTransmission->currentText() == "4800 bauds")
    {
        port->setBaudRate(QSerialPort::Baud4800);
    }
    else if(ui->comboBoxVitesseTransmission->currentText() == "9600 bauds")
    {
        port->setBaudRate(QSerialPort::Baud9600);
    }
    else if(ui->comboBoxVitesseTransmission->currentText() == "19200 bauds")
    {
        port->setBaudRate(QSerialPort::Baud19200);
    }
    else if(ui->comboBoxVitesseTransmission->currentText() == "38400 bauds")
    {
        port->setBaudRate(QSerialPort::Baud38400);
    }
    else if(ui->comboBoxVitesseTransmission->currentText() == "57600 bauds")
    {
        port->setBaudRate(QSerialPort::Baud57600);
    }
    else if(ui->comboBoxVitesseTransmission->currentText() == "115200 bauds")
    {
        port->setBaudRate(QSerialPort::Baud115200);
    }
    else if(ui->comboBoxVitesseTransmission->currentText() == "Non défini")
    {
        port->setBaudRate(QSerialPort::UnknownBaud);
    }
}

void Widget::configNbBitsDonnees()
{
    if(ui->comboBoxNbBitsDonnees->currentText() == "5 bits")
    {
        port->setDataBits(QSerialPort::Data5);
    }
    else if(ui->comboBoxNbBitsDonnees->currentText() == "6 bits")
    {
        port->setDataBits(QSerialPort::Data6);
    }
    else if(ui->comboBoxNbBitsDonnees->currentText() == "7 bits")
    {
        port->setDataBits(QSerialPort::Data7);
    }
    else if(ui->comboBoxNbBitsDonnees->currentText() == "8 bits")
    {
        port->setDataBits(QSerialPort::Data8);
    }
    else if(ui->comboBoxNbBitsDonnees->currentText() == "Non défini")
    {
        port->setDataBits(QSerialPort::UnknownDataBits);
    }

}

void Widget::configParite()
{
    if(ui->comboBoxNbBitsDonnees->currentText() == "Aucune")
    {
        port->setParity(QSerialPort::NoParity);
    }
    else if(ui->comboBoxNbBitsDonnees->currentText() == "Pair")
    {
        port->setParity(QSerialPort::EvenParity);
    }
    else if(ui->comboBoxNbBitsDonnees->currentText() == "Impair")
    {
        port->setParity(QSerialPort::OddParity);
    }
    else if(ui->comboBoxNbBitsDonnees->currentText() == "Spaciale")
    {
        port->setParity(QSerialPort::SpaceParity);
    }
    else if(ui->comboBoxNbBitsDonnees->currentText() == "Marque")
    {
        port->setParity(QSerialPort::MarkParity);
    }
    else if(ui->comboBoxNbBitsDonnees->currentText() == "Non défini")
    {
        port->setParity(QSerialPort::UnknownParity);
    }
}

void Widget::configNbBitsStop()
{
    if(ui->comboBoxNbBitsStop->currentText()=="1")
    {
        port->setStopBits(QSerialPort::OneStop);
    }
    else if(ui->comboBoxNbBitsStop->currentText()=="1.5")
    {
        port->setStopBits(QSerialPort::OneAndHalfStop);
    }
    else if(ui->comboBoxNbBitsStop->currentText()=="2")
    {
        port->setStopBits(QSerialPort::TwoStop);
    }
    else if(ui->comboBoxNbBitsStop->currentText()=="Non défini")
    {
        port->setStopBits(QSerialPort::UnknownStopBits);
    }
}

void Widget::configControleFLux()
{
    if(ui->comboBoxControleDeFlux->currentText()=="Non")
    {
        port->setFlowControl(QSerialPort::NoFlowControl);
    }
    else if(ui->comboBoxControleDeFlux->currentText()=="Matériel")
    {
        port->setFlowControl(QSerialPort::HardwareControl);
    }
    else if(ui->comboBoxControleDeFlux->currentText()=="Logiciel")
    {
        port->setFlowControl(QSerialPort::SoftwareControl);
    }
    else if(ui->comboBoxControleDeFlux->currentText()=="Non défini")
    {
        port->setFlowControl(QSerialPort::UnknownFlowControl);
    }
}

void Widget::on_pushButtonOuvrirPort_clicked()
{
    ouvrirPortSerie();
}

void Widget::on_pushButtonEnvoyer_clicked()
{
    port->write(ui->textEditTextAenvoyer->toPlainText().toUtf8());
}

void Widget::onQSerialPort_readyRead()
{
    QByteArray dataReceive;
    dataReceive = port->readAll();
    qDebug()<<dataReceive;
    ui->textBrowserTexteRecu->append(dataReceive);
}
