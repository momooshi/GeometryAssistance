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

    /*file.open(QFile::WriteOnly | QFile::Text);
    if (file.isOpen())
    ui->statusbar->showMessage("Сохранено");
    *text << (round->get_rad())<<" ";
    *text << (round->get_perimeter());
    file.close();*/
    list->add_element(round);
}

void CreateRound::on_radline_textChanged(const QString &arg1)
{
    double radius = arg1.toDouble();
    round->set_rad(radius);
    double perimeter = round->count_perimeter();
    double square = round->count_square();

    ui->label_3->setNum(perimeter);
    ui->round_square->setNum(square);
}

