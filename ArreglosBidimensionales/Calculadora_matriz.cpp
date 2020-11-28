#include <iostream>

using namespace std;

int main ()
{
    cout<<"bienvenido a la calculadora de matrices"<<endl<<"oprima 1 para la suma de dos matrices."<<endl;
    cout<<"oprima 2 para la resta de dos matrices"<<endl<<"oprima 3 para la multiplicacion de dos matrices"<<endl;
    cout<<"oprima 4 para la traspuesta una matriz"<<endl<<"oprima 5 para la multiplicacion de una matriz por escalar"<<endl;
    int a;
    cin>>a;
    int n;
    cout<<"ingrese la dimension de la matriz"<<endl;
    cin>>n;
    int matriz[n][n], matriz2[n][n], matriz3[n][n], escalar=0;
    
    

    switch (a)
    {
    case 1:
        
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                cout<<"primera matriz"<<endl;
                cout<<"ingrese los valores de la "<<i+1<<" fila"<<endl;
                cin>>matriz[i][j];
            }
        }
          for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                cout<<"segunda matriz"<<endl;
                cout<<"ingrese los valores de la "<<i+1<<" fila"<<endl;
                cin>>matriz2[i][j];
            }
        }
        cout<<endl<<"primera matriz"<<endl;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                cout<<matriz[i][j]<<" ";
            }cout<<endl;
        }
        cout<<endl;
        cout<<endl<<"segunda matriz"<<endl;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                cout<<matriz2[i][j]<<" ";
            }cout<<endl;
        }
        cout<<endl;
        cout<<"suma de las matrices"<<endl;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                matriz3[i][j]=matriz[i][j]+matriz2[i][j];
                cout<<matriz3[i][j]<<" ";
            }
            cout<<endl;
        }

        break;
    case 2:

    for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                cout<<"primera matriz"<<endl;
                cout<<"ingrese los valores de la "<<i+1<<" fila"<<endl;
                cin>>matriz[i][j];
            }
        }
          for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                cout<<"segunda matriz"<<endl;
                cout<<"ingrese los valores de la "<<i+1<<" fila"<<endl;
                cin>>matriz2[i][j];
            }
        }
        cout<<endl<<"primera matriz"<<endl;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                cout<<matriz[i][j]<<" ";
            }cout<<endl;
        }
        cout<<endl;
        cout<<endl<<"segunda matriz"<<endl;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                cout<<matriz2[i][j]<<" ";
            }cout<<endl;
        }
        cout<<endl;
        cout<<"suma de las matrices"<<endl;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                matriz3[i][j]=matriz[i][j]-matriz2[i][j];
                cout<<matriz3[i][j]<<" ";
            }
            cout<<endl;
        }


        break;
    case 3:
        cout<<"ingrese por favor la primera matriz"<<endl;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                cout<<"ingrese el valor "<<j<<" de la fila "<<i<<endl;
                cin>>matriz[i][j];
            }
            cout<<"ingrese por favor la segunda matriz"<<endl;
        }
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                cout<<"ingrese el valor "<<j<<" de la fila "<<i<<endl;
                cin>>matriz2[i][j];
            }
            
        }
        cout<<"su primera matriz es:"<<endl;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                
                cout<<matriz[i][j]<<" ";
                
            }
            cout<<endl;
             
        }
        cout<<"su segunda matriz es:"<<endl;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                
                cout<<matriz2[i][j]<<" ";
            }
            cout<<endl;
        
        }

        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                matriz3[i][j]=0;
                for(int k=0; k<n ; k++)
               {
                   matriz3[i][j]=matriz[i][k]*matriz2[k][j]+matriz3[i][j];
               }
            }

        }
        cout<<"la multiplicacion de estas matrices es: "<<endl;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                
                cout<<matriz3[i][j]<<" ";
            }
            cout<<endl;
             
        }



        break;
    case 4:
        cout<<"ingrese la matriz a la cual quiere hacerle la traspuesta"<<endl;
        for(int i=0 ; i<n ; i++)
        {
            for (int j=0 ; j<n ; j++)
            {
                cout<<"ingrese la posicion "<<j<<" de la fila "<<i<<endl;
                cin>>matriz[i][j];

            }
        }
        cout<<"su matriz original es: "<<endl;
        for(int i=0 ; i<n ; i++)
        {
            for (int j=0 ; j<n ; j++)
            {
                
             cout<<matriz[i][j]<<" ";

            }
            cout<<endl;
        }
        cout<<"su matriz traspuesta es:"<<endl;

        for(int i=0 ; i<n ;i++)
        {
            for(int j=0 ; j<n; j++)
            {
                cout<<matriz[j][i]<<" ";
            }
            cout<<endl;
        }


        break;
    case 5:
    cout<<"ingrese la matriz a la cual quiere multiplicarle un escalar"<<endl;
        for(int i=0 ; i<n ; i++)
        {
            for (int j=0 ; j<n ; j++)
            {
                cout<<"ingrese la posicion "<<j<<" de la fila "<<i<<endl;
                cin>>matriz[i][j];

            }
        }
        cout<<"su matriz original es: "<<endl;
        for(int i=0 ; i<n ; i++)
        {
            for (int j=0 ; j<n ; j++)
            {
                
             cout<<matriz[i][j]<<" ";

            }
            cout<<endl;
        }
        cout<<"ingrese el valor del escalar"<<endl;
        cin>>escalar;
        for(int i=0 ; i<n ; i++)
        {
            for (int j=0 ; j<n ; j++)
            {
                cout<<matriz[i][j]*escalar<<" ";

            }
            cout<<endl;
        }




        break;
    
    default:
    cout<<"no es una opcion valida, intente otra vez";
        break;
        }
}