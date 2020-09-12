#include "tp1/tp1window.h"
#include "ui_mainwindow.h"

Tp1window::Tp1window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Tp1window)
{
    ui->setupUi(this);
}

Tp1window::~Tp1window()
{
    delete ui;
}

