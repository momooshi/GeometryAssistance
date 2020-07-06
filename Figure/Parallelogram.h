#ifndef QUADRA_H
#define QUADRA_H

#include <iostream>
#include <math.h>
#include "figure.h"

class Parallelogram : public Figure
{
public:
    double a, b, angle; //стороны параллелограмма и угол между ними

    Parallelogram();
    ~Parallelogram();

    void set_a(double s_a) { a=s_a; }
    void set_b(double s_b) { b=s_b; }
    void set_angle(double s_angle) { angle=s_angle; }

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

    double get_perimeter(){return perimeter;}
    double get_square(){return square;}

    double get_a() { return a; }
    double get_b() { return b; }
    double get_angle() { return angle; }

    void show ();
    void show_figure ();
};

#endif // QUADRA_H
