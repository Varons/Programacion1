#include <iostream>
#include <graphics.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>

using namespace std;
int ancho=720, alto=720;



void dibujarlinea(int MX, int MY, int DX, int DY, int color, int TX, int TY, char *nombre);
void plano();

/***********************************LINEAL*********************************/
void grafica(float A, float B, float C);
float _A, _B, _C;

void corteslineal(float x1, float y1);


/******************************PARABOLA************************************/
float _H, _K, _P;
void cuadratica(float H, float K, float P);
void cuadraticahori(float H, float K, float P);


void cortes(float x1, float x2);
void cortes2(float y1, float y2);

/******************************SENO*****************************************/
float _D, _PHI, _E;
void seno(float D, float PHI, float E);
void pedirseno(float D, float PHI, float E);

/********************************lOGARITMO NATURAL************************/
float _F, _G;
void logaritmo(float F, float G);
void pedirln(float F, float G);








int main(int argc, char** argv) 
{

		
	
	system("color 0B");
	int segun=0;
	
	cout<<"presione 1 si desea graficar una funcion lineal"<<endl;
	cout<<"presione 2 si desea graficar una parabola"<<endl;
	cout<<"presione 3 si desea graficar un seno"<<endl;
	cout<<"presione 4 si desea graficar un logaritmo natural"<<endl;
	cin>>segun;
	
	
	switch(segun)
	{
		case 1:
		float x1, y1;
		corteslineal(x1, y1);
		
		plano();
		grafica(_A,_B,_C);
		
		
		
		getch();
		closegraph();
		
		break;
		case 2:
			int a;
	cout<<"si su funcion es de la forma (x-h)^2=4p(y-k) oprima 1"<<endl;
	cout<<"si su funcion es de la forma (y-k)^2=4p(x-h) oprima 2"<<endl;
	cin>>a;
	switch(a)
	{
		case 1:
			float x1,x2;
			cortes(x1,x2);
		
			plano();
			
			cuadratica(_H, _K, _P);
			
			getch();
			closegraph();
			
			break;
		case 2:
			float y1, y2;
			cortes2(y1, y2);
			
			plano();
			cuadraticahori(_H, _K, _P);
			getch();
			closegraph();
			
			break;
		default:
			cout<<"no es un comando valido";
			break;
	}
		case 3:
			float D, PHI, E;
			pedirseno(D, PHI, E);
			plano();
			seno(_D, _PHI, _E);
			getch();
			closegraph();
			
			break;
		case 4: 
			float F, G;
			pedirln(F, G);
			plano();
			logaritmo(_F, _G);
			getch();
			closegraph();
		
			break;
		default: cout<<"no es un comando valido";
			break;
		}

	
	
}

void dibujarlinea(int MX, int MY, int DX, int DY, int color, int TX, int TY, char *nombre)
{
	moveto(MX, MY);
	setcolor (color);
	lineto(DX,DY);
	outtextxy(TX, TY, nombre);
}
void plano()
{
	initwindow(ancho, alto);
	
	dibujarlinea(0, alto/2, ancho, alto/2, WHITE, ancho-20, alto/2 +10, "x");
	dibujarlinea(ancho/2, 0, ancho/2, alto, WHITE, ancho/2 +10, 0 , "y" );
	
}

/************************LINEAL***********************/

void grafica(float A, float B, float C)
{
	float x,y;
	for(x=-360; x<=360 ; x=x+0.01)
	{
		y=(-A*x-C)/B;
		putpixel(360+x, 360-y, MAGENTA);
	}
}

void corteslineal(float x1, float y1)
{
	cout<<"la ecuacion es de la forma: Ax+By+c=0"<<endl;
		cout<<"por favor ingrese A: ";
		cin>>_A;
		cout<<"por favor ingrese B: ";
		cin>>_B;
		cout<<"por favor ingrese C: ";
		cin>>_C;
		cout<<endl<<"la pendiente de la funcion lineal es: "<<-_A/_B<<endl;
		cout<<"el corte en el eje Y: "<<-_C/_B<<endl<<"el corte en el eje X:"<<-_C/_A<<endl;
	
}

/***********************CUADRATICA***********************************/
void cuadratica(float H, float K, float P)
{
	float x, y;
	

	for(x=-360 ; x<=360 ; x=x+0.01)
	{
		y=K+(pow((x-H), 2))/(4*P);
		putpixel(360+x, 360-y, YELLOW);
	}
}
void cuadraticahori(float H, float K, float P)
{
	float x, y;
	
	for(y=-360 ; y<=360 ; y=y+0.01)
	{
		x=H+(pow((y-K), 2)/(4*P));
		putpixel(360+x, 360-y, YELLOW);
	}
}


void cortes(float x1, float x2)
{
	float a, b, c;
			
			cout<<"parabola"<<endl<<"ingrese el valor de h: ";
			cin>>_H;
			cout<<endl<<"ingrese el valor de k: ";
			cin>>_K;
			cout<<endl<<"ingrese el valor de p: ";
			cin>>_P;
			
			a=1/(4*_P);
			b=-_H/(2*_P);
			c=(pow(_H, 2)/(4*_P))+_K;
			
			x1=(-b+sqrtf(pow(b, 2)-4*a*c))/(2*a);
			x2=(-b-sqrtf(pow(b, 2)-4*a*c))/(2*a);
			
			cout<<"los cortes en x son: "<<x1<<" y "<<x2<<endl;
			cout<<"el corte en y es: "<<c;
}
void cortes2(float y1, float y2)
{
	float a1, b1, c1;
			
			cout<<"parabola"<<endl<<"ingrese el valor de h: ";
			cin>>_H;
			cout<<endl<<"ingrese el valor de k: ";
			cin>>_K;
			cout<<endl<<"ingrese el valor de p: ";
			cin>>_P;
			
			a1=1/(4*_P);
			b1=(-_K)/(2*_P);
			c1=(pow(_K, 2)/(4*_P))+_H;
			
			y1=(-b1+sqrtf(pow(b1, 2)-4*a1*c1))/(2*a1);
			y2=(-b1-sqrtf(pow(b1, 2)-4*a1*c1))/(2*a1);
			
			cout<<"los cortes en y son: "<<y1<<" y "<<y2<<endl;
			cout<<"el corte en x es: "<<c1;
}

/***************************SENO*****************************************/
void seno(float D, float PHI, float E)
{
	float x, y;
	
	for(x=-360 ; x<=360 ; x=x+0.01)
	{
		y=40*(D*sin(E*(x*M_PI/180)+(PHI*M_PI/180)));
		putpixel(360+x, 360-y, BLUE);
	}
}
void pedirseno(float D, float PHI, float E)
{
	cout<<"grafica de la forma Asen(Bx+C)."<<endl<<"ingrese el valor de A: ";
			cin>>_D;
			cout<<endl<<"ingrese el valor de B: ";
			cin>>_E;
			cout<<endl<<"ingrese el valor de C: ";
			cin>>_PHI;
			cout<<endl<<"el periodo de la funcion es: "<<"2*pi/"<<_E<<endl;
}

/**********************LOGARITMO NATURAL**********************************/
void logaritmo(float F, float G)
{
	float x, y;
	
	for(x=-360; x<=360 ; x=x+0.01)
	{
		y=10*F*log(G*x);
		putpixel(360+x, 360-y, RED);
	}
}
void pedirln(float F, float G)
{
		cout<<"grafica de la forma Aln(Bx)."<<endl<<"ingrese el valor de A: ";
		cin>>_F;
		cout<<endl<<"ingrese el valor de B: ";
		cin>>_G;
		cout<<"el corte en x es:"<<1/_G;
}




