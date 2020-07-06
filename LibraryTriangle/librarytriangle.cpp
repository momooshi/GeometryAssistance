#include "librarytriangle.h"


void Triangle::set_side(double s_side1, double s_side2, double s_side3)
{
    side1 = s_side1;
    side2 = s_side2;
    side3 = s_side3;
}
void Triangle::set_angle (double a_angle1, double a_angle2, double a_angle3)
{
    angle1 = a_angle1;
    angle2 = a_angle2;
    angle3 = a_angle3;
}

double Triangle::get_side1() { return side1; }
double Triangle::get_side2() { return side2; }
double Triangle::get_side3() { return side3; }
double Triangle::get_angle1() { return angle1; }
double Triangle::get_angle2() { return angle2; }
double Triangle::get_angle3() { return angle3; }

double Triangle::count_square()
{
    double half_perimeter;
    half_perimeter = (side1+side2+side3)/2;
    square=sqrt(half_perimeter*(half_perimeter-side1)*(half_perimeter-side2)*(half_perimeter-side3));
    return square;
}

double Triangle::count_perimeter()
{
    double s_perimeter=side1+side2+side3;
    return s_perimeter;
}
