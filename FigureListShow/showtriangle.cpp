#include "showtriangle.h"
#include "ui_showtriangle.h"

ShowTriangle::ShowTriangle(QWidget *parent, Triangle *t_tri) :
    QDialog(parent), tri(t_tri),
    ui(new Ui::ShowTriangle)
{
    ui->setupUi(this);
    setWindowTitle("GeometryAssistance");
    double side_a = tri->get_side1();
    double side_b = tri->get_side2();
    double side_c = tri->get_side3();
    double angle_a = tri->get_angle1();
    double angle_b = tri->get_angle2();
    double angle_c = tri->get_angle3();
    double perimeter = tri->get_perimeter();
    double square = tri->get_square();

    ui->side_a->setNum(side_a);
    ui->side_b->setNum(side_b);
    ui->side_c->setNum(side_c);
    ui->angle_a->setNum(angle_a);
    ui->angle_b->setNum(angle_b);
    ui->angle_c->setNum(angle_c);
    ui->perimeter->setNum(perimeter);
    ui->square->setNum(square);
}

ShowTriangle::~ShowTriangle()
{
    delete ui;
}
