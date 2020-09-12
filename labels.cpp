#include "labels.h"

Labels::Labels(QWidget *parent):QLabel(parent)
{

}

void Labels::mousePressEvent(QMouseEvent *event)
{
    emit clicked();
    event->accept();
}
