#include <iostream>

using namespace std;

int main()
{
    int N[100], *p_N[0];
    p_N[0]= &N[100];

    for(int i=0 ; i<100 ; i++ )
    {
        *p_N[0]=1;
        cout<<*p_N[0]<<endl;
    }
}