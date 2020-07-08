#include "Parallelogram.h"

Parallelogram::Parallelogram()
{
   side_a = 0;
   side_b = 0;
   angle_1 = 0;
   angle_2 = 0;
}

void Parallelogram::set_side_a(double t_side_a)
{
    side_a=t_side_a;
    count_perimeter();
    count_square();
}
void Parallelogram::set_side_b(double t_side_b)
{
    side_b=t_side_b;
    count_perimeter();
    count_square();
}
void Parallelogram::set_angle_1(double t_angle_1)
{
    angle_1=t_angle_1;
    count_height();
    count_angle_2();
    count_perimeter();
    count_square();
}
void Parallelogram::set_height(double t_height)
{
    height = t_height;
    count_angle_1();
    count_angle_2();
    count_perimeter();
    count_square();
}
