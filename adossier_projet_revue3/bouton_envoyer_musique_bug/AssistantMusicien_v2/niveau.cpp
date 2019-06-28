#include "niveau.h"
#include "ui_niveau.h"

Niveau::Niveau(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Niveau)
{
    ui->setupUi(this);
}

Niveau::~Niveau()
{
    delete ui;
}
