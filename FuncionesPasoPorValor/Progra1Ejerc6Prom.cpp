#include <iostream>
#include <math.h>
using namespace std;

//Desarrolle una función que calcule el promedio de los primeros n números de la sucesión de Fibonacci.//

float prom(float p);

int main()
{
    float p;
    p=prom(p);
    cout << "El promedio es: " << p << "." << endl;
    return 0;
}

float prom(float p)
{
    float k=1,s=0,c=1, i=0, N, l=0;
    cout<<"Bienvenido, si desea saber el promedio de los numeros de fibonacci hasta N. Entonces digite un numero N."<<endl;
    cin>>N;
    while(i<=N-3)
    {
        k=s+c;
        s=c;
        c=k;
        i++;
        l=k+l;
    }
    p=(l+1)/N;
    return p;
}