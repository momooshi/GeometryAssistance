#include "librarytriangle.h"

LibraryTriangle::LibraryTriangle(double side1, double side2, double side3, double angle1, double angle2, double angle3)
{
    this->side1=side1;
    this->side2=side2;
    this->side3=side3;
    this->angle1=angle1;
    this->angle2=angle2;
    this->angle3=angle3;
}

void LibraryTriangle::set_side(double s_side1, double s_side2, double s_side3)
{
    side1=s_side1;
    side2=s_side2;
    side3=s_side3;
}
void LibraryTriangle::set_angle (double a_angle1, double a_angle2, double a_angle3)
{
    angle1=a_angle1;
    angle2=a_angle2;
    angle3=a_angle3;
}

double LibraryTriangle::get_side1() {return side1;}
double LibraryTriangle::get_side2() {return side2;}
double LibraryTriangle::get_side3() {return side3;}
double LibraryTriangle::get_angle1() {return angle1;}
double LibraryTriangle::get_angle2() {return angle2;}
double LibraryTriangle::get_angle3() {return angle3;}

double LibraryTriangle::count_square()
{
    double half_perimeter;
    half_perimeter = (side1+side2+side3)/2;
    square=sqrt(half_perimeter*(half_perimeter-side1)*(half_perimeter-side2)*(half_perimeter-side3));
    return square;
}

double LibraryTriangle::count_perimeter()
{
    perimeter=side1+side2+side3;
    return perimeter;
}

void LibraryTriangle:: show()
{
    std::cout << "\nSide of the triangle: " << side1 << side2 << side3 << std::endl;
    std::cout <<  "\nTriangle angles: " << angle1 << angle2 << angle3 << std::endl;
    std::cout << "\nTriangle perimeter: " << perimeter << std::endl;
   std:: cout << "\nArea of a triangle: " << square << std::endl;
}