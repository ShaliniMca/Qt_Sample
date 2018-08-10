#ifndef IMAGEDISPLAY_H
#define IMAGEDISPLAY_H

#include <QWidget>
#include "ui_imagedisplay.h"
#include "cdatabase.h"
#include <QFileDialog>
#include <QTimer>
#include <QPixmap>
#include <QMessageBox>
namespace Ui {
class ImageDisplay;
}

class ImageDisplay : public QWidget,public Ui_ImageDisplay
{
    Q_OBJECT

public:
    explicit ImageDisplay(QWidget *parent = 0);
    ~ImageDisplay();

private:
    Ui::ImageDisplay *ui;

public slots:

    void fnMsg();
    void fnclear();
};



#endif // IMAGEDISPLAY_H
