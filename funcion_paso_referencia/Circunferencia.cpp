#include <iostream>
#include <math.h>

using namespace std;

void circunferencia(float& area, float& radio);

int main()
{
    float a, r;
    circunferencia (a, r);
}

void circunferencia(float& area, float& radio)
{
    float circunferencia;
    cout<<"este programa calcula el área y radio de un circulo dada su circunferencia en metros."<<endl;
    cout<<"por favor digite el tamaño de la circunferencia en metros: ";
    cin>>circunferencia;
    radio=circunferencia/(2*M_PI);
    cout<<"el radio de la circunferencia ingresada es: "<<radio<<endl;
    area=2*M_PI*pow(radio, 2);
    cout<<"el area de la circunferencia ingresada es: "<<area<<endl;
}