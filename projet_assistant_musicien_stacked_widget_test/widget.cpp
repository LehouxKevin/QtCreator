#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPixmap imageFichiers("/home/USERS/ELEVES/SNIR2017/klehoux/Images/iconesProjet/ouvrirFichier.png");
    QIcon ButtonIconFichiers(imageFichiers);
    ui->pushButtonFichiers->setIcon(ButtonIconFichiers);
    ui->pushButtonFichiers->setIconSize(imageFichiers.rect().size());

    QPixmap imageCroix("/home/USERS/ELEVES/SNIR2017/klehoux/Images/iconesProjet/croix.jpg");
    QIcon croix(imageCroix);
    ui->pushButtonQuitter->setIcon(croix);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonFichiers_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
