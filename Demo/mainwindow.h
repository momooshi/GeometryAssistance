#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "figurechoice.h"
#include <QMainWindow>
#include "figureshow.h"
//#include "../FiguresList/figureslist.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr, FiguresList *t_list = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();



    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    FigureChoice *window;
    FigureShow *show_list;
    FiguresList *list;
};
#endif // MAINWINDOW_H
