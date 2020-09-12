#include "tp1window.h"
#include "ui_tp1window.h"
#include<QListWidgetItem>

Tp1Window::Tp1Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tp1Window)
{
    ui->setupUi(this);
    ui->lineEdit->setValidator( new QDoubleValidator(0, 100, 2, this) );
    ui->lineEdit_2->setValidator(new QRegExpValidator(QRegExp("[a-z]*[A-Z]*"),NULL));
}

Tp1Window::~Tp1Window()
{
    delete ui;
}

void Tp1Window::on_pushButton_clicked()
{
    QString  value = ui->lineEdit->text();
    QString  nameOfValue = ui->lineEdit_2->text();
    if(value.isEmpty() && nameOfValue.isEmpty()){
        ui->validator_label->setText("line Edit can't be empty");
    }else{
        QListWidgetItem *item = new QListWidgetItem(QIcon(":/resource/img/air3.jpg"),"Value :"+value+" ,with name :"+nameOfValue);
        ui->listWidget->addItem(item);
        valueList.push_front(value.toDouble());
        nameList.push_front(nameOfValue);
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
    }

}

void Tp1Window::on_pushButton_2_clicked()
{
    int vlength = valueList.length();
    int nlength = nameList.length();
    //QString text = QString("value %1 name %2.").arg(vlength, nlength);
    //ui->validator_label->setText(text);
    double barList[vlength];
    string TextList[vlength];
    for(int i=0;i<vlength;i++){
        barList[i]=valueList[i];
        TextList[i]=nameList[i].toStdString();
    }
    m_view = new QGraphicsView(this);
    m_view2 = new QGraphicsView(this);

    m_scene = new MaScene(m_view,vlength,barList,TextList);
    m_scene2 = new MaScene2(m_view2,vlength,barList,TextList);

    ui->graphicsView->setScene(m_scene);
    ui->graphicsView_2->setScene(m_scene2);

}
