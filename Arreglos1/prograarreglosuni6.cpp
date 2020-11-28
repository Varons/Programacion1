#include <iostream> 
#include <string>

using namespace std;

int main ()
{
    int arreglo[100], num, nummayor=0; 

    cout << "Por favor ingrese el numero de elementos que desee." << endl; 
    cin >> num; 

    for (int i=0 ; i<num ; i++)
    {
        cout << i+1 << ". Por favor, digite un numero." << endl; //Se utiliza el i+1 para un mayor orden. Para no perder la cuenta de numeros
        cin >> arreglo[i];
        
        if (arreglo[i] > nummayor)
        {
            nummayor = arreglo[i]; //Esta condicion ira cambiando a medida que cambie nummayor, asi consecutivamente comprobando si el numero es mayor con el anterior. Si el siguiente no es mayor entonces no cumple y va determinando que el anterior es mayor
        }
    }

    cout << "El numero mayor de sus " << num << " numeros es: " << nummayor << "." << endl;
}