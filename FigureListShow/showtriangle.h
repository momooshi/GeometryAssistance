#ifndef SHOWTRIANGLE_H
#define SHOWTRIANGLE_H

#include <QDialog>
#include "../Figure/librarytriangle.h"
namespace Ui {
class ShowTriangle;
}

class ShowTriangle : public QDialog
{
    Q_OBJECT

public:
    explicit ShowTriangle(QWidget *parent = nullptr, Triangle *t_tri = nullptr);
    ~ShowTriangle();

private:
    Triangle *tri;
    Ui::ShowTriangle *ui;
};

#endif // SHOWTRIANGLE_H
