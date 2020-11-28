#include <iostream>
#include <math.h>

using namespace std;

float Fibonacci(float m);
int main()
{
    float m;
    m=Fibonacci(m);
    cout<<"el promedio de los n numeros de las serie de Fibonacci es: "<<m;

}
float Fibonacci(float m=0)
{
   
    float n, sumatoria,serie=1.0,x=0.0,suma=1.1;
    cout<<"este programa encontrara el promedio de los n primeros numeros de la susecion de Fibonacci"<<endl;
    cin>>n;
    for(int i=1; i<=(n-2) ;i++)
    {
       
        suma=x+serie;
        sumatoria=suma++;
        x=serie;
        serie=suma;
        
    }
    sumatoria=sumatoria+1;
    m=sumatoria/n;

    return m;


}