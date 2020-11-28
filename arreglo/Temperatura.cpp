#include <iostream>

using namespace std;

int main()
{
float T[24];
int n,k=1;



while(k==1)
{
    cout<<"si desea saber a cuantos grados estamos el dia de hoy, ingrese la hora en horario militar"<<endl;
for(int i=0 ; i<24 ; i++)
{
    T[i]=29+i*0.2;
}
cin>>n;
if(n>=0 & n<24)
{
cout<<T[n]<<endl<<"si desea saber la temperatura de otra hora del dia oprima el 1, sino oprima cualquier numero"<<endl;
cin>>k;
}
else
{
cout<<"no es una hora valida"<<endl;
}
}

}