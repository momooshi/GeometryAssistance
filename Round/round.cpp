#include "round.h"

void Round::set_rad(double Myrad){this->rad = Myrad;}
double Round::get_rad(){return this->rad;}
double Round::get_angle(){return this->angle;}

void Round::show()
{
    std::cout << "Radius - " << rad << "\n";
    std::cout << "Perimetr - " << perimeter << "\n";
    std::cout << "Ploshad - " << square << "\n";
}
