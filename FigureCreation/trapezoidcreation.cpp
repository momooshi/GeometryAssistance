#include "trapezoidcreation.h"
#include "ui_trapezoidcreation.h"

TrapezoidCreation::TrapezoidCreation(QWidget *parent, FiguresList *t_list) :
    QMainWindow(parent), list (t_list),
    ui(new Ui::TrapezoidCreation)
{
    ui->setupUi(this);
    setWindowTitle("GeometryAssistance");
    trape = new Trapezoid;
}

TrapezoidCreation::~TrapezoidCreation()
{
    delete ui;
}

void TrapezoidCreation::setFields(double side_a, double side_b, double side_c, double side_d, double angle_a, double angle_b, double angle_c, double angle_d, double height, double perimeter, double square)
{
    ui->side_a->setNum(side_a);
    ui->side_b->setNum(side_b);
    ui->side_c->setNum(side_c);
    ui->side_d->setNum(side_d);
    ui->angle_a->setNum(angle_a);
    ui->angle_b->setNum(angle_b);
    ui->angle_c->setNum(angle_c);
    ui->angle_d->setNum(angle_d);
    ui->height->setNum(height);
    ui->perimeter->setNum(perimeter);
    ui->square->setNum(square);
}

void TrapezoidCreation::on_pushButton_3_clicked()
{
    double side_a = (ui->edit_side_a->text()).toDouble();
    double side_b = (ui->edit_side_b->text()).toDouble();
    double side_c = (ui->edit_side_c->text()).toDouble();
    double side_d = (ui->edit_side_d->text()).toDouble();
    double height = (ui->edit_height->text()).toDouble();
    double perimeter, square, angle_a, angle_b, angle_c, angle_d;

    if ((!side_a)&&(!side_c))
   {
        trape->set_side_b(side_b);
        trape->set_side_d(side_d);
        trape->set_height(height);

        trape->count_side();
        trape->count_square();
        trape->count_perimeter();

        trape->count_angles();

        side_a = trape->get_side_a();
        side_c = trape->get_side_c();
        angle_a = trape->get_angle_1();
        angle_b = trape->get_angle_2();
        angle_c = trape->get_angle_3();
        angle_d = trape->get_angle_4();
        perimeter = trape->get_perimeter();
        square = trape->get_square();

        setFields (side_a, side_b, side_c, side_d, angle_a, angle_b, angle_c, angle_d, height, perimeter, square);
  }
    else if (!height)
    {
        trape->set_side_a(side_a);
        trape->set_side_b(side_b);
        trape->set_side_c(side_c);
        trape->set_side_d(side_d);

        trape->count_square();
        trape->count_perimeter();
        trape->count_height();
        trape->count_angles();

        perimeter = trape->get_perimeter();
        square = trape->get_square();
        height = trape->get_height();
        angle_a = trape->get_angle_1();
        angle_b = trape->get_angle_2();
        angle_c = trape->get_angle_3();
        angle_d = trape->get_angle_4();

        if (angle_a+angle_b!=180) { ui->statusbar->showMessage("Нельзя расчитать"); }
        else
        { setFields (side_a, side_b, side_c, side_d, angle_a, angle_b, angle_c, angle_d, height, perimeter, square); }
    }
    else ui->statusbar->showMessage("Нельзя расчитать");
}

void TrapezoidCreation::on_pushButton_clicked()
{
    list->add_element(trape);
    ui->statusbar->showMessage("Сохранено");
}

void TrapezoidCreation::on_pushButton_2_clicked()
{
    emit Return();
    close();
}
