#include <iostream>
#include <math.h>
using namespace std;

//Desarrolle una función que permita ingresar el valor de tres resistencias, el valor de una fuente de voltaje DC y una opción para determinar si se forma un circuito en serie, paralelo y calcule la tensión y corriente total del circuito.//

float serie(float s);
float paralelo(float p);

int main()
{
    float s, p;
    int respuesta;
    cout << "Estr programa calcula la tension y corriente total de un circuito en serie o paralelo de una fuente DC con 3 resistencias." << endl;
    cout << "Si su circuito esta conectado en serie seleccione 1. Si su circuito esta en paralelo seleccione 2." << endl;
    cin >> respuesta;

    switch (respuesta)
    {
    case 1:
        float f;
        s=serie(s);
        cout << "El valor de la corriente total es: " << s << " A y el valor del voltaje total es de su fuente de voltaje";
        break;
    
    case 2:
        p=paralelo(p);
        cout << "El valor de la corriente total es:" << p << " A y el valor del voltaje total es el de su fuente de volatje.";
        break;

    default:
        cout << "El digito ingresado no es valido." << endl;
    }
}

float serie(float s)
{
    float f, r1, r2, r3, req, Itotal;
    cout << "Ha seleccionado circuito en serie." << endl;
    cout << "Por favor ingrese el valor de la fuente de voltaje." << endl;
    cin >> f;
    cout << "Por favor ingrese el valor de las resistencias." << endl;
    cout << "Tenga en cuenta que el oden debe ser desde el polo positivo de la fuente hasta su negativo." << endl;
    cin >> r1;
    cin >> r2;
    cin >> r3;
    req=r1+r2+r3;
    Itotal=f/req;
    s=Itotal;
    return s;
}

float paralelo(float p)
{
    float f, r1, r2, r3, req, Itotal;
    cout << "Ha seleccionado circuito en paralelo." << endl;
    cout << "Por favor ingrese el valor de la fuente de voltaje." << endl;
    cin >> f;
    cout << "Por favor ingrese el valor de las resistencias" << endl;
    cout << "Tenga en cuenta que el oden debe ser desde el polo positivo de la fuente hasta su negativo" << endl;
    cin >> r1;
    cin >> r2;
    cin >> r3;
    req=1/((1/r1)+(1/r2)+(1/r3));
    Itotal=f/req;
    p=Itotal;
    return p;

}



