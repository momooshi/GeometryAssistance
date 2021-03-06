#ifndef SHOWROUND_H
#define SHOWROUND_H

#include <QDialog>
#include "../Figure/round.h"
namespace Ui {
class ShowRound;
}

class ShowRound : public QDialog
{
    Q_OBJECT

public:
    explicit ShowRound(QWidget *parent = nullptr, Round *t_r = nullptr);
    ~ShowRound();
private:
    Round *r;
    Ui::ShowRound *ui;
};

#endif // SHOWROUND_H
