//22) Solucione la ecuación a x2 + b x + c = 0 para valores de a, b y c dados.

//librerias 

#include <stdio.h>
#include <conio.h>
#include <math.h>

//variables globales, no hay

//funcion prototipo

double cuadratica (float a, float b, float c, float x1, float x2)
{
	if (((b*b)-(4*a*c)) < 0)
	{
	x1 = 0;
	x2 = 0;
	}
	if (((b*b)-(4*a*c)) > 0)
	{
	x1 = ((-b + (sqrt((b*b)-(4*a*c))))/(2*a));
	x2 = ((-b - (sqrt((b*b)-(4*a*c))))/(2*a));
	}
}

//funcion principal

int main (void)
{
	float a, b, c, x1, x2;
	printf ("Introduzca el valor de a: ");
	scanf ("%g", &a);
	printf ("\nIntroduzca el valor de b: ");
	scanf ("%g", &b);
	printf ("\nIntroduzca el valor de c: ");
	scanf ("%g", &c);
	cuadratica (a, b, c, 0, 0);
	if ((x1==0) && (x2==0))
	printf ("\nEl sistema no tiene solución");
	else
	printf ("\nLas soluciones son: %g y %g", x1, x2);
	getch ();
}


