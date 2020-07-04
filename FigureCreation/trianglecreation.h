#ifndef TRIANGLECREATION_H
#define TRIANGLECREATION_H

#include <QMainWindow>

namespace Ui {
class TriangleCreation;
}

class TriangleCreation : public QMainWindow
{
    Q_OBJECT

public:
    explicit TriangleCreation(QWidget *parent = nullptr);
    ~TriangleCreation();
signals:
    void Return();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::TriangleCreation *ui;
};

#endif // TRIANGLECREATION_H
