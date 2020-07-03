#include <iostream>
#include "quadra.h"
using namespace std;

void trapezoid::set_a(double s_a){a=s_a;}
void trapezoid::set_b(double s_b){b=s_b;}
void trapezoid::set_c(double s_c){c=s_c;}
void trapezoid::set_d(double s_d){d=s_d;}


void trapezoid::show ()
{
    cout << "Sides - " << a << ", " << b << ", " << c << ", " << d << "/n";
    cout << "Perimeter - " << perimeter << "/n";
    cout << "Square - " << square << "/n";
}

void parallelogram::set_a(double s_a){a=s_a;}
void parallelogram::set_b(double s_b){b=s_b;}
void parallelogram::set_angle(double s_angle){angle=s_angle;}

void parallelogram::show ()
{
    cout << "Sides - " << a << ", " << b << ", " << "Angle - " << angle << "/n";
    cout << "Perimeter - " << perimeter << "/n";
    cout << "Square - " << square << "/n";
}


int main()
{
    trapezoid t;
    double a,b,c,d;
    cout << "Enter sides";
    cin >> a >> b >> c >> d;

    t.set_a(a);
    t.set_b(b);
    t.set_c(c);
    t.set_d(d);

    t.show();

    parallelogram p;
    double m,n,angle;
    cout << "Enter sides and angle";
    cin >> m >> n >> angle;

    p.set_a(a);
    p.set_b(b);
    p.set_angle(angle);

    p.show();
}
