#include <iostream>

using namespace std;

int main()
{

    int matriz[50], *p_matriz[0], escalar;
    cout<<"este programa multiplica una matriz llena de los numeros del 1 al 50 por el escalar deseado "<<endl;
    p_matriz[0]=&matriz[50];
    
    cin>>escalar;
    
    for(int i=0 ; i<50 ; i++)
    {
        
      *p_matriz[0]=i+1;
       cout<<*p_matriz[0]*escalar<<" ";
        
    }

}