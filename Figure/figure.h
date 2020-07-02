#ifndef FIGURE_H
#define FIGURE_H

class Figure
{
protected:
    double *side, *angle;
    double perimeter, square;
public:
    //Figure();
    Figure (double *s_side = 0, double *s_angle = 0, double s_perimeter = 0, double s_square = 0 ):
        side (s_side), angle (s_angle), perimeter (s_perimeter), square (s_square) {}


    virtual void set_sides(double &sides) = 0;
    virtual void set_angles (double &angles) = 0;
    virtual void set_perimeter (double perimeter) = 0;
    virtual void set_square (double square) = 0;

    virtual double & get_sides() = 0;
    virtual double & get_angles() = 0;
    virtual double  get_perimeter() = 0;
    virtual double  get_square() = 0;

    virtual void count_perimeter(double &sides) = 0;
    virtual void count_square () = 0;

    ~Figure()
    {
        delete [] side;
        delete [] angle;
    }
};

#endif // FIGURE_H
