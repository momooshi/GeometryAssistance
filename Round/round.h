#ifndef ROUND_H
#define ROUND_H
#include "../Figure/figure.h"
<<<<<<< HEAD
#include <math.h>
#include <QTextStream>
class Round : public Figure
{
    double rad;
    const int angle = 360;
public:
    double count_perimeter()
    {
        return (2 * atan(1) * 4 * rad);
    }
    double count_square()
    {
        return (atan(1) * 4 * rad * rad);
    }

    Round (double s_rad = 0): rad (s_rad)
    {
        perimeter = count_perimeter();
        square = count_square();
    }
    double get_perimeter() { return perimeter; }
    double get_square() { return square; }

    void set_rad(double myrad){ rad = myrad; }
    double get_rad(){ return rad; }
    double get_angle(){ return angle; }

    void set_perimeter()
    {
        perimeter = (2 * atan(1) * 4 * rad);
    }
    friend QTextStream &operator<<(QTextStream &out, const Round &r);
     ~Round() {}
=======
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
>>>>>>> dff6dd07f53001827c445a252338ea71697f3fcb
};

#endif // ROUND_H

