#include <iostream>

using namespace std;

int main ()
{
    int N[1000], n, x=0;
    cout<<"ingrese un valor n"<<endl;
    cin>>n;

    for(int i=0 ; i<n ; i++)
    {
        N[i]=2*i+1;
        
        
        
    }
    for(int i=0 ; i<n ; i++)
    {
        cout<<N[i]<<" ";
    }
    cout<<"la suma de estos numeros es: "<<n*n;
    

}