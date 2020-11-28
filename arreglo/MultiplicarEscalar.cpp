#include <iostream>

using namespace std;

int main()
{
    int V[51];
    cout<<"el vector esta dado con las variables impares y se multiplican por 4"<<endl;


    for(int i=0 ; i<50 ; i++)
    {
        V[i]=2*i+1;
        V[i]= V[i]*4;
        cout<<V[i]<<endl;
    }



}