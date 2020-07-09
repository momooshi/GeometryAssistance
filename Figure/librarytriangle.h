#ifndef LIBRARYTRIANGLE_H
#define LIBRARYTRIANGLE_H
#include  "../Figure/figure.h "
#include  <math.h>

class Triangle : public Figure
{
  private:
    double side1, side2, side3;
    double angle1, angle2, angle3;

  public:
    void count_perimeter();
    void count_square();


    Triangle(double s_side1 = 0, double s_side2 = 0, double s_side3 = 0, double s_angle1 = 0, double s_angle2 = 0, double s_angle3 = 0):
        side1(s_side1), side2(s_side2), side3(s_side3), angle1(s_angle1), angle2(s_angle2), angle3(s_angle3)
    {
        count_perimeter();
        count_square();
    }

    void set_side(double s_side1, double s_side2, double s_side3);
    void set_angle (double a_angle1, double a_angle2, double a_angle3);

    double get_side1();
    double get_side2();
    double get_side3();
    double get_angle1();
    double get_angle2();
    double get_angle3();

    void set_side1(double s_side1) { side1 = s_side1; }
    void set_side2(double s_side2) { side2 = s_side2; }
    void set_side3(double s_side3) { side3 = s_side3; }
    void set_angle1(double s_angle1) { angle1 = s_angle1; }
    void set_angle2(double s_angle2) { angle2 = s_angle2; }
    void set_angle3(double s_angle3) { angle3 = s_angle3; }

    double  get_perimeter(){ return perimeter; }
    double  get_square(){ return square; }

    ~Triangle();
};

#endif // LIBRARYTRIANGLE_H
