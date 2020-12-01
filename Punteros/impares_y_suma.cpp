#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"ingrese el valor de impares que desea ver y sumar"<<endl;
    cin>>n;
    int impares[1000], *P_impares[0], suma=0;
    P_impares[0]=&impares[1000];

    for(int i=0 ; i<n ; i++)
    {
        *P_impares[0]=(2*i)+1;
        cout<<*P_impares[0]<<" ";
        suma=*P_impares[0]+suma;
        
    }
    cout<<"la suma de estos numeros es: "<<suma;
   




}