#include <iostream>

using namespace std;

int main()
{
    int pares[101], *p_pares[0];
    p_pares[0]= &pares[101];

    for(int i=0 ; i<=100 ;i=i+2)
    {
        *p_pares[0]=i;
        cout<<*p_pares[0]<<endl;
    }

    
}