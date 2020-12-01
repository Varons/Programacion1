#include <iostream>
#include <string>

using namespace std; 

void DE(float& p, float& d, float& e);

int main ()
{
    float p, d, e;

    cout << "Por favor, para hacer la conversion a dolares y euros ingrese su valor en pesos." << endl;
    cin >> p;

    DE(p, d, e);
}
void DE(float& p, float& d, float& e)
{
    d=(p*0.00028);
    e=(p*0.00023);

    cout << "Su valor en dolares es: " << d << " y en euros es: " << e << "."<< endl;
}