#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    cout<<"este programa halla el valor minimo de una matriz nxn, por favor ingrese el valor de n"<<endl;
    cin>>n;
    int M[100][100], *P_m[0][0], minimo=1000;
    P_m[0][0]=&M[100][100];
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            *P_m[0][0]=rand() % 500+1;
            cout<<*P_m[0][0]<<" ";
             if(*P_m[0][0]<minimo)
                {
                     minimo=*P_m[0][0];
                }
        }
       
        
    }
    cout<<"el minimo es: "<<minimo;
    
}