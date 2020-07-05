#include <iostream>
#include "Trapezoid.h"

void Trapezoid::show ()
{
    std::cout << "Sides - " << a << ", " << b << ", " << c << ", " << d << "/n";
    std::cout << "Perimeter - " << perimeter << "/n";
    std::cout << "Square - " << square << "/n";
}
