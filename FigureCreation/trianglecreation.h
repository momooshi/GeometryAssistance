#ifndef TRIANGLECREATION_H
#define TRIANGLECREATION_H

#include <QMainWindow>
#include "../Figure/librarytriangle.h"
#include "../FiguresList/figureslist.h"
namespace Ui {
class TriangleCreation;
}

class TriangleCreation : public QMainWindow
{
    Q_OBJECT

public:
    explicit TriangleCreation(QWidget *parent = nullptr, FiguresList *t_list = nullptr);
    ~TriangleCreation();
signals:
    void Return();
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:
    Triangle *tri;
    FiguresList *list;
    Ui::TriangleCreation *ui;
};

#endif // TRIANGLECREATION_H
