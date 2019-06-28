#include "qgraphicsviewperso.h"

QGraphicsViewPerso::QGraphicsViewPerso(QWidget *parent)
{
    setMouseTracking(true);
}

void QGraphicsViewPerso::mouseMoveEvent(QMouseEvent *event)
{
    qDebug() <<"dans event souris de la vue : " << event->pos();
    emit positionSouris((event->pos()));
}
