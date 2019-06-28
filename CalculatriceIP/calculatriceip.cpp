#include "calculatriceip.h"
#include "ui_calculatriceip.h"

CalculatriceIP::CalculatriceIP(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CalculatriceIP)
{
    ui->setupUi(this);
}

CalculatriceIP::~CalculatriceIP()
{
    delete ui;
}
