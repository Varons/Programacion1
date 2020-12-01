#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"este programa calcula la suma de matrices, digite el tamaño de las matrices"<<endl;
    cin>>n;

    int m1[100][100], m2[100][100], m3[100][100], *P_m1[0][0], *P_m2[0][0], *P_m3[0][0] ;
    P_m1[0][0]=&m1[100][100];
    P_m2[0][0]=&m2[100][100];
    P_m3[0][0]=&m3[100][100];

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            cout<<"ingrese los valores de la primera matriz"<<endl;
            cin>>m1[i][j];
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            cout<<"ingrese los valores de la segunda matriz"<<endl;
            cin>>m2[i][j];
        }
    }
    cout<<"la primera matriz es: "<<endl;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    
    }
     cout<<"la segunda matriz es: "<<endl;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            cout<<m2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"la suma de las dos matrices es: "<<endl;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            *P_m3[0][0]=m1[i][j]+m2[i][j];
            cout<<*P_m3[0][0]<<" ";
        }
        cout<<endl;
    }

}