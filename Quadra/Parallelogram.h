#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H
#include "../Figure/figure.h"
#include <math.h>
class Parallelogram : public Figure
{
private:
double side_a, side_b, angle_1, angle_2;
float height; //стороны параллелограмма, углы между ними и высота проведенная к стороне b
public:
void count_perimeter() { perimeter = 2*(side_a+side_b); }
void count_square() { square = sin(angle_1 * M_PI / 180); }
void count_height() { height = (float)(side_a*sin(angle_1)); }
void count_angle_1() { angle_1 = (asin(height/side_a)*180)/M_PI; }
void count_angle_2() { angle_2 = (360 - 2*angle_1) / 2; }

void set_side_a(double t_side_a);
void set_side_b(double t_side_b);
void set_angle_1(double t_angle_1);
void set_height(double t_height);

double get_perimeter(){return perimeter;}
double get_square(){return square;}
double get_side_a() { return side_a; }
double get_side_b() { return side_b; }
double get_angle_1() { return angle_1; }
double get_angle_2() { return angle_2; }
double get_height() { return height; }
QString get_name() { return name; }

Parallelogram();
Parallelogram(double t_side_a, double t_side_b, float t_height);
Parallelogram(double t_side_a, double t_side_b, double t_angle_1);

~Parallelogram() {}
};

#endif //PARALLELOGRAM_H