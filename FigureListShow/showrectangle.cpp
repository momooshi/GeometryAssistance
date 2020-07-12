#include "showrectangle.h"
#include "ui_showrectangle.h"

ShowRectangle::ShowRectangle(QWidget *parent, Rrectangle *t_r) :
    QDialog(parent), rec(t_r),
    ui(new Ui::ShowRectangle)
{
    ui->setupUi(this);
    double height = rec->get_length();
    double width = rec->get_width();
    double square = rec->get_square();
    double perimeter = rec->get_perimeter();
    ui->height->setNum(height);
    ui->width->setNum(width);
    ui->square->setNum(square);
    ui->perimeter->setNum(perimeter);
}

ShowRectangle::~ShowRectangle()
{
    delete ui;
}
