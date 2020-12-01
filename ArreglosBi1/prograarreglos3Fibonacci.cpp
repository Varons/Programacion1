#include <iostream>
#include <string>

using namespace std;

//Desarrolle un programa que guarde en un arreglo bidimensional los primeros 20 números de la sucesión de Fibonacci.//

int main()
{
    int arreglo[5][4], a=1,b=0,c=1, i=0, n, l=0;

    cout << "Este programa muestra en un arreglo bidimensional los primeros veinte numeros de la sucesion de Fibonacci" << endl;

    for(int i=0 ; i<4 ; i++)
    {
        for(int j=0 ; j<5 ; j++)
        {
            if(i==0 && j==0)
            {
                arreglo[i][j]=0;
            }

            arreglo[i][j+1]=a;
            a=b+c;
            b=c;
            c=a;
        }

    }

    for(int i=0 ; i<4 ; i++)
    {
        for(int j=0 ; j<5 ; j++)
        {
            cout << arreglo[i][j] << " ";
        }
        cout << endl; 
    }
}