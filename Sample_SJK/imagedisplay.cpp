#include "imagedisplay.h"
#include "ui_imagedisplay.h"

ImageDisplay::ImageDisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ImageDisplay)
{
    this->setupUi(this);
    QObject::connect(btnSubmit,SIGNAL(clicked()),this,SLOT(fnMsg()));
    QObject::connect(btncancel,SIGNAL(clicked()),this,SLOT(fnclear()));
    //QObject::connect(btnLogin,SIGNAL(clicked()),this,SLOT(fnDisplay()));


}

ImageDisplay::~ImageDisplay()
{
    delete ui;
}

void ImageDisplay::fnMsg()
{
    QMessageBox msg;
    msg.setText("Saved Successfully");
    //msg.setInformativeText("Application");
    msg.exec();
}

void ImageDisplay::fnclear()
{
    lineEdit->clear();
    lineEdit_3->clear();
    lineEdit_4->clear();
    lineEdit_5->clear();
    lineEdit_6->clear();
    lineEdit_7->clear();
    lineEdit_8->clear();
    lineEdit_9->clear();
    lineEdit_10->clear();
    lineEdit_11->clear();
    lineEdit_12->clear();
    lineEdit_13->clear();
    textEdit->clear();
}




