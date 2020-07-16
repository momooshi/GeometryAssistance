#include "showparallel.h"
#include "ui_showparallel.h"

ShowParallel::ShowParallel(QWidget *parent, Parallelogram *t_par) :
    QDialog(parent), par (t_par),
    ui(new Ui::ShowParallel)
{
    ui->setupUi(this);
    setWindowTitle("GeometryAssistance");
    double side_a = par->get_side_a();
    double side_b = par->get_side_b();
    double angle_1 = par->get_angle_1();
    double angle_2 = par->get_angle_2();
    double height = par->get_height();
    double perimeter = par->get_perimeter();
    double square = par->get_square();

    ui->side_a->setNum(side_a);
    ui->side_b->setNum(side_b);
    ui->angle_a->setNum(angle_1);
    ui->angle_b->setNum(angle_2);
    ui->height->setNum(height);
    ui->perimeter->setNum(perimeter);
    ui->square->setNum(square);
}

ShowParallel::~ShowParallel()
{
    delete ui;
}
