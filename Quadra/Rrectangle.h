#ifndef QUADRA_H
#define QUADRA_H

#include <iostream>
#include <math.h>
#include "../Figure/figure.h"

class Rrectangle:public Figure
{
  private:
  double width, length; //длина и ширина прямоугольника
  double a=90;          //углы прямоугольника
  double b=90;
  double c=90;
  double d=90;

  public:
    void set_width(double a)
    {
        width=a;
    }
    void set_length(double a)
    {
        length=a;
    }
    double get_width()
    {
        return width;
    }
    double get_length()
    {
        return length;
    }
    double get_square()
    {
        return square;
    }
    double count_perimeter()
    {
       return width*2+length*2;
    }
    double get_perimeter()
    {
        return perimeter;
    }
    double count_square()
    {
        return width*length;
    }
    double get_angle_a()
    {
        return a;
    }
    double get_angle_b()
    {
        return b;
    }
    double get_angle_c()
    {
        return c;
    }
    double get_angle_d()
    {
        return d;
    }
    QString get_name() { return name; }
    Rrectangle();
    ~Rrectangle();
    };

#endif // RECTANGLE_H
