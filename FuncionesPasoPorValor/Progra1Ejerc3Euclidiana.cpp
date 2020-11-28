#include <iostream>
#include <math.h>
using namespace std;

//Desarrolle una función que calcule la distancia euclidiana entre dos puntos.//

float distancia(float d);

int main()
{
    float d;
    d=distancia(d);

    cout << d << endl;

    return 0;
}

float distancia(float d)
{
    float xa, xb, ya, yb;

    cout << "Por favor, igrese el valor de x2" << endl;
    cin >> xa;
    cout << "Por favor, igrese el valor de x1" << endl;
    cin >> xb;
    cout << "Por favor, igrese el valor de y2" << endl;
    cin >> ya;
    cout << "Por favor, igrese el valor de y1" << endl;
    cin >> yb;

    d=sqrtf(((xb-xa)*(xb-xa))+((yb-ya)*(yb-ya)));

    return d; 
}