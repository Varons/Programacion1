#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    cout<<"diga cuantos numeros aleatorios quiere y este programa le dira cuales son pares"<<endl;
    cin>>n;
    int aleatorio[1000], *P_aleatorio[0];
    P_aleatorio[0]=&aleatorio[1000];
    cout<<"los numeros pares son: ";
    for(int i=0 ; i<n ; i++)
    {
        *P_aleatorio[0]=rand()%100+1;
        /*cout<<"aleatorio "<<*P_aleatorio[0];*/
        if(*P_aleatorio[0] % 2==0)
        {
            cout<<*P_aleatorio[0]<<" ";
        }
    }
}