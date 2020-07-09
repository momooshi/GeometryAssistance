#include "round.h"

Round::Round(double s_rad): rad (s_rad)
{

    count_square();
    count_perimeter();
}

Round::Round()
{
    name = "Круг";
    perimeter = 0.0;
    square = 0.0;
    rad = 0.0;
}
