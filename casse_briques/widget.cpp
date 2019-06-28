#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    maVue=new QGraphicsViewPerso(this);

    ui->verticalLayout->addWidget(maVue);

    connect(maVue,&QGraphicsViewPerso::positionSouris,this,&Widget::onQGraphicsViewPerso_positionSouris);

    scene.setSceneRect(0,0,LARGEUR,HAUTEUR);
    // creation de la raquette
    laRaquette = new QGraphicsRectItem(LARGEUR/2,HAUTEUR-20,100,10);
    laRaquette->setBrush(QBrush(Qt::red));
    scene.addItem(laRaquette);

    // creation de mon objet ayant advance et gestion de collision
    balle = new QGraphicsBalle(0,0,10,10,laRaquette);
    balle->setBrush(QBrush(Qt::green));
    balle->setPos(150,200);
    scene.addItem(balle);

    // creation de 50 obstacles
    int x=0,y=0;
    for (int i=0;i<NBOBSTACLES;i++)
    {
        obstacles[i] = new QGraphicsRectItem(0,0,10,10);
        // positionnement aleatoire dans les limites de la scene
       // obstacles[i]->setPos(1*QRandomGenerator::global()->bounded(LARGEUR-10),1*QRandomGenerator::global()->bounded(HAUTEUR-10));
        obstacles[i]->setPos(x,y);
        scene.addItem(obstacles[i]);
        x+=11;
        y+=11;
    }

    maVue->fitInView(scene.sceneRect(),Qt::KeepAspectRatio);
    maVue->setScene(&scene);
    // association de timeout du timer au slot advance des objets
    connect(&timer,&QTimer::timeout,&scene,&QGraphicsScene::advance);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonStart_clicked()
{
    timer.start(10);
}

void Widget::onQGraphicsViewPerso_positionSouris(QPoint pos)
{
    laRaquette->setPos(pos.x(),laRaquette->y());
}
