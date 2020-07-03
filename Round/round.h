#ifndef ROUND_H
#define ROUND_H
#include "../Figure/figure.h"
#include <math.h>
class Round: protected Figure
{//длина окружности - это ее периметр, окружность задается радиусом, имеет один угол в 360 градусов
    double rad, angle;

public:
    Round(): rad (0) {}
    Round (double s_rad) : rad (s_rad), angle (360)
    {
        count_perimeter ();
        count_square();
    }

    double count_perimeter ()
    {
        return (2*3.14*rad);
    }

    double count_square ()
    {
        return (3.14*rad*rad);
    }

    double set_rad(double rad);
    void show ();
};

#endif // ROUND_H
