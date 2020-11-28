#include <iostream>
#include <math.h>

using namespace std;

void polares(float& r, float& teta);

int main()
{
    float r, teta;
    polares ( r,teta);
}

void polares(float& r, float& teta)
{
    float x, y;
    cout<<"este programa pasa de coordenadas rectangulares a polares."<<endl;
    cout<<"por favor ingrese el valor de x: ";
    cin>>x;
    cout<<endl<<"por favor ingrese el valor de y: ";
    cin>>y;
    r=sqrtf(pow(x, 2)+pow(y,2));
    teta = atanf((y/x)*(2*M_PI)/360);
    cout<<"la coordenada r es: "<<r<<endl;
    cout<<"la coordenada θ es: "<<teta<<endl;

}