#include "parallelcreation.h"
#include "ui_parallelcreation.h"

ParallelCreation::ParallelCreation(QWidget *parent, FiguresList *t_list) :
    QMainWindow(parent), list(t_list),
    ui(new Ui::ParallelCreation)
{
    ui->setupUi(this);
    setWindowTitle("GeometryAssistance");
    par = new Parallelogram;
}

ParallelCreation::~ParallelCreation()
{
    delete ui;
}

void ParallelCreation::on_pushButton_2_clicked()
{
    emit Return();
    close();
}
void ParallelCreation::setFields(double side_a, double side_b, double angle_a, double angle_b, double height, double perimeter, double square)
{
    ui->side_a->setNum(side_a);
    ui->side_b->setNum(side_b);
    ui->angle_a->setNum(angle_a);
    ui->angle_b->setNum(angle_b);
    ui->height->setNum(height);
    ui->perimeter->setNum(perimeter);
    ui->square->setNum(square);
}

void ParallelCreation::on_pushButton_clicked()
{
    list->add_element(par);
    ui->statusbar->showMessage("Сохранено");
}

void ParallelCreation::on_pushButton_3_clicked()
{
    double side_a = (ui->lineEdit->text()).toDouble();
    double side_b = (ui->lineEdit_2->text()).toDouble();

    double square, perimeter;
    int angle_b;

    par->set_side_a(side_a);
    par->set_side_b(side_b);

    int angle_a = (ui->lineEdit_3->text()).toInt();
    double height = (ui->lineEdit_4->text()).toDouble();
    if (!height)
    {
        par->set_angle_1(angle_a);

        par->count_height();
        par->count_perimeter();
        par->count_square();
        par->count_angle_2();

        angle_b = par->get_angle_2();
        height = par->get_height();
        square = par->get_square();
        perimeter = par->get_perimeter();

        setFields(side_a, side_b, angle_a, angle_b, height, perimeter, square);
    }
    else if (!angle_a)
    {
        par->set_height(height);

        par->count_angle_1();
        par->count_perimeter();
        par->count_square();
        par->count_angle_2();

        angle_a = par->get_angle_1();
        angle_b = par->get_angle_2();
        square = par->get_square();
        perimeter = par->get_perimeter();

        setFields(side_a, side_b, angle_a, angle_b, height, perimeter, square);
    }
    else ui->statusbar->showMessage("Невозможно рассчитать");

}
