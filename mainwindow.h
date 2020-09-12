#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMouseEvent>
#include"tp1window.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void gotToTD();
    void gotToMini_Projet();
    void gotToProjet();
    void goToTp1();
    void on_view_image_2_linkActivated(const QString &link);
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Tp1Window* tp1;



    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
