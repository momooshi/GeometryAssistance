#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include <math.h>
#include "../Figure/figure.h"

class Trapezoid : public Figure
{
double side_a, side_b, side_c, side_d, angle_1, angle_2, angle_3, angle_4, height; //стороны, углы трапеции и высота

public:

void count_square();
void count_side() {side_a = sqrt(pow(height,2)+pow((side_d-side_b),2)/4); side_c = side_a;}
void count_height() { height = (2*square)/(side_b+side_d);}
void count_perimeter() { perimeter = side_a+side_b+side_c+side_d; }
void count_angles();
Trapezoid();
Trapezoid(double t_side_a, double t_side_b, double t_side_c, double t_side_d);

~Trapezoid() {}

void set_side_a(double t_side_a);
void set_side_b(double t_side_b);
void set_side_c(double t_side_c);
void set_side_d(double t_side_d);
void set_angle_1(double t_angle_1);
void set_angle_2(double t_angle_2);
void set_height(double t_height);

double get_side_a() { return side_a; }
double get_side_b() {return side_b; }
double get_side_c() { return side_c; }
double get_side_d() { return side_d; }
double get_perimeter() { return perimeter; }
double get_square() { return square; }
double get_angle_1() { return angle_1; }
double get_angle_2() { return angle_2; }
double get_angle_3() { return angle_3; }
double get_angle_4() { return angle_4; }
double get_height() { return height; }
QString get_name() { return name; }
};

#endif // TRAPEZOID_H