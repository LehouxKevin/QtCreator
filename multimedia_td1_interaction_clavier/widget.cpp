#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setFocus();
    maScene.setSceneRect(0,0,400,300);
    ui->maVue->fitInView(maScene.sceneRect(),Qt::KeepAspectRatio);
    ui->maVue->setScene(&maScene);

    cercle = new QGraphicsEllipseItem(10,10,100,100);

    maScene.addItem(cercle);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::keyPressEvent(QKeyEvent *event)
{
    switch(event->key())
    {
    case Qt::Key_Left: qDebug()<<"gauche";
        cercle->moveBy(-2,0);
        break;
    case Qt::Key_Right: qDebug()<<"droite";
        cercle->moveBy(2,0);
        break;
    case Qt::Key_Up: qDebug()<<"haut";
        cercle->moveBy(0,-2);
        break;
    case Qt::Key_Down : qDebug()<<"bas";
        cercle->moveBy(0,2);
        break;
    }

}
