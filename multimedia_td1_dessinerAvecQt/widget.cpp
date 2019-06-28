#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    maScene.setSceneRect(0,0,400,300);
    ui->maVue->fitInView(maScene.sceneRect(),Qt::KeepAspectRatio);
    ui->maVue->setScene(&maScene);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonExo1_clicked()
{
    QGraphicsRectItem *rectangle = new QGraphicsRectItem(10,10,100,50);
    QColor fond(87,146,242);
    QBrush interieur(fond);
    interieur.setStyle(Qt::SolidPattern);
    rectangle->setBrush(interieur);

    QPen contour(fond);
    contour.setStyle(Qt::SolidLine);
    rectangle->setPen(contour);

    maScene.addItem(rectangle);
}

void Widget::on_pushButtonExo2_clicked()
{
    QColor rouge(158, 46, 44);
    QColor bleu(87,146,242);
    QColor vert(32, 130, 56);
    QColor violet(191, 54, 209);

    /*** Triangle ***/
    QPolygon triPoly;
    triPoly.setPoints(3,
                       10,10,
                       -40,100,
                       60,100);
    QGraphicsPolygonItem *triangle = new QGraphicsPolygonItem(triPoly);
    QPen contour(rouge);
    contour.setStyle(Qt::SolidLine);

    QBrush interieur(bleu);
    interieur.setStyle(Qt::SolidPattern);
    triangle->setBrush(interieur);
    triangle->setPen(contour);

    maScene.addItem(triangle);

    /*** Cercle ***/

    QGraphicsEllipseItem *cercle = new QGraphicsEllipseItem(80,10,100,100);
    QPen contourCercle(violet);
    contourCercle.setWidth(5);
    cercle->setPen(contourCercle);
    cercle->setBrush(vert);


    maScene.addItem(cercle);


    /*** Ellipse ***/

    QGraphicsEllipseItem *ovale = new QGraphicsEllipseItem(40,130,100,40);
    ovale->setPen(rouge);
    ovale->setBrush(rouge);

    maScene.addItem(ovale);

}

void Widget::on_pushButtonMenage_clicked()
{
    // Supprimer tous les objets de la scene
    QList <QGraphicsItem*>listeDesObjets = maScene.items();

    /*for (int i = 0 ; i < listeDesObjets.size();i++)
    {
        QGraphicsItem *ptr=listeDesObjets.at(i);
        maScene.removeItem(ptr);
        delete ptr;
    }*/

    // OU

    foreach(QGraphicsItem *ptr, listeDesObjets)
    {
        maScene.removeItem(ptr);
        delete ptr;
    }
}

void Widget::on_pushButtonExo3_clicked()
{
    QColor bleu(0,0,255);
    QColor vert(0,255,0);

    QPolygon polyEtoile;

    polyEtoile.setPoints(10,
                         0,60,
                         30,60,
                         40,30,
                         50,60,
                         80,60,
                         55,75,
                         65,100,
                         40,85,
                         15,100,
                         25,75);

    QGraphicsPolygonItem *etoile = new QGraphicsPolygonItem(polyEtoile);
    QGraphicsPolygonItem *etoileFondVert = new QGraphicsPolygonItem(polyEtoile);

    QBrush interieur(bleu);
    interieur.setStyle(Qt::BDiagPattern);
    QPen contour(bleu);
    contour.setWidth(2);

    etoile->setPen(contour);
    etoile->setBrush(interieur);


    QBrush interieurPlein(vert);
    interieurPlein.setStyle(Qt::SolidPattern);
    etoileFondVert->setBrush(interieurPlein);

    maScene.addItem(etoileFondVert);
    maScene.addItem(etoile);

}

void Widget::on_pushButtonExo4_clicked()
{
    QColor bleu(0,0,255);
    QColor blanc(255,255,255);
    QColor noir(0,0,0);

    /** Cercle LinearGradient **/

    QGraphicsEllipseItem *cercleLinearGradient = new QGraphicsEllipseItem(10,10,100,100);

    QLinearGradient gradientLineaire(cercleLinearGradient->boundingRect().topLeft(),cercleLinearGradient->boundingRect().bottomRight());
    gradientLineaire.setColorAt(0.0, blanc);
    gradientLineaire.setColorAt(0.3,blanc);
    gradientLineaire.setColorAt(1.0, bleu);
    cercleLinearGradient->setBrush(gradientLineaire);
    cercleLinearGradient->setPen(noir);

    maScene.addItem(cercleLinearGradient);


    /** Carre ConicalGradient **/

    QGraphicsRectItem *rectangleConicalGradient = new QGraphicsRectItem(120,10,100,100);
    QConicalGradient conicalGradient(150,40,0);
    conicalGradient.setColorAt(0.0,blanc);
    conicalGradient.setColorAt(1.0,bleu);

    rectangleConicalGradient->setBrush(conicalGradient);

    maScene.addItem(rectangleConicalGradient);

    /** Carre LinearGradient **/

    QGraphicsRectItem *carreLinearGradient = new QGraphicsRectItem(230,10,100,100);
    QLinearGradient gradientLineaireCarre(carreLinearGradient->boundingRect().topLeft(),carreLinearGradient ->boundingRect().bottomRight());
    gradientLineaireCarre.setColorAt(0.0, blanc);
    gradientLineaireCarre.setColorAt(0.3,blanc);
    gradientLineaireCarre.setColorAt(1.0, bleu);
    carreLinearGradient->setBrush(gradientLineaireCarre);
    carreLinearGradient->setPen(noir);

    maScene.addItem(carreLinearGradient);

    /** Cercle ConicalGradient **/

    QGraphicsEllipseItem *cercleConicalGradient = new QGraphicsEllipseItem(10,150,100,100);
    QConicalGradient conicalGradientCercle(40,180,0);
    conicalGradientCercle.setColorAt(0.0,blanc);
    conicalGradientCercle.setColorAt(1.0,bleu);

    cercleConicalGradient->setBrush(conicalGradientCercle);
    maScene.addItem(cercleConicalGradient);


    /** Cercle RadialGradient **/

    QGraphicsEllipseItem *cercleRadialGradient = new QGraphicsEllipseItem(120,150,100,100);
    QRadialGradient radialGradientCercle(150,170,90);
    radialGradientCercle.setColorAt(0.0,blanc);
    radialGradientCercle.setColorAt(1.0,bleu);

    cercleRadialGradient->setBrush(radialGradientCercle);
    maScene.addItem(cercleRadialGradient);

    /** Cercle Image **/
    QGraphicsEllipseItem *cercleImage = new QGraphicsEllipseItem(230,150,100,100);
    QPixmap image("/home/USERS/brique.jpg");
    cercleImage->setBrush(image);

    maScene.addItem(cercleImage);

}

void Widget::on_pushButtonExo5_clicked()
{
    QPolygon polyFlocon;
    polyFlocon.setPoints(87,
                    56,17,
                    60,6,
                    73,5,
                    86,30,
                    99,11,
                    111,10,
                    117,20,
                    99,49,
                    123,86,
                    143,52,
                    124,18,
                    127,9,
                    142,10,
                    156,30,
                    169,6,
                    182,7,
                    189,18,
                    172,40,
                    198,41,
                    205,52,
                    194,63,
                    163,62,
                    142,96,
                    180,97,
                    200,64,
                    210,65,
                    218,75,
                    206,95,
                    234,97,
                    243,105,
                    233,118,
                    206,117,
                    221,136,
                    213,147,
                    200,146,
                    185,118,
                    141,119,
                    163,154,
                    198,153,
                    206,163,
                    197,172,
                    172,170,
                    189,196,
                    182,205,
                    169,205,
                    153,179,
                    140,199,
                    130,202,
                    124,192,
                    141,160,
                    123,130,
                    97,165,
                    116,193,
                    112,202,
                    102,200,
                    91,184,
                    76,205,
                    64,205,
                    58,198,
                    72,172,
                    47,171,
                    39,163,
                    46,153,
                    87,153,
                    104,118,
                    62,119,
                    45,145,
                    29,146,
                    21,135,
                    34,117,
                    11,117,
                    4,107,
                    4,100,
                    37,98,
                    25,75,
                    27,66,
                    39,67,
                    63,97,
                    102,99,
                    83,60,
                    47,60,
                    38,53,
                    44,40,
                    71,40,
                    56,17,
                    59,6,
                    58,11);

    QGraphicsPolygonItem *flocon = new QGraphicsPolygonItem(polyFlocon);

    maScene.addItem(flocon);
}
