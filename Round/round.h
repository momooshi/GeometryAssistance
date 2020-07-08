#ifndef ROUND_H
#define ROUND_H
#include "../Figure/figure.h"
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

#endif // ROUND_H

