#include <iostream>

using namespace std;

int main()
{
    int n=3, A[n][n], valores, min=10000;
   /*cout<<"este programa calcula cual es el numero menor de una matriz"<<endl;
    cin>>n;*/
    

    for(int i=0 ; i<n ; i++)
    {
    
        for(int j=0 ; j<n ; j++)
        {
            cout<<"ingrese la "<<i+1<<" fila de numeros"<<endl;
            cin>>A[i][j];
        }cout<<endl;
    }
    
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
           cout<<A[i][j]<<" ";
        }cout<<endl;
    }

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
           if(A[i][j]<min)
           {
               min=A[i][j];
               cout<<"el numero menor de la matriz es: "<<min;
           }
        }cout<<endl;
    }
    
}