#include "qgraphicsballecollisionitem.h"

QGraphicsBalleCollisionItem::QGraphicsBalleCollisionItem(qreal x, qreal y, qreal width, qreal height, QGraphicsRectItem *_raquette, QGraphicsItem *parent) :
    QGraphicsEllipseItem (x,y,width,height,parent), raquette(_raquette),dx(2),dy(2)
{
    player.setMedia(QUrl("qrc:/sons/explosionCourte.mp3"));
    player.setVolume(100);
}

void QGraphicsBalleCollisionItem::advance(int step)
{
    moveBy(dx,dy);          // deplacement de dx pixel horizontalement et dy pixel verticalement
    qreal largeurBoule=rect().width();
    qreal largeurScene=scene()->width();
    qreal hauteurScene=scene()->height();

    // boule arrive sur le bord gauche ou droit on inverse le sens horizontal
    if(x()<=largeurBoule || x()>=(largeurScene-largeurBoule))
    {
        dx=-dx;
    }
    // la boule arrive sur le bord haut ou bas on inverse le sens vertical
    if(y()<=largeurBoule || y()>=(hauteurScene-largeurBoule))
    {
        dy=-dy;
    }

    QList<QGraphicsItem*> listeDesObjetsEnCollisions=this->collidingItems();
    if(listeDesObjetsEnCollisions.count()>0)
    {
        foreach(QGraphicsItem *objet, listeDesObjetsEnCollisions)
        {
            // Si l'objet n'est pas la raquette, le supprimer de la scene et inverser la tracjectoire de la balle
            if(objet!=raquette)
            {
                scene()->removeItem(objet);
                dx=-dx;
                dy=-dy;
                player.play();
            }
            else {      // Si c'est la raquette, changer le sens de la balle
                dy=-dy;
            }
        }
    }
}
