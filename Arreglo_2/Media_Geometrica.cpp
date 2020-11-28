#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float N[1000], productoria=1, n;
   

    cout<<"este es un programa para saber la media geometrica de un conjunto de datos"<<endl<<"por favor digite el numero de datos"<<endl;
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        cout<<"ingrese los datos de los cuales quiere saber la media geometrica"<<endl;
        cin>>N[i];
        productoria=productoria*N[i];


    }
    cout<<"la media geometrica es: "<<pow(productoria, 1/n);

}