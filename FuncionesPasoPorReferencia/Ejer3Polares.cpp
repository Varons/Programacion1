#include <iostream>
#include <string>
#include <math.h>

using namespace std; 

//Desarrolle una función que convierta coordenadas rectangulares (x,y) de un punto en forma polar (r,teta).//

void RP(float& x, float& y, float& r, float& t);

int main()
{
    float x, y, r, t;

    cout << "Este programa hace una conversion de coordenadas carterianas a polares." << endl;
    cout << "Por favor, ingrese los valores de 'x'." << endl;
    cin >> x;
    cout << "Por favor ingrese los valores de 'y'" << endl;
    cin >> y; 

    RP(x, y, r, t);
}
void RP(float& x, float& y, float& r, float& t)
{

    r=sqrt((x*x)+(y*y)); 
    t=atan(x/y); 

    cout << "Sus valores " << x << " y " << y << " con coordenadas polares son: r=" << r << " y teta=" << t << "." << endl; 

}