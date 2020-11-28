#include <iostream>
using namespace std;

//Desarrolle una función que calcule la corriente de una resistencia dada su tensión y resistencia.//

float corriente(float I);

int main()
{
    float I;

    I = corriente(I);

    cout << "EL valaor de la corriente es: "<< I << " A" << endl;

    return 0;
}

float corriente(float I)
{
    float V, R;

    cout << "Por favor, ingrese el valor del voltaje y resistencia para poder calcular la corriente" << endl; 
    cin >> V;
    cin >> R;

    I=V/R;

    return I;
}