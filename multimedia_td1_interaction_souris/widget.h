#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QMouseEvent>
#include <QDebug>
#include <QLayout>

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


private:
    Ui::Widget *ui;
    QGraphicsScene maScene;
    QGraphicsEllipseItem *cercle;
    QGraphicsViewPerso *maVue;
    QGridLayout *interface;

private slots:
    void onQGraphicsViewPerso_positionSouris(QPoint);
};

#endif // WIDGET_H
