#include <iostream> 
#include <string>

using namespace std;

int main ()
{
    //tipo de dato  - nombre arreglo (tamaño) = valores de arreglo 

    int arreglo1[10];

    arreglo1[0]=1;
    arreglo1[1]=5;
    arreglo1[2]=10;
    arreglo1[3]=15;
    arreglo1[4]=20;
    arreglo1[5]=25;
    arreglo1[6]=30;
    arreglo1[7]=35;
    arreglo1[8]=40;
    arreglo1[9]=45;

    int a, result;
    cout << "ingrese un numero" << endl; 
    cin >> a;
    result = 2*a;
    cout << "Su numero multiplicado por dos es: " << result << endl;



}