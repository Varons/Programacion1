#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int N[10];

    srand (time(NULL));

    for(int i=0 ; i<10 ; i++)
    {
        N[i]=rand()%200;
        cout<<N[i]<<endl;
        
    }

}