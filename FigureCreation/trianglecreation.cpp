#include "trianglecreation.h"
#include "ui_trianglecreation.h"

TriangleCreation::TriangleCreation(QWidget *parent, FiguresList *t_list) :
    QMainWindow(parent),
    ui(new Ui::TriangleCreation)
{   list = t_list;
    ui->setupUi(this);
    tri = new Triangle;
}

TriangleCreation::~TriangleCreation()
{
    delete ui;
}

void TriangleCreation::on_pushButton_clicked()
{
    close();
    emit Return();
}

void TriangleCreation::on_pushButton_2_clicked()
{
    list->add_element(tri);
    ui->statusbar->showMessage("Сохранено");
}

void TriangleCreation::on_pushButton_3_clicked()
{
    double side_a = (ui->lineEdit->text()).toDouble();
    double side_b = (ui->lineEdit_2->text()).toDouble();
     double side_c = (ui->lineEdit_3->text()).toDouble();
    double angle_a = (ui->lineEdit_4->text()).toDouble();
    double angle_b = (ui->lineEdit_5->text()).toDouble();
    double angle_c = (ui->lineEdit_6->text()).toDouble();

if ((!angle_a)&&(!angle_b)&&(!angle_c))
  {
    if (((side_a+side_b)<side_c)||((side_b+side_c)<side_a)||((side_c+side_b)<side_a))
        ui->statusbar->showMessage("Треугольника не существует");
    else
    {
        tri->set_side1(side_a);
        tri->set_side2(side_b);
        tri->set_side3(side_c);
        tri->count_square();
        tri->count_perimeter();
        tri->count_angles();

        ui->side_a->setNum(side_a);
        ui->side_b->setNum(side_b);
        ui->side_c->setNum(side_c);
        ui->angle_a->setNum(tri->get_angle1());
        ui->angle_b->setNum(tri->get_angle2());
        ui->angle_c->setNum(tri->get_angle3());
        ui->perimeter->setNum(tri->get_perimeter());
        ui->square_2->setNum(tri->get_square());
    }
   } else
    if ((!side_c)&&(!angle_b)&&(!angle_c))
    {
      tri->set_side1(side_a);
      tri->set_side2(side_b);
      tri->set_angle1(angle_a);
      tri->count_on_1angle_2side();
      tri->count_square();
      tri->count_perimeter();

      ui->side_a->setNum(side_a);
      ui->side_b->setNum(side_b);
      ui->side_c->setNum(tri->get_side3());
      ui->angle_a->setNum(angle_a);
      ui->angle_b->setNum(tri->get_angle2());
      ui->angle_c->setNum(tri->get_angle3());
      ui->perimeter->setNum(tri->get_perimeter());
      ui->square_2->setNum(tri->get_square());
    }
 else if ((!side_b)&&(!side_c)&&(!angle_b))
  {
      tri->set_side1(side_a);
      tri->set_angle1(angle_a);
      tri->set_angle3(angle_c);

      tri->count_on_2angle_1side();
      tri->count_square();
      tri->count_perimeter();

      ui->side_a->setNum(side_a);
      ui->side_b->setNum(tri->get_side2());
      ui->side_c->setNum(tri->get_side3());
      ui->angle_a->setNum(angle_a);
      ui->angle_b->setNum(tri->get_angle2());
      ui->angle_c->setNum(angle_c);
      ui->perimeter->setNum(tri->get_perimeter());
      ui->square_2->setNum(tri->get_square());
  }
}

void TriangleCreation::on_lineEdit_textChanged(const QString &arg1)
{
    double side_a = arg1.toDouble();
    tri->set_side1(side_a);
}
