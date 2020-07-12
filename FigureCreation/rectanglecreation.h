#ifndef RECTANGLECREATION_H
#define RECTANGLECREATION_H

#include <QMainWindow>
#include "../Figure/Rrectangle.h"
#include "../FiguresList/figureslist.h"

namespace Ui {
class RectangleCreation;
}

class RectangleCreation : public QMainWindow
{
    Q_OBJECT

public:

    explicit RectangleCreation(QWidget *parent = nullptr, FiguresList* t_list = nullptr);
    ~RectangleCreation();

signals:

    void Return();

private slots:

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:

    Ui::RectangleCreation *ui;
    Rrectangle *rectangle;
    FiguresList *list;
};

#endif // RECTANGLECREATION_H
