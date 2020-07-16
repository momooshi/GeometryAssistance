#include "round.h"

Round::Round(double s_rad): rad (s_rad)
{
    name = "Окружность";
    count_square();
    count_perimeter();
}

Round::Round(): rad(0)
{
    name = "Окружность";
    perimeter = 0.0;
    square = 0.0;
}
