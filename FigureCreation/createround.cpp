#include "createround.h"
#include "ui_createround.h"

CreateRound::CreateRound(QWidget *parent, FiguresList *t_list) :
    QMainWindow(parent), list(t_list),
    ui(new Ui::CreateRound)
{
    ui->setupUi(this);
    round = new Round;
    file.setFileName("figures.txt");
    text = new QTextStream (&file);
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

void CreateRound::on_radline_textChanged(const QString &arg1)
{
    double radius = arg1.toDouble();
    round->set_rad(radius);
    double perimeter = round->get_perimeter();
    double square = round->get_square();

    ui->label_3->setNum(perimeter);
    ui->round_square->setNum(square);
}


void CreateRound::on_perimline_textChanged(const QString &arg1)
{
    double perimeter = arg1.toDouble();
    round->set_perimeter(perimeter);
    double radius = round->get_rad();
    double square = round->get_square();
    ui->rad_2->setNum(radius);
    ui->round_square->setNum(square);
}
