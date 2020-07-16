#include "figureshow.h"
#include "ui_figureshow.h"

FigureShow::FigureShow(QWidget *parent, FiguresList *t_list) :
    QMainWindow(parent),
    ui(new Ui::FigureShow)
{
    list = t_list;
    ui->setupUi(this);
    window_r = new ShowRound(this);

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
        window_r->show();
}
