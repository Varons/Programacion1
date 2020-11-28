#include <iostream>
#include <math.h>

using namespace std;

void Valores (int& a, int& b, int& c);

int main()
{
    int a,b,c;
    Valores(a, b, c);

}

void Valores (int& a, int& b, int& c)
{
    cout<<"este programa te pide 3 numeros para determinar el maximo y el minimo de estos: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b & a>c)
    {
        cout<<"el numero maximo es: "<<a<<endl;
    }
    if(b>a & b>c)
    {
       cout<<"el numero maximo es: "<<b<<endl;
    }
    if(c>a & c>b)
    {
        cout<<"el numero maximo es: "<<c<<endl;
    }
    if(a<b & a<c)
    {
        cout<<"el numero minimo es: "<<a<<endl;
    }
    if(b<a & b<c)
    {
       cout<<"el numero minimo es: "<<b<<endl;
    }
    if(c<a & c<b)
    {
        cout<<"el numero minimo es: "<<c<<endl;
    }
}