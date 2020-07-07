#include "figureshow.h"
#include "ui_figureshow.h"

FigureShow::FigureShow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FigureShow)
{
    ui->setupUi(this);

}

FigureShow::~FigureShow()
{
    delete ui;
}
