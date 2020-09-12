#ifndef TP1WINDOW_H
#define TP1WINDOW_H

#include <QMainWindow>
#include "mascene.h"
#include "mascene2.h"
#include<QGraphicsView>
#include<QWidget>
#include<QHBoxLayout>
#include<QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Tp1window; }
QT_END_NAMESPACE

class Tp1window : public QDialog
{
    Q_OBJECT
public:
    Tp1window(QWidget *parent = nullptr);
    ~Tp1window();
private:

    QGraphicsView* m_view;
    QGraphicsView* m_view2;
    MaScene* m_scene;
    MaScene2* m_scene2;
    QWidget* m_central;
    QHBoxLayout* m_hlayout;




    Ui::Tp1window *ui;
};

#endif // TP1WINDOW_H
