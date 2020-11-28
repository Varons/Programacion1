#include <iostream>
#include <math.h>

using namespace std;

void dinero(float& dolares, float& euros);

int main()
{
    float d, e;
    dinero(d, e);
}

void dinero(float& dolares, float& euros)
{
    float pesos;
    cout<<"este programa transforma de pesos a dolares y euros la cantidad que digite."<<endl;
    cout<<"ingrese el valor de pesos que quiere transformar: ";
    cin>>pesos;
    dolares=pesos*0.00027;
    euros=pesos*0.00023;
    cout<<"en dolares: "<<dolares<<endl;
    cout<<"en euros: "<<euros<<endl;
}