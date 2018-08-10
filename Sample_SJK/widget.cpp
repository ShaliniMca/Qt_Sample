#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    this->setupUi(this);

    QObject::connect(btnLogin,SIGNAL(clicked()),this,SLOT(fnDisplay()));

    //QObject::connect(btnLogin,SIGNAL,this,SLOT(fnDisplay()));
}




Widget::~Widget()
{
    delete ui;
}



void Widget::fnDisplay()
{
    image = new ImageDisplay();
    image->show();

    this->close();
}
