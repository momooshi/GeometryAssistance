#ifndef QUADRA_H
#define QUADRA_H

#include <iostream>
#include <math.h>
#include "../Figure/figure.h"

class Trapezoid : public Figure
{
public:
    double a, b, c, d, angle_1, angle_2, angle_3, angle_4; //стороны и углы трапеции

    Trapezoid();
    ~Trapezoid();

    void set_a(double s_a) { a=s_a; }
    void set_b(double s_b) { b=s_b; }
    void set_c(double s_c) { c=s_c; }
    void set_d(double s_d) { d=s_d; }
    void set_angle_1(double s_angle_1) { angle_1=s_angle_1; }
    void set_angle_2(double s_angle_2) { angle_2=s_angle_2; }
    void set_angle_3(double s_angle_3) { angle_3=s_angle_3; }
    void set_angle_4(double s_angle_4) { angle_4=s_angle_4; }

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

    double get_perimeter() { return perimeter; }
    double get_square() { return square; }

    double get_angle_1() { return angle_1; }
    double get_angle_2() { return angle_2; }
    double get_angle_3() { return angle_3; }
    double get_angle_4() { return angle_4; }

    void show();
    void show_figure();
};

#endif // QUADRA_H
