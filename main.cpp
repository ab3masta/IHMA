#include "mainwindow.h"
#include "tp1/tp1window.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //*********************** acce a une seule fenetre à la fois
    //SecondWindow secondWindow;
    //secondWindow.setModal(true);
    //secondWindow.exec();
    //********************** acces a toute les fenetres
    // or use hide to hide the parent window
    //hide();
    //secondWindow =new SecondWindow(this);
    //secondWindow->show();
    MainWindow w;
    w.isModal();
    w.show();

    return a.exec();
}
