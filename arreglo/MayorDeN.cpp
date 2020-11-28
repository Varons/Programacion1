#include <iostream>

using namespace std;

int main()
{
    int N[1000], n, x, Max=0 ;
    cout<<"digite la cantidad de numeros"<<endl;
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        cin>>N[i];
        
        cout<<"el numero que ingreso es: "<<N[i]<<endl;
       
       if(N[i]>Max)
       {
           Max=N[i];
            
       }
    }
    cout<<Max;
    
    
}