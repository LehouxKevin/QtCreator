#ifndef QGRAPHICSBALLECOLLISIONITEM_H
#define QGRAPHICSBALLECOLLISIONITEM_H

#include <QGraphicsEllipseItem>
#include <QGraphicsScene>
#include <QMediaPlayer>


class QGraphicsBalleCollisionItem : public QGraphicsEllipseItem
{
public:
    QGraphicsBalleCollisionItem(qreal x, qreal y, qreal width, qreal height, QGraphicsRectItem *_raquette, QGraphicsItem *parent = nullptr);

protected :
    void advance(int step) override;

private:
    QGraphicsRectItem *raquette;
    qreal dx;
    qreal dy;
    QMediaPlayer player;
};

#endif // QGRAPHICSBALLECOLLISIONITEM_H
