#include "rectanglecreation.h"
#include "ui_rectanglecreation.h"

RectangleCreation::RectangleCreation(QWidget *parent, FiguresList *t_list) :
    QMainWindow(parent), list(t_list),
    ui(new Ui::RectangleCreation)
{
    ui->setupUi(this);
    setWindowTitle("GeometryAssistance");
    rectangle = new Rrectangle;
}

RectangleCreation::~RectangleCreation()
{
    delete ui;
}

void RectangleCreation::on_pushButton_clicked()
{
    emit Return();
    close();
}

void RectangleCreation::on_pushButton_2_clicked()
{
   list->add_element(rectangle);
   ui->statusbar->showMessage("Сохранено");
}

void RectangleCreation::on_pushButton_3_clicked()
{
    double length = (ui->lineEdit->text()).toDouble();
    double width = (ui->lineEdit_2->text()).toDouble();

    rectangle->set_length(length);
    rectangle->set_width(width);
    rectangle->count_square();
    rectangle->count_perimeter();
    double perimeter = rectangle->get_perimeter();
    double square = rectangle->get_square();

    ui->side_a->setNum(length);
    ui->side_b->setNum(width);
    ui->perimeter->setNum(perimeter);
    ui->square->setNum(square);

}
