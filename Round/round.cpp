#include "round.h"

QTextStream &operator<<(QTextStream &out, const Round &r)
{   out<<"Окружность";
    out<<"Радиус "<<r.rad;
    out<<"Периметр (длина окружности) "<<r.perimeter;
    out<<"Площадь "<<r.square;
    out<<"Угол "<<r.angle;
    return out;
}
