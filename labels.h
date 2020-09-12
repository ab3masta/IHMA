#ifndef LABELS_H
#define LABELS_H

#include <QObject>
#include <QWidget>
#include<QMouseEvent>
#include<QLabel>

class Labels : public QLabel
{
    Q_OBJECT
public:
    explicit Labels(QWidget *parent = 0);
signals:
    void clicked();
protected:
    void mousePressEvent (QMouseEvent* event);
};

#endif // LABELS_H
