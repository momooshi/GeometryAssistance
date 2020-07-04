#ifndef QUADRACREATION_H
#define QUADRACREATION_H

#include <QMainWindow>

namespace Ui {
class QuadraCreation;
}

class QuadraCreation : public QMainWindow
{
    Q_OBJECT

public:
    explicit QuadraCreation(QWidget *parent = nullptr);
    ~QuadraCreation();
signals:
    void Return();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    private:
    Ui::QuadraCreation *ui;
};

#endif // QUADRACREATION_H
