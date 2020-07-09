#ifndef FIGURESHOW_H
#define FIGURESHOW_H

#include <QMainWindow>
#include "../FigureCreation/createround.h"
#include "showround.h"
#include <QListWidgetItem>
namespace Ui {
class FigureShow;
}

class FigureShow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FigureShow(QWidget *parent = nullptr, FiguresList *t_list = nullptr);
    ~FigureShow();
signals:
    void Return();
private slots:
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
   void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::FigureShow *ui;
    FiguresList *list;
    ShowRound *window_r;
};

#endif // FIGURESHOW_H
