#include "Trapezoid.h"
#include "Trapezoid.h"

Trapezoid::Trapezoid():
    side_a(0), side_b(0), side_c(0), side_d(0), angle_1(0), angle_2(0), angle_3(0), angle_4(0), height (0)
{
    name = "Трапеция";
    perimeter = 0;
    square = 0;
}

void Trapezoid::count_angles()
{
  angle_1 = (asin(height/side_a)*180.0)/M_PI;
  angle_2 = (asin(height/side_c)*180.0)/M_PI;
  angle_3 = 180-angle_1;
  angle_4 = 180-angle_2;
}

Trapezoid::Trapezoid(double t_side_a, double t_side_b, double t_side_c, double t_side_d):
    side_a(t_side_a), side_b(t_side_b), side_c(t_side_c), side_d(t_side_d)
{
    count_height();
    count_perimeter();
    count_square();

}
void Trapezoid::count_square()
{
    square = pow((side_b - side_d), 2) + pow(side_a, 2) - pow(side_c, 2);
    square = square / (2 * (side_b - side_d));
    square = pow(side_a, 2) - pow(square, 2);
    square = ((side_d + side_b) / 2) * sqrt(square);
}

void Trapezoid::set_side_a(double t_side_a) { side_a=t_side_a; }
void Trapezoid::set_side_b(double t_side_b) { side_b=t_side_b; }
void Trapezoid::set_side_c(double t_side_c) { side_c=t_side_c; }
void Trapezoid::set_side_d(double t_side_d) { side_d=t_side_d; }
void Trapezoid::set_angle_1(double t_angle_1) { angle_1=t_angle_1; }
void Trapezoid::set_angle_2(double t_angle_2) { angle_2=t_angle_2; }
void Trapezoid::set_height(double t_height) { height=t_height; }

