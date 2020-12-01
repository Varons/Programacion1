#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"este programa calcula cual es el mayor de N numeros ingresados por teclado"<<endl;
    cout<<"por favor ingrese cuantos numeros va a ingresar"<<endl;
    cin>>n;
    int Numero[10], *P_Numero[0], mayor=0;

    P_Numero[0]=&Numero[10];

    for(int i=0 ; i<10 ; i++)
    {
        cout<<"ingrese el "<<i<<" numero"<<endl;
        cin>>*P_Numero[0];
        if(mayor<*P_Numero[0])
        {
            mayor=*P_Numero[0];
        }
    }
        
    cout<<"el numero mayor es "<<mayor;

}