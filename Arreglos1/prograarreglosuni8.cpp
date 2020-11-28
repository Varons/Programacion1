#include <iostream>

using namespace std;

int main()
{
    int arreglo[1000], num;
    
    cout << "Digite la cantidad de numero que desee" << endl;
    cin>>num;

    for(int i=0 ; i<num ; i++)
    {
        arreglo[i]=rand();
        cout << arreglo[i] << endl;

        if(arreglo[i]%2==0)
        {
            cout << arreglo[i] << " -> Es numero par"<<endl;
        }
        

    }
    
}