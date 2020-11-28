#include <iostream>

using namespace std;

int main()
{
    int n=0;
    int A[n][n];

    cout<<"diga de que dimension quiere la matriz identidad"<<endl;
    cin>>n;

    for(int i=0 ; i<n ; i++)
    {
        
        for(int j=0 ; j<n ; j++)
        {
            A[i][j]=0;
            A[i][i]=1;
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}