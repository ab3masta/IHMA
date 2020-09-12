#include "moncercle.h"
#include<QPen>

MonCercle::MonCercle(QColor color)
{
    setRect(0,0,500,500);
    setBrush(color);
}
