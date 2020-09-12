#ifndef MASCENE_H
#define MASCENE_H

#include <QObject>
#include <QWidget>
#include<QGraphicsScene>
#include"tp1/monrectitem.h"
#include "montextitem.h"
#include <QList>
#include"moncercle.h"
#include"iostream"
using namespace std;

class MaScene : public QGraphicsScene
{
public:

    MaScene(QObject* parent = Q_NULLPTR,int n = NULL,double barList[] = NULL,string TextList[] = NULL);
    ~MaScene();

    QList<MonRectItem*> m_items;
    QList<MonTextItem*> m_text;
    QList<MonCercle*> m_cercle;
};

#endif // MASCENE_H
