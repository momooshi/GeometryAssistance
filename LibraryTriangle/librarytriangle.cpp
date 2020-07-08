#include "librarytriangle.h"


LibraryTriangle::LibraryTriangle()
{
    side1=0;
    side2=0;
    side3=0;
    angle1=0;
    angle2=0;
    angle3=0;
}

void LibraryTriangle::set_side1(double a)
{
   side1=a;
   perimeter=count_perimeter();
   square=count_square();
   count_angles_cos();
}

void LibraryTriangle::set_side2(double a)
{
   side2=a;
   perimeter=count_perimeter();
   square=count_square();
   count_angles_cos();
}

void LibraryTriangle::set_side3(double a)
{
   side3=a;
   perimeter=count_perimeter();
   square=count_square();
   count_angles_cos();
}

void LibraryTriangle::set_angle1(double b)
{
   angle1=b;
   perimeter=count_perimeter();
   square=count_square();
   count_on_1angle_2side();
}

void LibraryTriangle::set_angle2(double b)
{
   angle2=b;
   perimeter=count_perimeter();
   square=count_square();
   count_on_1angle_2side();
}

void LibraryTriangle::set_angle3(double b)
{
   angle3=b;
   perimeter=count_perimeter();
   square=count_square();
   count_on_1angle_2side();
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
    else {return 666;}

    return 0;
}
