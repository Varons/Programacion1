#include <iostream>

using namespace std;

int main()
{
    int teclado[10], *P_teclado[0];

    P_teclado[0]=&teclado[10];

    cout<<"ingrese 10 valores y este programa se los mostrara"<<endl;

    for(int i=0 ; i<10 ; i++)
    {
        cin>>*P_teclado[0];
        cout<<"el primer numero es:"<<*P_teclado[0]<<endl;
        
    }

}