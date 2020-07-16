#include "Rrectangle.h"
Rrectangle::Rrectangle(): width (0), length (0)
{
  name = "Прямоугольник";
  perimeter = 0;
  square = 0;
}

Rrectangle::Rrectangle (double t_width, double t_length):
    width (t_width), length (t_length)
{
  name = "Прямоугольник";
  count_perimeter();
  count_square ();
}

void Rrectangle::set_width(double t_width)
{
     width = t_width;
}

 void Rrectangle::set_length(double t_length)
{
     length = t_length;
}
