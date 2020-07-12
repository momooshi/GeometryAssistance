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

    if (c=="Окружность")
    {   int index = ui->listWidget->currentRow();
        Round *r = dynamic_cast<Round*>(list->get_element(index));
        window_r = new ShowRound(this, r);
        window_r->show();
     }

    if (c=="Прямоугольник")
    {
        int index = ui->listWidget->currentRow();
        Rrectangle *rec = dynamic_cast<Rrectangle*>(list->get_element(index));
        window_qr = new ShowRectangle(this, rec);
        window_qr->show();
    }

    if (c=="Параллелограмм")
    {
        int index = ui->listWidget->currentRow();
        Parallelogram *par = dynamic_cast<Parallelogram*>(list->get_element(index));
        window_qp = new ShowParallel(this, par);
        window_qp->show();
    }

    if (c=="Трапеция")
    {
        int index = ui->listWidget->currentRow();
        Trapezoid *trape = dynamic_cast<Trapezoid*>(list->get_element(index));
        window_qt = new ShowTrapezoid(this, trape);
        window_qt->show();
    }

    if (c=="Треугольник")
    {
        int index = ui->listWidget->currentRow();
        Triangle *tri = dynamic_cast<Triangle*>(list->get_element(index));
        window_t = new ShowTriangle(this, tri);
        window_t->show();
    }
}

void FigureShow::on_pushButton_3_clicked()
{
    int index = ui->listWidget->currentRow();
    delete ui->listWidget->takeItem(index);
    list->del_element(index);
}

void FigureShow::on_pushButton_2_clicked()
{
    emit Return();
    close();
}
