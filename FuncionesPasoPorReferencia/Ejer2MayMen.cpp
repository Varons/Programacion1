#include <iostream>
#include <string>

using namespace std;

//Desarrolle una función que tenga tres valores de entrada y de salida el número mayor y el menor.//

void num(float& num1, float& num2, float& num3);

int main ()
{
    float num1, num2, num3; 

    cout << "Este programa lee tres numeros ingresados por usted y define cual es el mayor y menor." << endl;
    cout << "Por favor, ingrese el primer numero." <<endl;
    cin >> num1;
    cout << "Por favor, ingrese el segundo numero." <<endl;
    cin >> num2;
    cout << "Por favor, ingrese el tercer numero." <<endl;
    cin >> num3;
}
void num(float& num1, float& num2, float& num3)
{
    int arreglo[3];
    if(num1>num2 && num1>num3)
    {
        cout << "El numero mayor es: " << num1 << endl;
    }
    if(num2>num1 && num1>num3)
    {
        cout << "El numero mayor es: " << num2 << endl;
    }
    if(num3>num2 && num3>num1)
    {
        cout << "El numero mayor es: " << num2 << endl;
    }
}
