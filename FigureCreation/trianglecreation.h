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

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::TriangleCreation *ui;
    Triangle *tri;
    FiguresList *list;
};

#endif // TRIANGLECREATION_H
