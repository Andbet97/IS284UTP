//3) Medir la longitud de la circunferencia, dado el radio.

//librerias

#include <stdio.h> 
#include <conio.h>

//variables globales

#define pi 3.1415926535897932384626 

//funcion prototipo

double longitud (int n)
{
	return (2*pi*n);
}

//funcion principal

int main (void)
{
	int r;
	printf ("Ingrese el radio de la circunferencia: ");
	scanf ("%d", &r);
	printf ("\nLa longitud de la circunferencia de radio %d es: %g",r ,longitud (r));
	getch ();
}
