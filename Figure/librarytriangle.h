#ifndef LIBRARYTRIANGLE_H
#define LIBRARYTRIANGLE_H
#include  "../Figure/figure.h "
#include  <cmath>

class Triangle : public Figure
{
  private:

    double side1, side2, side3;
    int angle1, angle2, angle3;

  public:

    void count_perimeter() { perimeter = side1 + side2 + side3;}
    void count_square();
    void count_side1_sidesangle();
    void count_angles();

    void count_on_2angle_1side();
    void count_on_1angle_2side();
    int count_3angle_on_3side();
    Triangle();
    Triangle (double t_side1, double t_side2, double t_side3);
    Triangle(double t_size1, double t_size2, int t_angle1);
    void set_side1(double a);
    void set_side2(double a);
    void set_side3(double a);
    void set_angle1(double b);
    void set_angle2(double b);
    void set_angle3(double b);

    double get_side1() { return side1; }
    double get_side2() { return side2; }
    double get_side3() { return side3; }
    int get_angle1() { return angle1; }
    int get_angle2() { return angle2; }
    int get_angle3() { return angle3; }

    double  get_perimeter(){ return perimeter; }
    double  get_square(){ return square; }
     QString get_name() { return name; }
    ~Triangle() {}
};
#endif // LIBRARYTRIANGLE_H
