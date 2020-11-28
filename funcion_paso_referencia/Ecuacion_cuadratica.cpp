#include <iostream>
#include <math.h>

using namespace std;

void cuadratica(float& a, float& b, float& c);

int main()
{
    float a, b, c;
    cout<<"este programa calcula las raices de una funcion cuadratica"<<endl;
    cout<<"ingrese el valor que acompana la x^2 ";
    cin>>a;
    cout<<endl<<"ingrese el valor que acompana a x ";
    cin>>b;
    cout<<endl<<"ingrese la constante ";
    cin>>c;
    cuadratica(a, b, c);

}

void cuadratica (float& a, float& b, float& c)
{
    float x1, x2;
    x1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    x2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
    cout<<"x_1 es: "<<x1<<endl<<"x_2 es: "<<x2;
}
