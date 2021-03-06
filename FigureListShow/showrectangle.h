#ifndef SHOWRECTANGLE_H
#define SHOWRECTANGLE_H

#include <QDialog>
#include "../Figure/Rrectangle.h"
namespace Ui {
class ShowRectangle;
}

class ShowRectangle : public QDialog
{
    Q_OBJECT

public:
    explicit ShowRectangle(QWidget *parent = nullptr, Rrectangle *t_r = nullptr);
    ~ShowRectangle();

private:
    Rrectangle *rec;
    Ui::ShowRectangle *ui;
};

#endif // SHOWRECTANGLE_H
