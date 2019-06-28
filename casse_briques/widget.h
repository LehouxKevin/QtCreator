#ifndef WIDGET_H
#define WIDGET_H

#define LARGEUR 740
#define HAUTEUR 400
#define NBOBSTACLES 50

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QTimer>
#include <QRandomGenerator>
#include <QGridLayout>

#include "qgraphicsballe.h"
#include "qgraphicsviewperso.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButtonStart_clicked();
    void onQGraphicsViewPerso_positionSouris(QPoint);

private:
    Ui::Widget *ui;
    QGraphicsScene scene;
    QGraphicsBalle *balle;
    QTimer timer;
    QGraphicsRectItem *laRaquette;
    QGraphicsRectItem *obstacles[NBOBSTACLES];
    QGraphicsViewPerso *maVue;
};

#endif // WIDGET_H
