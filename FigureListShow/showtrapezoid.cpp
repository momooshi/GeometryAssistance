#include "showtrapezoid.h"
#include "ui_showtrapezoid.h"

ShowTrapezoid::ShowTrapezoid(QWidget *parent, Trapezoid *t_trape) :
    QDialog(parent), trape(t_trape),
    ui(new Ui::ShowTrapezoid)
{
    ui->setupUi(this);
    double side_a = trape->get_side_a();
    double side_b = trape->get_side_b();
    double side_c = trape->get_side_c();
    double side_d = trape->get_side_d();
    double angle_a = trape->get_angle_1();
    double angle_b = trape->get_angle_2();
    double angle_c = trape->get_angle_3();
    double angle_d = trape->get_angle_4();
    double height = trape->get_height();
    double perimeter = trape->get_perimeter();
    double square = trape->get_square();

    ui->side_a->setNum(side_a);
    ui->side_b->setNum(side_b);
    ui->side_c->setNum(side_c);
    ui->side_d->setNum(side_d);
    ui->angle_a->setNum(angle_a);
    ui->angle_b->setNum(angle_b);
    ui->angle_b->setNum(angle_b);
    ui->angle_c->setNum(angle_c);
    ui->angle_d->setNum(angle_d);
    ui->height->setNum(height);
    ui->perimeter->setNum(perimeter);
    ui->square->setNum(square);
}

ShowTrapezoid::~ShowTrapezoid()
{
    delete ui;
}
