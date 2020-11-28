#include <iostream>

using namespace std;

int main()
{
    int n=5, m=4, A[n][m], B[n][m], k=0, mas=0;

    cout<<"este programa le muestra los primeros 20 numeros de la sucesion de Fibonacci"<<endl;
    
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            A[i][j]=1;
            B[i][j]=1;
            
            k=A[i][j]+B[i][j];
            A[i][j]=B[i][j];
            B[i][j]=k+B[i][j];

            cout<<k<<" ";
        }
        cout<<endl;
    }

}