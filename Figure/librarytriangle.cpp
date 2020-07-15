#include "librarytriangle.h"

void Triangle::count_square()
{
    double hp = ((side1+side2+side3)/2);
    square = sqrt(abs(hp*(hp-side1)*(hp-side2)*(hp-side3)));
}

Triangle::Triangle()
{
    name = "Треугольник";
    side1=0;
    side2=0;
    side3=0;
    angle1=0;
    angle2=0;
    angle3=0;
}

Triangle::Triangle (double t_side1, double t_side2, double t_side3): side1(t_side1), side2(t_side2), side3(t_side3)
{
    name="Треугольник";
    count_angles();
    count_square();
    count_perimeter();
}

Triangle::Triangle(double t_side1, double t_side2, int t_angle1) : side1(t_side1), side2(t_side2), angle1(t_angle1)
{
    count_on_1angle_2side();
    count_perimeter();
    count_square();
}

void Triangle::count_side1_sidesangle()
{
    side1=sqrt(side2*side2+side3*side3-2*side2*side3*cos(angle2));
}

void Triangle::count_angles()
{   angle1 = acos((side1*side1+side2*side2-side3*side3)/(2*side1*side2))*180.0/M_PI;
    angle2 = acos((side2*side2+side3*side3-side1*side1)/(2*side2*side3))*180.0/M_PI;
    angle3 = acos((side1*side1+side3*side3-side2*side2)/(2*side1*side3))*180.0/M_PI;
}
void Triangle::count_on_2angle_1side()
{
    angle3=180-(angle1+angle2);
    side2=side1*(sin(angle2*M_PI/180.0)/sin(angle1*M_PI/180.0));
    side3=side1*(sin(angle3*M_PI/180.0)/sin(angle1*M_PI/180.0));
}

void Triangle::count_on_1angle_2side()
{
    side3=sqrt(side1*side1+side2*side2-2*side1*side2*cos(angle1*M_PI/180));
    angle2 = acos((side2*side2+side3*side3-side1*side1)/(2*side2*side3))*180.0/M_PI;
    angle3 = acos((side1*side1+side3*side3-side2*side2)/(2*side1*side3))*180.0/M_PI;

}

void Triangle::set_side1(double a) { side1=a; }
void Triangle::set_side2(double a) { side2=a; }
void Triangle::set_side3(double a) { side3=a; }
void Triangle::set_angle1(double b) { angle1=b; }
void Triangle::set_angle2(double b) { angle2=b; }
void Triangle::set_angle3(double b) { angle3=b; }


