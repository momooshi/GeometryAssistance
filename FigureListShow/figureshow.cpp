#include "figureshow.h"
#include "ui_figureshow.h"

FigureShow::FigureShow(QWidget *parent, FiguresList *t_list) :
    QMainWindow(parent),
    ui(new Ui::FigureShow)
{
    list = t_list;
    ui->setupUi(this);

    for (int i=0; i<list->get_size(); i++)
    {
        Figure* a = list->get_element(i);
        ui->listWidget->addItem(a->get_name());
    }
}

FigureShow::~FigureShow()
{
    delete ui;
}


void FigureShow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    QString c = item->text();
    if (c=="Круг")
    {   int index = ui->listWidget->currentRow();
        Round *r = dynamic_cast<Round*>(list->get_element(index));
        window_r = new ShowRound(this, r);
        window_r->show();
     }
}

void FigureShow::on_pushButton_3_clicked()
{
    int index = ui->listWidget->currentRow();
    //ui->listWidget->takeItem(index);
    list->del_element(index);
    delete ui->listWidget->currentItem();

    //if (window_r->isVisible()) window_r->close();
}

void FigureShow::on_pushButton_2_clicked()
{
    emit Return();
    close();
}
