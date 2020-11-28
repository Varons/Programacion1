#include <iostream>
#include <math.h>
using namespace std;

float serie(float is);
float paralelo(float ip);
int main()
{
    int conexion;
    float is, ip, fems;

    cout<<"este programa halla la corriente total que pasa por 3 resistencias"<<endl;
    cout<<"por favor diga si su conexion es serie (1) o paralela (2) escriba el numero que acompaña la conexion. "<<endl;
    cin>>conexion;
    switch (conexion)
    {
    case 1:
        is=serie(is);
        
        cout<<"el valor de la corriente en su circuito es: "<<is<<endl;
        cout<<"el valor de la tension en su circuito es el mismo valor de la fuente.";
        break;
    case 2:
        ip=paralelo(ip);
        cout<<"el valor de la corriente en su circuito es: "<<ip<<endl;
        cout<<"el valor de la tension en su circuito es el mismo valor de la fuente.";
        break;

    default:
    cout<<"no es una opcion valida"<<endl;
        break;
    }

}
float serie(float is)
{
    float r1s, r2s, r3s,fems, rts;
    cout<<"por favor ingrese el valor de la fuente de voltaje"<<endl;
    cin>>fems;
    cout<<"por favor ingrese el valor de las resistencias (en ohms) en orden desde la fuente hasta el extremo opuesto"<<endl;
    cin>>r1s;
    cin>>r2s;
    cin>>r3s;
    rts=r1s+r2s+r3s;
    is=fems/rts;

    return is, fems;
}
float paralelo(float ip)
{
    float r1p,r2p,r3p,femp,rtp;
    cout<<"por favor ingrese el valor de la fuente de voltaje"<<endl;
    cin>>femp;
    cout<<"por favor ingrese el valor de las resistencias (en ohms) en orden desde la fuente hasta el extremo opuesto"<<endl;
    cin>>r1p;
    cin>>r2p;
    cin>>r3p;
    rtp=1/((1/r1p)+(1/r2p)+(1/r3p));
    ip=femp/rtp;
    return ip;

}