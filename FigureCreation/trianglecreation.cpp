#include "trianglecreation.h"
#include "ui_trianglecreation.h"

TriangleCreation::TriangleCreation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TriangleCreation)
{
    ui->setupUi(this);
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
    ui->statusbar->showMessage("Сохранено");
}

void TriangleCreation::on_radline_textChanged(const QString &arg1)
{

}
