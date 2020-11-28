#include <iostream>
#include <math.h>

using namespace std;

int factorial(int a);

int main()
{
    int a, c;
   cout<<"digite el numero del cual necesita saber su factorial"<<endl;

    c= factorial(a);
    cout<<c;
    
    return 0;
}

int factorial(int a)
{
    int c=1;
    cin>>a;
    for(int i=1; i<=a; i++)
    {
        c=c*i;

    }
    return c;
}