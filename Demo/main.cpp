#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FiguresList list;           //объект списка, хранящего информацию о фигурах
    MainWindow w(nullptr, &list);
    MainWindow w;
    //FiguresList list;
    w.show();
    return a.exec();
}
