#include <iostream>
#include "Parallelogram.h"

void Parallelogram::show()
{
    std::cout << "Sides - " << a << ", " << b << ", " << "Angle - " << angle << "/n";
    std::cout << "Perimeter - " << perimeter << "/n";
    std::cout << "Square - " << square << "/n";
}
