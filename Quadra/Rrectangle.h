#ifndef QUADRA_H
#define QUADRA_H

#include <iostream>
#include <math.h>
#include "../Figure/figure.h"

class Rrectangle:public Figure
{
  private:
  double width, length; //длина и ширина прямоугольника
  const int angle = 90;

  public:
    void count_perimeter() { perimeter = width*2+length*2; }
    void count_square() { square = width*length; }
    
    void set_width(double t_width) { width = t_width; }
    void set_length(double t_length) { length = t_length; }
    
    double get_width() { return width; }
    double get_length() { return length; }
    double get_square() { return square; }  
    double get_perimeter() { return perimeter; }  
    int get_angle() { return angle; }

    QString get_name() { return name; }
    Rrectangle(): width (0), length (0)
    {}
    Rrectangle (double t_width, double t_length): width (t_width), length (t_length)
    {
     count_perimeter();
     count_square ();
    }    
    ~Rrectangle();
    };

#endif // RECTANGLE_H
