#ifndef FIGURESHOW_H
#define FIGURESHOW_H

#include <QMainWindow>
#include "../FigureCreation/createround.h"
namespace Ui {
class FigureShow;
}

class FigureShow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FigureShow(QWidget *parent = nullptr);
    ~FigureShow();

private:
    Ui::FigureShow *ui;


};

#endif // FIGURESHOW_H
