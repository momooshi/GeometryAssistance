#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent, FiguresList *t_list)
    : QMainWindow(parent), list (t_list)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    window = new FigureChoice(this, list);
    connect (window, &FigureChoice::Return, this, &MainWindow::show);
 }

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    hide();

    window->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    hide();
    show_list = new FigureShow(this, list);
    show_list->show();
}
