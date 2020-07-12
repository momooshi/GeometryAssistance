#include "createround.h"
#include "ui_createround.h"

CreateRound::CreateRound(QWidget *parent, FiguresList *t_list) :
    QMainWindow(parent), list(t_list),
    ui(new Ui::CreateRound)
{
    ui->setupUi(this);
    round = new Round;
}

CreateRound::~CreateRound()
{
    delete ui;
}

void CreateRound::on_pushButton_clicked()
{
    this->close();
    emit Return();
}

void CreateRound::on_pushButton_2_clicked()
{
    list->add_element(round);
}

void CreateRound::on_pushButton_3_clicked()
{
    double radius = (ui->radline->text()).toDouble();
    double perimeter = (ui->perimline->text()).toDouble();
    double square;
    if (!perimeter)
    {
        round->set_rad(radius);
        round->count_perimeter();
        round->count_square();
        perimeter = round->get_perimeter();
        square = round->get_square();
        ui->rad_2->setNum(radius);
        ui->label_3->setNum(perimeter);
        ui->round_square->setNum(square);
    }
    else if (!radius)
    {
        round->set_perimeter(perimeter);
        round->count_rad();
        round->count_square();
        radius = round->get_rad();
        square = round->get_square();
        ui->rad_2->setNum(radius);
        ui->label_3->setNum(perimeter);
        ui->round_square->setNum(square);
    }
    else ui->statusbar->showMessage("Нельзя расчитать");
}
