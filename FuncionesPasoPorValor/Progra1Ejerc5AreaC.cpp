#include <iostream>
#include <math.h>
using namespace std;

//Desarrolle una función que calcule el área de un circulo.//

float area(float a);

int main()
{
    float a;
    a=area(a);
    cout << "El valor del area de su circulo es: " << a << "cm." << endl;
    return 0;
}

float area(float a)
{
    float r; 
    cout << "Este programa calcula el area de un circulo" << endl;
    cout << "Por favor ingrese el valor de su radio en cm." << endl; 
    cin >> r; 
    a=M_PI*(pow(r,2)); 
    return a;
}

