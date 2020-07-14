#ifndef FIGURECHOICE_H
#define FIGURECHOICE_H
#include "../FigureCreation/createround.h"
#include "../FigureCreation/trianglecreation.h"
#include "../FigureCreation/rectanglecreation.h"
#include "../FigureCreation/parallelcreation.h"
#include "../FigureCreation/trapezoidcreation.h"
#include <QDialog>

namespace Ui {
class FigureChoice;
}

class FigureChoice : public QDialog
{
    Q_OBJECT

public:
    explicit FigureChoice(QWidget *parent = nullptr, FiguresList *t_list = nullptr);
    ~FigureChoice();

signals:
    void Return ();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    CreateRound *creationwindowr;
    TriangleCreation *creationwindow_t;
    RectangleCreation *creationwindow_q;
    ParallelCreation *creationwindow_qp;
    TrapezoidCreation *creationwindow_qt;
    FiguresList *list;
    Ui::FigureChoice *ui;
};

#endif // FIGURECHOICE_H
