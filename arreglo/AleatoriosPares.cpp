#include <iostream>

using namespace std;

int main()
{
    int N[1000], n;
    
    cout<<"diga cuantos numeros quiere que aparezcan"<<endl;
    cin>>n;

    for(int i=0 ; i<n ; i++)
    {
        N[i]=rand();
        cout<<N[i]<<endl;

        if(N[i]%2==0)
        {
            cout<<N[i]<<" ES UN NUMERO PAR"<<endl;
        }
        

    }
    
}