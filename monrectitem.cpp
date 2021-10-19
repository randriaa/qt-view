#include "monrectitem.h"
#include<QPen>

MonRectItem::MonRectItem()
{
    setRect(0,0,50,50);
    setPen(QPen(Qt::black));
    setBrush(QBrush(Qt::red));
    setFlag(QGraphicsItem::ItemIsMovable);
    setFlag(QGraphicsItem::ItemIsSelectable);
}

void MonRectItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *e)
{
int x = pos().x() - ((int)(pos().x()) % 50 );
int y = pos().y() - ((int)(pos().y()) % 50) ;
    setPos(x ,y ) ;

    QGraphicsRectItem::mouseReleaseEvent(e);
}
