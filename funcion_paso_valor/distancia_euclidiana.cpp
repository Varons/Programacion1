#include <iostream>
#include <math.h>

using namespace std;

float distancia(float l);
int main()
{
    float l;
    l=distancia(l);
    cout<<l;


}
float distancia(float l)
{
    float x1, y1, x2, y2;
    cout<<"ingrese la x de su primer punto"<<endl;
    cin>>x1;
    cout<<"ingrese la y de su primer punto"<<endl;
    cin>>y1;
    cout<<"ingrese la x de su segundo punto"<<endl;
    cin>>x2;
    cout<<"ingrese la y de su segundo punto"<<endl;
    cin>>y2;
    l=sqrtf((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return l;
}