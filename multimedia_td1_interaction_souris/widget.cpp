#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    maVue=new QGraphicsViewPerso(this);
    maScene.setSceneRect(0,0,1000,500);
    maVue->fitInView(maScene.sceneRect(),Qt::KeepAspectRatio);
    maVue->setAlignment(Qt::AlignLeft|Qt::AlignTop);


    cercle = new QGraphicsEllipseItem(10,10,100,100);

    maScene.addItem(cercle);

    ui->verticalLayout->addWidget(maVue);

    connect(maVue,&QGraphicsViewPerso::positionSouris,this,&Widget::onQGraphicsViewPerso_positionSouris);
    maVue->setScene(&maScene);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::onQGraphicsViewPerso_positionSouris(QPoint pos)
{
    cercle->setPos(pos);
}
