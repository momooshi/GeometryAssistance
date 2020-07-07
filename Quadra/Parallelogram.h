#ifndef QUADRA_H
#define QUADRA_H

#include <iostream>
#include <math.h>
#include "../Figure/figure.h"

class Parallelogram : public Figure
{
public:
    double a, b, angle_1, angle_2; //стороны параллелограмма и угол между ними

    Parallelogram();
    ~Parallelogram();

    void set_a(double s_a) { a=s_a; }
    void set_b(double s_b) { b=s_b; }
    void set_angle_1(double s_angle_1) { angle_1=s_angle_1; }


    void count_angle_2()
    {
        angle_2 = (360 - 2*angle_1) / 2;

    }
    double count_perimeter()
    {
        perimeter = 2*(a+b);
        return perimeter;
    }
    double count_square()
    {
        square = angle_1 * M_PI / 180;
        square = sin(square);
        return square;
    }

    double get_perimeter(){return perimeter;}
    double get_square(){return square;}

    double get_a() { return a; }
    double get_b() { return b; }
    double get_angle_1() { return angle_1; }
    double get_angle_2() { return angle_2; }

    void show();
    void show_figure();
};

#endif // QUADRA_H
