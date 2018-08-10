#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMessageBox>
#include "imagedisplay.h"
#include "ui_widget.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget, public Ui_loginpage
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    ImageDisplay *image;

public slots:
    void fnDisplay();
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
