#include <iostream>

using namespace std;

int main()
{
    int N[100], n, ig;

    cout<<"si desea saber la suma de n numeros impares ingrese ese numero n"<<endl;
    cin>>n;


    for(int i=1 ; i<=n ; i++)
    {
        if(i % 2!=0)
        {
            N[n]+=i;
            ig=N[n];
            
        }
        
    }
    cout<<"la suma de los numeros impares hasta n es: "<<ig;
    
}