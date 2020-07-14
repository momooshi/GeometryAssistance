#ifndef SHOWTRAPEZOID_H
#define SHOWTRAPEZOID_H

#include <QDialog>
#include "../Figure/Trapezoid.h"
namespace Ui {
class ShowTrapezoid;
}

class ShowTrapezoid : public QDialog
{
    Q_OBJECT

public:
    explicit ShowTrapezoid(QWidget *parent = nullptr, Trapezoid *t_trape = nullptr);
    ~ShowTrapezoid();

private:
    Trapezoid *trape;
    Ui::ShowTrapezoid *ui;
};

#endif // SHOWTRAPEZOID_H
