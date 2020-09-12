#include "mascene.h"
#include "iostream"
#include <QtCore/QCoreApplication>
#include<QtMath>
#include<QPainter>
#include "iostream"

using namespace std;

MaScene::MaScene(QObject *parent,int n,double barList[],string TextList[])
    : QGraphicsScene(parent)
{

    for(int i=0;i<21;i++){
        addLine(0,i*25,500,i*25,QPen(Qt::gray));
        addLine(i*25,0,i*25,500,QPen(Qt::gray));
    }

    QColor couleurs[100];
    for(int i=0 ;i<n;i++){
        int number1=255;
        int randomValue1 = qrand() % number1;
        int number2=255;
        int randomValue2 = qrand() % number2;
        int number3=255;
        int randomValue3 = qrand() % number3;
        couleurs[i]=QColor(randomValue1,randomValue2,randomValue3);
    }

    if(n!=0){



    for(int i=0 ;i<n;i++){
        QString str = QString::fromStdString(TextList[i]);
        MonTextItem* text = new MonTextItem(str);
        MonRectItem* item = new MonRectItem(couleurs[i],barList[i]*25,25);
        MonRectItem* item2 = new MonRectItem(couleurs[i],10,10);

        item->setPos(i*25,500-barList[i]*25);

        int val = i*155;
        item2->setPos(val,600);
        text->setPos(val+20,590);
        m_items.append(item2);
        m_items.append(item);
        m_text.append(text);


        addItem(item);
        addItem(item2);
        addItem(text);
    }
     }

}

MaScene::~MaScene()
{

}
