#include "createround.h"
#include "ui_createround.h"

CreateRound::CreateRound(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateRound)
{
    ui->setupUi(this);
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
    ui->statusbar->showMessage("Сохранено");
}
