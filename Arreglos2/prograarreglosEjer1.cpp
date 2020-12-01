#include <iostream> 
#include <string>
#include <time.h>

using namespace std;

//Desarrolle un programa que llene un arreglo de una dimensión con números aleatorios//

int main ()
{
    int arreglo[10];

    srand (time(NULL));

    for(int i=0 ; i<10 ; i++)
    {
        arreglo[i]=rand(); 
        cout << arreglo[i] << endl;
    }
}