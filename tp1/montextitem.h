#ifndef MONTEXTITEM_H
#define MONTEXTITEM_H
#include<QGraphicsTextItem>
#include "iostream"
using namespace std;

class MonTextItem : public QGraphicsTextItem
{
public:
    MonTextItem(QString text);
};

#endif // MONTEXTITEM_H
