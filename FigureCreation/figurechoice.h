#ifndef FIGURECHOICE_H
#define FIGURECHOICE_H
#include "createround.h"
#include "trianglecreation.h"
#include "quadracreation.h"
#include <QDialog>

namespace Ui {
class FigureChoice;
}

class FigureChoice : public QDialog
{
    Q_OBJECT

public:
    explicit FigureChoice(QWidget *parent = nullptr);
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
    Ui::FigureChoice *ui;
    CreateRound *creationwindowr;
    TriangleCreation *creationwindow_t;
    QuadraCreation *creationwindow_q;
};

#endif // FIGURECHOICE_H
