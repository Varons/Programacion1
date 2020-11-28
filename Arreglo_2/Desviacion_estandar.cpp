#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    float N[1000], n, aritmetica, suma, r, media, again=1;

    while(again==1)
    {

    cout<<"este programa calcula la desviacion estandar"<<endl<<"si no tiene la media aritmetica oprima el 1, si la tiene el 2"<<endl;

    cin>>aritmetica;


    if(aritmetica==1)
    {
        cout<<"ingrese el numero de datos"<<endl;
        cin>>n;

        for(int i=0 ; i<n ; i++)
        {
            cout<<"Ingrese los valores"<<endl;
            cin>>N[i];
            suma=suma+N[i];
        }
        r=suma/n;
        cout<<"su media aritmetica es: "<<r<<endl;
       cout<<"su desviacion estandar es: "<<sqrt((1/(n-1))*(suma-r)*(suma-r))<<endl;
       cout<<"si desea calcular otra desviacion estandar digite el 1, sino oprima cualquier numero"<<endl;
       cin>>again;

    }
    if(aritmetica==2)
    {
        cout<<"ingrese la cantidad de datos que vas a digitar";
        cin>>n;
        cout<<"ingrese la media aritmetica"<<endl;
        cin>>media;
        for(int i=0 ; i<n ; i++)
        {
            cout<<"Ingrese los valores"<<endl;
            cin>>N[i];
            suma=suma+N[i];
        }
        cout<<"su desviacion estandar es: "<<sqrt((1/(n-1))*(suma-media)*(suma-media))<<endl;
        cout<<"si desea calcular otra desviacion estandar digite el 1, sino oprima cualquier numero"<<endl;
        cin>>again;

    }
    
    }
    


}