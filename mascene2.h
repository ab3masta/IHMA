#ifndef MASCENE2_H
#define MASCENE2_H

#include <QObject>
#include <QWidget>
#include<QGraphicsScene>
#include<monrectitem.h>
#include "montextitem.h"
#include <QList>
#include"moncercle.h"
#include"iostream"
using namespace std;

class MaScene2 : public QGraphicsScene
{
public:
    MaScene2(QObject* parent = Q_NULLPTR,int n = NULL,double barList[] = NULL,string TextList[] = NULL);
    ~MaScene2();

    QList<MonRectItem*> m_items;
    QList<MonTextItem*> m_text;
    QList<MonCercle*> m_cercle;
};

#endif // MASCENE2_H
