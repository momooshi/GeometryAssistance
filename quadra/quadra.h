#ifndef QUADRA_H
#define QUADRA_H

#include <iostream>
#include <math.h>
#include "../Figure/figure.h"

using namespace std;

class trapezoid : public Figure
{
public:
    double a, b, c, d; //стороны трапеции

    trapezoid();

    double count_perimeter()
    {
        perimeter = a+b+c+d;
        return perimeter;
    }
    double count_square()
    {
        square = pow((a - b), 2) + pow(c, 2) - pow(d, 2);
        square = square / (2 * (a - b));
        square = pow(c, 2) - pow(square, 2);
        square = ((a + b) / 2) * sqrt(square);
        return square;
    }

    double  get_perimeter(){return perimeter;}
    double  get_square(){return square;}
    void show_figure ();

    void set_a(double s_a);
    void set_b(double s_b);
    void set_c(double s_c);
    void set_d(double s_d);

    void show ();

    ~trapezoid();
};

class parallelogram : public Figure
{
public:
    double a, b, angle; //стороны параллелограмма и угол между ними

    parallelogram();

    double count_perimeter()
    {
        perimeter = 2*(a+b);
        return perimeter;
    }
    double count_square()
    {
        square = angle * M_PI / 180;
        square = sin(square);
        return square;
    }

    double  get_perimeter(){return perimeter;}
    double  get_square(){return square;}
    void show_figure ();

    void set_a(double s_a);
    void set_b(double s_b);
    void set_angle(double s_angle);


    void show ();

    ~parallelogram();
};

#endif // QUADRA_H
