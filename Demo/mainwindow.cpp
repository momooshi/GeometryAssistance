#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    window = new FigureChoice(this);
    connect (window, &FigureChoice::Return, this, &MainWindow::show);

    show_list = new FigureShow(this);
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
    show_list->show();
}
