#ifndef TP1WINDOW_H
#define TP1WINDOW_H

#include <QDialog>
#include<QMainWindow>
#include<QStringList>
#include<QList>
#include<QGraphicsView>
#include"mascene.h"
#include"mascene2.h"
namespace Ui {
class Tp1Window;
}

class Tp1Window : public QDialog
{
    Q_OBJECT

public:
    explicit Tp1Window(QWidget *parent = nullptr);
    ~Tp1Window();

private slots:
    void on_pushButton_clicked();



    void on_pushButton_2_clicked();

private:
    Ui::Tp1Window *ui;
    QList<int> valueList;
    QStringList  nameList;
    QGraphicsView* m_view;
    QGraphicsView* m_view2;
    MaScene* m_scene;
    MaScene2* m_scene2;
};

#endif // TP1WINDOW_H
