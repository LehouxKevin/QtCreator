#ifndef WIDGET_H
#define WIDGET_H

#define LARGEUR 640
#define HAUTEUR 480
#define NBOBSTACLES 50

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QTimer>
#include <QRandomGenerator>

#include "qgraphicsballecollisionitem.h"

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
    void on_pushButtonLancerAnim_clicked();

private:
    Ui::Widget *ui;
    QGraphicsScene scene;
    QGraphicsBalleCollisionItem *maBoule;
    QTimer timer;
    QGraphicsRectItem *laRaquette;
    QGraphicsRectItem *obstacles[NBOBSTACLES];
};

#endif // WIDGET_H
