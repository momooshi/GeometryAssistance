#include "quadracreation.h"
#include "ui_quadracreation.h"

QuadraCreation::QuadraCreation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QuadraCreation)
{
    ui->setupUi(this);
}

QuadraCreation::~QuadraCreation()
{
    delete ui;
}

void QuadraCreation::on_pushButton_clicked()
{
    close();
    emit Return();
}

void QuadraCreation::on_pushButton_2_clicked()
{
    ui->statusbar->showMessage("Сохранено");
}
