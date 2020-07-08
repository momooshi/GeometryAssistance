#include "round.h"
Round::Round(double rad)
{
    rad=count_rad();
    square=count_square();
    perimeter = count_perimeter();
}

Round::Round()
{
    Round::perimeter = 0.0;
    Round::square = 0.0;
    Round::rad = 0.0;
}
