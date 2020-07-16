#include "figurechoice.h"
#include "ui_figurechoice.h"

FigureChoice::FigureChoice(QWidget *parent, FiguresList *t_list) :
    QDialog(parent),
    ui(new Ui::FigureChoice)
{
    list = t_list;
    ui->setupUi(this);
    setWindowTitle("GeometryAssistance");
    creationwindowr = new CreateRound(this, list);
    creationwindow_t = new TriangleCreation(this, list);
    creationwindow_q = new RectangleCreation(this, list);
    creationwindow_qp = new ParallelCreation(this, list);
    creationwindow_qt = new TrapezoidCreation(this, list);
    connect (creationwindowr, &CreateRound::Return, this, &FigureChoice::show);
    connect (creationwindow_t, &TriangleCreation::Return, this, &FigureChoice::show);
    connect (creationwindow_q, &RectangleCreation::Return, this, &FigureChoice::show);
    connect (creationwindow_qp, &ParallelCreation::Return, this, &FigureChoice::show);
    connect (creationwindow_qt, &TrapezoidCreation::Return, this, &FigureChoice::show);
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
    creationwindow_q->show();
}

void FigureChoice::on_pushButton_3_clicked()
{
    close();
    creationwindow_qt->show();
}

void FigureChoice::on_pushButton_5_clicked()
{
    close();
    creationwindow_qp->show();
}

void FigureChoice::on_pushButton_6_clicked()
{
    close();
    emit Return();
}
