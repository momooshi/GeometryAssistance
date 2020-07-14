#ifndef SHOWPARALLEL_H
#define SHOWPARALLEL_H

#include <QDialog>
#include "../Figure/Parallelogram.h"
namespace Ui {
class ShowParallel;
}

class ShowParallel : public QDialog
{
    Q_OBJECT

public:
    explicit ShowParallel(QWidget *parent = nullptr, Parallelogram *t_par = nullptr);
    ~ShowParallel();

private:
     Parallelogram *par;
     Ui::ShowParallel *ui;
};

#endif // SHOWPARALLEL_H
