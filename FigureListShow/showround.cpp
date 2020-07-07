#include "showround.h"
#include "ui_showround.h"

ShowRound::ShowRound(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowRound)
{
    ui->setupUi(this);


}

ShowRound::~ShowRound()
{
    delete ui;
}
