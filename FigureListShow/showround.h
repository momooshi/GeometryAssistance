#ifndef SHOWROUND_H
#define SHOWROUND_H

#include <QDialog>

namespace Ui {
class ShowRound;
}

class ShowRound : public QDialog
{
    Q_OBJECT

public:
    explicit ShowRound(QWidget *parent = nullptr);
    ~ShowRound();

private:
    Ui::ShowRound *ui;
};

#endif // SHOWROUND_H
