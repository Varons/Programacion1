#include <iostream> 
#include <string>
#include <time.h>

using namespace std;

//Desarrolle un programa que calcule el valor mínimo en un arreglo de tamaño nxn//

int main ()
{
    int n, menor=10000; 

    cout << "Por favor, ingrese la dimension nxn de su matriz." << endl;
    cin >> n; 
    int arreglo1[n][n];

    srand(time(NULL));

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            arreglo1[i][j]=rand() % (10-0); 
            cout << arreglo1[i][j] << " ";
        }
        cout << endl;
    }
    
    menor=arreglo1[0][0];

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(menor>=arreglo1[i][j])
            {
                menor=arreglo1[i][j];
            }
        }        
    }

    cout << "El valor menor de la matriz es: " << menor << endl; 

}