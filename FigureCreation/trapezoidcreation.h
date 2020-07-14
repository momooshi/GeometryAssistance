#ifndef TRAPEZOIDCREATION_H
#define TRAPEZOIDCREATION_H

#include <QMainWindow>
#include "../Figure/Trapezoid.h"
#include "../FiguresList/figureslist.h"
namespace Ui {
class TrapezoidCreation;
}

class TrapezoidCreation : public QMainWindow
{
    Q_OBJECT

public:
    explicit TrapezoidCreation(QWidget *parent = nullptr, FiguresList *t_list = nullptr);
    ~TrapezoidCreation();
    void setFields(double side_a, double side_b, double side_c, double side_d, double angle_a, double angle_b, double angle_c, double angle_d, double height, double perimeter, double square);
signals:
    void Return();
private slots:

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Trapezoid *trape;
    FiguresList *list;
    Ui::TrapezoidCreation *ui;
};

#endif // TRAPEZOIDCREATION_H
