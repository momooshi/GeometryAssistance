#include "showround.h"
#include "ui_showround.h"

ShowRound::ShowRound(QWidget *parent, Round *t_r) :
    QDialog(parent),r(t_r),
    ui(new Ui::ShowRound)
{
    double radius = r->get_rad();
    double perimeter = r->get_perimeter();
    double square = r->get_square();
    ui->setupUi(this);
    ui->radius->setNum(radius);
    ui->perimeter->setNum(perimeter);
    ui->square->setNum(square);

}

ShowRound::~ShowRound()
{
    delete ui;
}


