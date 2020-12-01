#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"ingrese el tamano de la matriz identidad que el programa le mostrara"<<endl;
    cin>>n;
    int identidad[100][100], *P_i[0][0];
    P_i[0][0]=&identidad[100][100];
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            if(i==j)
            {
                *P_i[0][0]=1;
            }
            else
            {
                *P_i[0][0]=0;
            }
            cout<<*P_i[0][0]<<" ";
        }
        cout<<endl;
    }

}
