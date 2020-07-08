#ifndef LIBRARYTRIANGLE_H
#define LIBRARYTRIANGLE_H
#include  "../Figure/figure.h "
#include  <cmath>
#include <iostream>

class Triangle : public Figure
{
  private:
    double side1, side2, side3;
    double angle1, angle2, angle3;

  public:
    double count_perimeter();
    double count_square();

    LibraryTriangle (double t_side1, double t_side2, double t_side3): side1(t_side1), side2(t_side2), side3(t_side3)
    {
        perimeter=count_perimeter();
        square=count_square();
    }

    LibraryTriangle (double t_side1, double t_side2, double t_side3, double t_angle1, double t_angle2, double t_angle3): side1(t_side1), side2(t_side2), side3(t_side3), angle1(t_angle1), angle2(t_angle2), angle3(t_angle3)
    {
        perimeter=count_perimeter();
        square=count_square();
    }

    void set_side1(double a);
    void set_side2(double a);
    void set_side3(double a);
    void set_angle1(double b);
    void set_angle2(double b);
    void set_angle3(double b);

    double get_side1(){return side1;}
    double get_side2(){return side2;}
    double get_side3(){return side3;}
    double get_angle1(){return angle1;}
    double get_angle2(){return angle2;}
    double get_angle3(){return angle3;}

    double count_perimeter();
    double count_square();
    double count_side1_sidesangle();
    double count_third_angle();
    void count_angles_cos();
    void count_on_2angle_1side();
    double count_on_1angle_2side();
    double count_3angle_on_3side();


    double  get_perimeter(){return perimeter;}
    double  get_square(){return square;}
    void show_figure ();

    QString get_name() {return name;}
    ~LibraryTriangle();
};

#endif // LIBRARYTRIANGLE_H
