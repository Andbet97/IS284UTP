//15) Calcular el área de la superficie de un cilindro.

//librerias

#include <stdio.h> 
#include <conio.h>

//variables globales

#define pi 3.1415926535897932384626 

//funcion prototipo

double areasuperficie (float n, float h)
{
	return (2*pi*n*(n+h));
}

//funcion principal

int main (void)
{
	float r;
	float s;
	printf ("Ingrese el valor del radio: ");
	scanf ("%g", &r);
	printf ("\nIngrese el valor de la altura: ");
	scanf ("%g", &s);
	printf ("\nEl área exterior del cilindro es: %g", areasuperficie (r, s));
	getch ();
}
