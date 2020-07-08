#include "round.h"
#include <QTextStream>

QTextStream &operator<<(QTextStream &out, Round &r)
{  out <<"Окружность";
   out<<"Радиус "<<r.get_rad();
   out<<"Периметр (длина окружности) "<<r.get_perimeter();
   out<<"Площадь "<<r.get_square();
   out<<"Угол "<<r.get_angle();
 return out;
};
