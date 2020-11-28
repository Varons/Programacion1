#include <iostream>
#include <math.h>

using namespace std;

float area(float a);
int main()
{
    float a;
    a=area(a);
    cout<<"el area del circulo es: "<<a<<" m";


}
float area(float a)
{
    float r;
    cout<<"este programa halla el area de un circulo, por favor digite el radio en metros"<<endl;
    cin>>r;
    a=M_PI*pow(r, 2);
    return a;
}