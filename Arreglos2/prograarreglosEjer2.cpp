#include <iostream> 
#include <string>


using namespace std;

// Media aritmetica //

int main ()
{
    int  cantnum;
    float sumatoria=0, x; 

    cout << "Este programa calcula la media aritmetida." << endl;
    cout << "Por favor digite la cantidad de numeros para calcular la media" << endl;
    cin >> cantnum;

    for(int i=0 ; i<cantnum ; i++)
    {
        cout << "Por favor ingrese un numero" << endl;
        cin >> x;

        sumatoria += x;

    }

    cout << sumatoria/cantnum << endl;
}