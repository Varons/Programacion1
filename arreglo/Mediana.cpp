#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float N[1000], sumatoria=0;
    int n;
    cout<<"este programa calcula mediana"<<endl<<"inserte cuantos datos digitara"<<endl;

    cin>>n;

    for(int i=1 ; i<=n ; i++)
    {
        cout<<"ingrese los valores de menor a mayor"<<endl;
        cin>>N[i];
    }
    
    if(n%2==0)
    {
        cout<<"la mediana es: "<<(N[n/2]+N[(n/2)+1])/2;
    }
    if(n%2!=0)
    {
        cout<<"la mediana es: "<<N[(n+1)/2];
    }
    
}