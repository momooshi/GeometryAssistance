#ifndef LIBRARYTRIANGLE_H
#define LIBRARYTRIANGLE_H
#include  "../Figure/figure.h "
#include  <math.h>
#include <iostream>

class LibraryTriangle : public Figure
{
  private:
    double side1, side2, side3;
    double angle1, angle2, angle3;

  public:

    LibraryTriangle();

    LibraryTriangle(double side1, double side2, double side3, double angle1, double angle2, double angle3);

    void set_side(double s_side1, double s_side2, double s_side3);
    void set_angle (double a_angle1, double a_angle2, double a_angle3);

    double get_side1();
    double get_side2();
    double get_side3();
    double get_angle1();
    double get_angle2();
    double get_angle3();

    double count_perimeter();
    double count_square();

    double  get_perimeter(){return perimeter;}
    double  get_square(){return square;}
    void show_figure ();

    ~LibraryTriangle();

    void show();
};

#endif // LIBRARYTRIANGLE_H