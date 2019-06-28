#include "lecteuraudio.h"
#include "ui_lecteuraudio.h"

LecteurAudio::LecteurAudio(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LecteurAudio)
{
    ui->setupUi(this);
}

LecteurAudio::~LecteurAudio()
{
    delete ui;
}
