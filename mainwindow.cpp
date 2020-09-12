#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/images/images/eye.png");
    int w  =  ui->view_image->width();
    int h  =  ui->view_image->height();
    connect(ui->view_image, SIGNAL(clicked()), this, SLOT(gotToTD()));
    connect(ui->view_image_2, SIGNAL(clicked()), this, SLOT(gotToMini_Projet()));
    connect(ui->view_image_3, SIGNAL(clicked()), this, SLOT(gotToProjet()));
    connect(ui->view_image_4, SIGNAL(clicked()), this, SLOT(gotToExample()));
    connect(ui->run_tp1, SIGNAL(clicked()), this, SLOT(goToTp1()));
    ui->view_image->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->view_image_2->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->view_image_3->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->view_image_4->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::gotToTD()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::gotToExample()
{
    ui->stackedWidget->setCurrentIndex(2);
}
void MainWindow::goToTp1()
{
    //hide();
    //secondWindow =new SecondWindow(this);
    //secondWindow->show();
    //hide();
    tp1 = new Tp1Window(this);
    tp1->setWindowTitle("Tp1");
    //tp1->setWindowState(Qt::WindowFullScreen);
    tp1->showMaximized();
    // dialog->show();
    // or (it is the same)
    // dialog->showFullScreen();
    tp1->show();
}
void MainWindow::gotToMini_Projet()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::gotToProjet()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_retour_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
