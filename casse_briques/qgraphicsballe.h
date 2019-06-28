#ifndef QGRAPHICSBALLE_H
#define QGRAPHICSBALLE_H

#include <QObject>
#include <QGraphicsEllipseItem>
#include <QGraphicsScene>
#include <QMediaPlayer>

class QGraphicsBalle : public QGraphicsEllipseItem
{
    Q_OBJECT
public:
    QGraphicsBalle(qreal x, qreal y, qreal width, qreal height, QGraphicsRectItem *_raquette, QGraphicsItem *parent = nullptr);

protected :
    void advance(int step) override;

private:
    QGraphicsRectItem *raquette;
    qreal dx;
    qreal dy;
};

#endif // QGRAPHICSBALLE_H
