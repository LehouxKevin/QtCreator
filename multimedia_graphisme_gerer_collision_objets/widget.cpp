#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    scene.setSceneRect(0,0,LARGEUR,HAUTEUR);
    // creation de la raquette
    laRaquette = new QGraphicsRectItem(LARGEUR/2,HAUTEUR-20,100,10);
    laRaquette->setBrush(QBrush(Qt::red));
    scene.addItem(laRaquette);

    // creation de mon objet ayant advance et gestion de collision
    maBoule = new QGraphicsBalleCollisionItem(0,0,10,10,laRaquette);
    maBoule->setBrush(QBrush(Qt::green));
    maBoule->setPos(150,200);
    scene.addItem(maBoule);

    // creation de 50 obstacles
    for (int i=0;i<NBOBSTACLES;i++)
    {
        obstacles[i] = new QGraphicsRectItem(0,0,10,10);
        // positionnement aleatoire dans les limites de la scene
        obstacles[i]->setPos(1*QRandomGenerator::global()->bounded(LARGEUR-10),1*QRandomGenerator::global()->bounded(HAUTEUR-10));
        scene.addItem(obstacles[i]);
    }

    ui->maVue->fitInView(scene.sceneRect(),Qt::KeepAspectRatio);
    ui->maVue->setScene(&scene);
    // association de timeout du timer au slot advance des objets
    connect(&timer,&QTimer::timeout,&scene,&QGraphicsScene::advance);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonLancerAnim_clicked()
{
    timer.start(10);
}
