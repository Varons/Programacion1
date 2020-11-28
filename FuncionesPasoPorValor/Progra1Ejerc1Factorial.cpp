#include <iostream>
using namespace std;

//Desarrolle una función que calcule el factorial de un número.//

int factorial(int n);

int main()
{
    int n, k;

    k=factorial(n);

    cout << k;

    return 0;
}

int factorial(int n)
{
    int k=1;
    cout << "Por favor, ingrese un numero para calcular su factorial." << endl;
    cin >>n;
    for(int i=1 ; i<=n ; i++)
    {
        k=k*i;
    }
    return k;
}
