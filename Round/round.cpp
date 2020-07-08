#include "round.h"

<<<<<<< HEAD
QTextStream &operator<<(QTextStream &out, const Round &r)
{   out<<"Окружность";
    out<<"Радиус "<<r.rad;
    out<<"Периметр (длина окружности) "<<r.perimeter;
    out<<"Площадь "<<r.square;
    out<<"Угол "<<r.angle;
    return out;
=======
void Round::set_rad(double Myrad){this->rad = Myrad;}
double Round::get_rad(){return this->rad;}
double Round::get_angle(){return this->angle;}

void Round::show()
{
    std::cout << "Radius - " << rad << "\n";
    std::cout << "Perimetr - " << perimeter << "\n";
    std::cout << "Ploshad - " << square << "\n";
>>>>>>> dff6dd07f53001827c445a252338ea71697f3fcb
}
