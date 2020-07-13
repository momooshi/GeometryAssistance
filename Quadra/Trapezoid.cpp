#include "Trapezoid.h"

Trapezoid::Trapezoid()
{
    side_a = 0;
    side_b = 0;
    side_c = 0;
    side_d = 0;
    angle_1 = 0;
    angle_2 = 0;
    angle_3 = 0;
    angle_4 = 0;
}

void Trapezoid::set_side_a(double t_side_a)
{
    side_a=t_side_a;
    count_perimeter();
    count_square();
    count_angle_1();
    count_angle_2();
    count_angle_3();
    count_angle_4();
}
void Trapezoid::set_side_b(double t_side_b)
{
    side_b=t_side_b;
    count_perimeter();
    count_square();
    count_angle_1();
    count_angle_2();
    count_angle_3();
    count_angle_4();
}
void Trapezoid::set_side_c(double t_side_c)
{
    side_c=t_side_c;
    count_perimeter();
    count_square();
    count_angle_1();
    count_angle_3();
}
void Trapezoid::set_side_d(double t_side_d)
{
    side_d=t_side_d;
    count_perimeter();
    count_square();
    count_angle_2();
    count_angle_4();
}
void Trapezoid::set_angle_1(double t_angle_1)
{
    angle_1=t_angle_1;
    count_perimeter();
    count_square();
    count_height();
    count_angle_3();
}
void Trapezoid::set_angle_2(double t_angle_2)
{
    angle_2=t_angle_2;
    count_perimeter();
    count_square();
    count_height();
    count_angle_4();
}
void Trapezoid::set_height(double t_height)
{
    height=t_height;
    count_perimeter();
    count_square();
    count_angle_1();
    count_angle_2();
    count_angle_3();
    count_angle_4();
}
