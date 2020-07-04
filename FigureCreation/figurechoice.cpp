#include "figurechoice.h"
#include "ui_figurechoice.h"

FigureChoice::FigureChoice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FigureChoice)
{
    ui->setupUi(this);
    creationwindowr = new CreateRound(this);
    creationwindow_t = new TriangleCreation(this);
    creationwindow_q = new QuadraCreation(this);
    connect (creationwindowr, &CreateRound::Return, this, &FigureChoice::show);
    connect (creationwindow_t, &TriangleCreation::Return, this, &FigureChoice::show);
    connect (creationwindow_q, &QuadraCreation::Return, this, &FigureChoice::show);
}

FigureChoice::~FigureChoice()
{
    delete ui;
}

void FigureChoice::on_pushButton_clicked()
{
    close();
    creationwindowr->show();
}

void FigureChoice::on_pushButton_2_clicked()
{
    close();
    creationwindow_t->show();
}

void FigureChoice::on_pushButton_4_clicked()
{
    close();
    creationwindow_t->show();
}

void FigureChoice::on_pushButton_3_clicked()
{
    close();
    creationwindow_q->show();
}

void FigureChoice::on_pushButton_5_clicked()
{
    close();
    creationwindow_q->show();
}

void FigureChoice::on_pushButton_6_clicked()
{
    close();
    emit Return();
}
