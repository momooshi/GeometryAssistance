#ifndef CREATEROUND_H
#define CREATEROUND_H

#include <QMainWindow>
#include "../Figure/round.h"
#include "../FiguresList/figureslist.h"

namespace Ui {
class CreateRound;
}

class CreateRound : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreateRound(QWidget *parent = nullptr, FiguresList *t_list = nullptr);
    ~CreateRound();
signals:
    void Return();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Round *round;
    FiguresList *list;
    Ui::CreateRound *ui;
  };

#endif // CREATEROUND_H
