#include <iostream> 
#include <string>

using namespace std;

int main ()
{

    int arreglo[100];

    for (int i=0 ; i<101 ; i=i+2)
    {
        arreglo[i]=i;
    }

    for (int i=0 ; i<101 ; i=i+2)
    {
        cout << i << endl;
    }

}