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

double LibraryTriangle::count_side1_sidesangle()
{
    side1=sqrt(side2*side2+side3*side3-2*side2*side3*cos(angle2));
    return side1;
}

double LibraryTriangle::count_third_angle()
{
    angle3=180-angle1-angle2;
    return angle3;
}

void LibraryTriangle::count_angles_cos()
{
    angle1=acos((side2*side2+side3*side3-side1*side1)/2*side2*side3);
    angle2=acos((side1*side1+side3*side3-side2*side2)/2*side1*side2);
    angle3=acos((side1*side1+side2*side2-side3*side3)/2*side1*side3);
}

void LibraryTriangle::count_on_2angle_1side()
{
    angle1=180-(angle2+angle3);
    side2=side1*(sin(angle2)/sin(angle1));
    side3=side1*(sin(angle3)/sin(angle1));
}

double LibraryTriangle::count_on_1angle_2side()
{
    side3=sqrt(side1*side1+side2*side2-2*side1*side2*cos(angle3));
    angle1=acos((side2*side2+side3*side3-side1*side1)/2*side2*side3);
    angle2=acos((side1*side1+side3*side3-side2*side2)/2*side1*side3);
    return side3;
}

double LibraryTriangle::count_3angle_on_3side()
{
    if ((side1<(side2+side3))||(side2<(side1+side3))||(side3<(side1+side2)))
    {
        angle1=acos((side2*side2+side3*side3-side1*side1)/2*side2*side3);
        angle2=acos((side1*side1+side3*side3-side2*side2)/2*side1*side3);
        angle3=180-(angle1+angle2);
    }
    else std::cout<<"This is not a triangle"<<std::endl;
    return 0;
}

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
