#include "tp1/monrectitem.h"
#include<QPen>

MonRectItem::MonRectItem(QColor brush ,int height,int width)
{
    setRect(0,0,width,height);
    setPen(QPen(Qt::black));
    setBrush(QBrush(brush));

}
