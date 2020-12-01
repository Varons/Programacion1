#include <iostream>
#include <string>

using namespace std;

//Desarrolle un programa que genere una matriz identidad de tamaño nxn//

int main()
{
    int n;

    cout << "Por favor, ingrese la dimension nxn de la matriz." << endl;
    cin >> n;
    
    int arreglo[n][n];

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(j==i)
            {
                arreglo[i][j]=1;
            }
            else 
            {
                arreglo[i][j]=0;
            }
            cout << arreglo[i][j] << " "; 
        }
        cout <<endl; 
    }

}
