#include <iostream>
#include "Parallelogram.h"

void Parallelogram::show()
{
    std::cout << "Sides - " << a << ", " << b << ", " << "Angles - " << angle_1 << ", " << angle_2 << "/n";
    std::cout << "Perimeter - " << perimeter << "/n";
    std::cout << "Square - " << square << "/n";
}
