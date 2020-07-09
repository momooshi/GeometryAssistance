#ifndef ROUND_H
#define ROUND_H
#include "../Figure/figure.h"
#include <math.h>

#include<iostream>

#include <QTextStream>
class Round : public Figure
{
    double rad;
    const int angle = 360;

public:
    void count_perimeter()
    {
        perimeter = (2 * atan(1) * 4 * rad);
    }

    void count_square()
    {
        square = (atan(1) * 4 * rad * rad);
    }

    void count_rad()
    {
        rad = (perimeter/(2 * atan(1) * 4));
    }

    double get_perimeter() { return perimeter; }
    double get_square() { return square; }
    double get_rad(){ return rad; }
    int get_angle(){ return angle; }

    void set_rad(double myrad)
    {
        rad = myrad;
        count_square();
        count_perimeter();
    }
    void set_perimeter(double s_perimeter)
    {
        perimeter = s_perimeter;
        count_rad();
        count_square();

    }

    QString get_name () { return name; }

    Round();
    Round(double s_rad);
    ~Round() {}
};
#endif
