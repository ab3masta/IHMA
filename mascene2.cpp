#include "mascene2.h"

MaScene2::MaScene2(QObject *parent,int n,double barList[],string TextList[])
    : QGraphicsScene(parent)
{
    for(int i=0;i<21;i++){
        addLine(0,i*25,500,i*25,QPen(Qt::gray));
        addLine(i*25,0,i*25,500,QPen(Qt::gray));
    }

    QColor couleurs[100];
    for(int i=0 ;i<100;i++){
        int number1=255;
        int randomValue1 = qrand() % number1;
        int number2=255;
        int randomValue2 = qrand() % number2;
        int number3=255;
        int randomValue3 = qrand() % number3;
        couleurs[i]=QColor(randomValue1,randomValue2,randomValue3);
    }

    double listAngle[n];
    double listSAngle[n];
    double total=0;
    double nombre=0;

    for(int i=0;i<n;i++){
        total +=barList[i];
    }

    double nbrDegre = 5760/total;

    for(int i=0;i<n;i++){
        nombre +=barList[i]*nbrDegre;
        listAngle[i] = barList[i]*nbrDegre;
        listSAngle[i]= nombre;
        cout<<" "<<listSAngle[i]<<endl;


    }
    for(int i=0;i<n;i++){
        QString str = QString::fromStdString(TextList[i]);
        MonTextItem* text = new MonTextItem(str);
        MonRectItem* item2 = new MonRectItem(couleurs[i],10,10);
        MonCercle* cercle = new MonCercle(couleurs[i]);
        cercle->setPos(0,0);
        if(i==0){
            cercle->setStartAngle(0);
            cercle->setSpanAngle(listAngle[i]);
        }
        else{
            cercle->setStartAngle(listSAngle[i-1]);
            cercle->setSpanAngle(listAngle[i]);
        }
        int val = i*155;
        item2->setPos(val,600);
        text->setPos(val+20,590);
        m_items.append(item2);
        m_text.append(text);



        m_cercle.append(cercle);
        addItem(cercle);
        addItem(item2);
        addItem(text);
    }


}

MaScene2::~MaScene2()
{

}
