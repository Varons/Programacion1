#include <iostream> 
#include <string>

using namespace std;

int main ()
{
    int arreglo[50];
    int k=5;

    for (int i=0 ; i<50 ; i++)
    {
        arreglo[i]=i*k;
    }

    for (int i=0 ; i<50 ; i++)
    {
        cout << arreglo[i] << endl;
    }
}