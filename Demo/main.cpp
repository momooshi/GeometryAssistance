#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FiguresList list;
    //объект списка, хранящего информацию о фигурах

    MainWindow w(nullptr, &list);
    w.show();
    return a.exec();
}
