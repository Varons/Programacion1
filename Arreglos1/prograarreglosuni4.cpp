#include <iostream> 
#include <string>

using namespace std;

int main ()
{
    float arreglo[24];
    int variable;

    cout << "El programa almacena la temperatura durandte las ultimas 24 horas." << endl;
    cout << "Adicional, usted puede seleccionar una hora y saber cual es la temperatura en aquella." << endl;
    cout << "Por favor, ingrese la hora que desee en horario militar." << endl; 

    for (int i=0 ; i<24 ; i++)
    {
        arreglo[i]=17+i*0.1; //se puso 17 porque es la temperatura promedio de Colombia a las 0 horas y el 0.1 solo es para que haga la variacion durante el dia//
    }

    cin >> variable; 
    if (variable>=0 && variable<24)
    {
        cout << "La temperatura de su hora seleccionada es: " << arreglo[variable] << " grados celcius." << endl;
    }
    else 
        {
           cout << "Su variable no es valida, por favor seleccione otra." << endl; 
        }


}    
    
