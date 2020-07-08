#ifndef CREATEROUND_H
#define CREATEROUND_H

#include <QMainWindow>
#include "../Round/round.h"

#include "../FiguresList/figureslist.h"
#include "../FigureListShow/figureshow.h"

#include <QDir>
#include <QFile>
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

    void on_radline_textChanged(const QString &arg1);

private:
    Ui::CreateRound *ui;
    Round *round;
    QFile file;
    QTextStream *text;
    FiguresList *list;

  };

#endif // CREATEROUND_H
