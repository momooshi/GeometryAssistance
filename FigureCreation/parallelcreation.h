#ifndef PARALLELCREATION_H
#define PARALLELCREATION_H

#include <QMainWindow>
#include "../Figure/Parallelogram.h"
#include "../FiguresList/figureslist.h"

namespace Ui {
class ParallelCreation;
}

class ParallelCreation : public QMainWindow
{
    Q_OBJECT

public:
    explicit ParallelCreation(QWidget *parent = nullptr, FiguresList *t_list = nullptr);
    ~ParallelCreation();
    void setFields(double side_a, double side_b, double angle_a, double angle_b, double height, double perimeter, double square);
signals:
    void Return ();
private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::ParallelCreation *ui;
    Parallelogram *par;
    FiguresList *list;
};

#endif // PARALLELCREATION_H
