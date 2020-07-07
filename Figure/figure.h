#ifndef FIGURE_H
#define FIGURE_H
#include <QString>

class Figure
{
 protected:
    double perimeter, square;
    QString name;
 public:
    Figure () { }
    virtual double count_perimeter() = 0;
    virtual double count_square () = 0;
    virtual double  get_perimeter() = 0;
    virtual double  get_square() = 0;
    virtual void show_figure () = 0;
    // virtual Figure* create_figure() = 0;
    virtual QString get_name();
    ~Figure() { }
};

#endif // FIGURE_H
