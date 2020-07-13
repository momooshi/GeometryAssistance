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


    double count_rad()
    {
        return(perimeter/(2 * atan(1) * 4));
    }

    double get_perimeter() { return perimeter; }
    double get_square() { return square; }
    double get_rad(){ return rad; }
    int get_angle(){ return angle; }

    void set_rad(double myrad)
    {
        rad = myrad;
        square=count_square();
        perimeter = count_perimeter();
    }
    void set_perimeter(double perimeter)
    {
        rad=count_rad();
        square=count_square();
        perimeter = count_perimeter();
    }

    QString get_name () { return name; }

    Round();
    Round(double rad);
    ~Round() {}
};


#endif // ROUND_H

