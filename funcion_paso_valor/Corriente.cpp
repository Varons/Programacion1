#include <iostream>
#include <math.h>

using namespace std;

float corriente(float I);

int main()
{
    float resistencia, tension, resultado, I;
    cout<<"ingrese la tension y la resistencia para saber la corriente que pasa por esa resistencia."<<endl;
    
    resultado = corriente(I);
    cout<<"la corriente que pasa por la resistencia es: "<<resultado<<endl;

}
float corriente(float I)
{
    float resistencia, tension, resultado;
    cin>>tension;
    cin>>resistencia;
    resultado=tension/resistencia;
    
    return resultado;
}
