#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float N[1000], sumatoria=0,Num,aritmetica,Den,n;

    cout<<"este programa calcula el sesgo"<<endl<<"ingrese el numero de datos que va a digitar"<<endl;
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        cout<<"ingrese los datos"<<endl;
        cin>>N[i];
        sumatoria=sumatoria+N[i];

    }
    aritmetica=(1/n)*sumatoria;

    cout<<aritmetica<<endl;

    Num=(1/n)*(sumatoria-aritmetica)*(sumatoria-aritmetica)*(sumatoria-aritmetica);

    cout<<Num<<endl;

    Den=pow(sqrt((1/n)*(sumatoria-aritmetica)*(sumatoria-aritmetica)), 3);

    cout<<Den<<endl;
    
    cout<<"el sesgo es: "<<Num/Den;


    
    
}