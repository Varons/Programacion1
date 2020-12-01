#include <iostream>
#include <string>
#include <math.h>
#define M_PI 3.14159265358979323846 
using namespace std; 

void RA(float& c, float& r, float& a);

int main ()
{
    float c, r, a;

    cout << "Por favor, para calcular el radio";
    cout << " de su circulo y el area, ingrese el valor de la circunferencia." << endl; 
    cin >> c; 

    RA(c, r, a);
}
void RA(float& c, float& r, float& a)
{
    r=((c)/(2*M_PI)); 
    a=(M_PI*r);
    cout << "El valor de su radio es: " << r << " y el valor de su area es: " << a << "." << endl;
}