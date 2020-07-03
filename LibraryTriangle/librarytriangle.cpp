#include "librarytriangle.h"
#include  <math.h>
#include <iostream>
using namespace std;
double LibraryTriangle::count_square()
{
    double halfperimeter;
    halfperimeter = (side1+side2+side3)/2;
    square=sqrt(halfperimeter*(halfperimeter-side1)*(halfperimeter-side2)*(halfperimeter-side3));
    return square;
}

double LibraryTriangle::count_perimeter()
{
    perimeter=side1+side2+side3;
    return perimeter;
}
