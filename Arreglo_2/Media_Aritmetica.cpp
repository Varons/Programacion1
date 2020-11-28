#include <iostream>


using namespace std;

int main()
{

    float N[1000], n, suma=0;
   
    
    cout<<"este programa halla la media aritmetica de n numeros"<<endl<<"diga cuantos numeros va a digitar"<<endl;
    cin>>n;

    for(int i=0 ; i<n ; i++)
    {
        cout<<"digite los valores"<<endl;
        cin>>N[i];
        suma=suma+N[i];
                
    }
    cout<<suma/n;
    
   

}