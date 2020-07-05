#ifndef ROUND_H
#define ROUND_H
#include "../Figure/figure.h"
#include <cmath>
#include <math.h>
#include <iostream>
class Round : public Figure
{
    double rad, angle;
public:
    //seteri
    void set_rad(double Myrad);
    //geteri
    double get_perimeter();
    double get_square();
    double get_rad();
    double get_angle();
    void show();
    double perimeter()
    {
        return (2 * atan(1) * 4 * rad);
    }
    double square()
    {
        return (atan(1) * 4 * rad * rad);
    }
};

#endif // ROUND_H

