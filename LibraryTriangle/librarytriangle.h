#ifndef LIBRARYTRIANGLE_H
#define LIBRARYTRIANGLE_H
#include  "../Figure/figure.h "
#include  <math.h>
#include <iostream>
using namespace std;
class LibraryTriangle : public Figure
{
private:
    double side1;
    double side2;
    double side3;
    double angle1;
    double angle2;
    double angle3;

public:

    LibraryTriangle();

    LibraryTriangle(double side1, double side2, double side3, double angle1, double angle2, double angle3);

    void setside1(double side1);

    double Getside1();

    void setside2(double side2);

    double Getside2();

    void setside3(double side3);

    double Getside3();

    void setangle1(double angle1);

    double Getangle1();

    void setangle2(double angle2);

    double Getangle2();

    void setangle3(double angle3);

    double Getangle3();

   LibraryTriangle(const LibraryTriangle& obj);

    double count_square();

    double count_perimeter();


    ~LibraryTriangle();

    void Print()
    {
        cout<<"\nSide of the triangle: " << side1 << side2 << side3 << "\nTriangle angles: " << angle1 << angle2 << angle3 << "\nTriangle perimeter: "<<perimeter<<"\nArea of a triangle: "<< square <<endl;
    }
};

#endif // LIBRARYTRIANGLE_H
