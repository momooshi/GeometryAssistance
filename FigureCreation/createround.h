#ifndef CREATEROUND_H
#define CREATEROUND_H

#include <QMainWindow>

namespace Ui {
class CreateRound;
}

class CreateRound : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreateRound(QWidget *parent = nullptr);
    ~CreateRound();
signals:
    void Return();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::CreateRound *ui;
  };

#endif // CREATEROUND_H
