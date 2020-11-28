#include <iostream> 
#include <string>

using namespace std;

//Llenar un arreglo con los números impares del 0 a N y mostrar a cuanto equivale la suma de todos los valores.//

int main ()
{
    int num, arreglo[]={num}, result;

    cout << "El programa calcula una suma de numeros impares desde el 0 hasta un numero ingresado por usted." << endl;
    cout << "Por favor, ingrese hasta que numero quiere que se realice la suma" << endl; 
    cin >> num; 

    for (int i=0 ; i<=num ; i++)
    {
        if(i % 2 > 0)
        {
           arreglo[num]+=i;//es lo mismo que decir: arreglo=arreglo+i
           result=arreglo[num];
        }
        
    }
    
    cout << "El valor de la suma de los numeros impares hasta su numero " << num << " es: " << result << endl; 
}