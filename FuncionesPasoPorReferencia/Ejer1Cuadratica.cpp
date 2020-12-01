#include <iostream>
#include <string>
#include <math.h>

using namespace std;

//Desarrollar un programa que calcule las raíces de una ecuación cuadrática de la forma a*x^2 +b*x + c = 0.//

void FP(float& a, float& b, float& c); 

int main()
{
    float a, b, c; 

    cout << "Por favor, para calcular las raices de su ecuacion cuadradica ingrese los valores a, b y c en el orden que se han nombrado" << endl;
    cout << "Por favor, ingrese el valor de a" << endl;
    cin >> a;
    cout << "Por favor, ingrese el valor de b" << endl;
    cin >> b;
    cout << "Por favor, ingrese el valor de c" << endl;
    cin >> c;
    FP(a, b, c);
}
void FP(float& a, float& b, float& c)
{
    float resultado1, resultado2; 
    
    resultado1=(((-b)+(sqrt((b*b)-(4*a*c))))/(2*a));
    resultado2=(((-b)-(sqrt((b*b)-(4*a*c))))/(2*a));

    cout << "Las raices de su funcion cuadratica es:" << resultado1 << " y " << resultado2 <<endl;
}