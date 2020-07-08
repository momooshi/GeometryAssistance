#ifndef QUADRA_H
#define QUADRA_H

#include <math.h>
#include "../Figure/figure.h"

class Trapezoid : public Figure
{
public:
    double side_a, side_b, side_c, side_d, angle_1, angle_2, angle_3, angle_4, height; //стороны, углы трапеции и высота

    Trapezoid();
    Trapezoid(double t_side_a, double t_side_b, double t_side_c, double t_side_d, double t_height): side_a(t_side_a), side_b(t_side_b), side_c(t_side_c), side_d(t_side_d), height(t_height)
    {
        count_perimeter();
        count_square();
        count_angle_1();
        count_angle_2();
        count_angle_3();
        count_angle_4();
    }
    Trapezoid(double t_side_a, double t_side_b, double t_side_c, double t_side_d, double t_angle_1, double t_angle_2): side_a(t_side_a), side_b(t_side_b), side_c(t_side_c), side_d(t_side_d), angle_1(t_angle_1), angle_2(t_angle_2)
    {
        count_perimeter();
        count_square();
        count_height();
        count_angle_3();
        count_angle_4();
    }
    ~Trapezoid();

    void set_side_a(double t_side_a);
    void set_side_b(double t_side_b);
    void set_side_c(double t_side_c);
    void set_side_d(double t_side_d);
    void set_angle_1(double t_angle_1);
    void set_angle_2(double t_angle_2);
    void set_height(double t_height);

    void count_height() { height = side_c*sin(angle_1); }
    void count_angle_1() { angle_1 = asin(height/side_c); }
    void count_angle_2() { angle_2 = asin(height/side_d); }
    void count_angle_3() { angle_3 = 180-angle_1; }
    void count_angle_4() { angle_4 = 180-angle_2; }
    void count_perimeter() { perimeter = side_a+side_b+side_c+side_d; }
    void count_square()
    {
        square = pow((side_a - side_b), 2) + pow(side_c, 2) - pow(side_d, 2);
        square = square / (2 * (side_a - side_b));
        square = pow(side_c, 2) - pow(square, 2);
        square = ((side_a + side_b) / 2) * sqrt(square);
    }

    double get_perimeter() { return perimeter; }
    double get_square() { return square; }
    double get_angle_1() { return angle_1; }
    double get_angle_2() { return angle_2; }
    double get_angle_3() { return angle_3; }
    double get_angle_4() { return angle_4; }
    double get_height() { return height; }
};

#endif // QUADRA_H
