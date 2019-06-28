#include "metronome.h"
#include "ui_metronome.h"

Metronome::Metronome(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Metronome)
{
    ui->setupUi(this);
}

Metronome::~Metronome()
{
    delete ui;
}
