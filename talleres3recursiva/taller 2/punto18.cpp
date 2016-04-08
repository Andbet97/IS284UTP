//18) Convertir de yardas a pies.

//librerias

#include <stdio.h> 
#include <conio.h>

//variables globales, no hay 

//funcion prototipo

double yd_ft (float n)
{
	return (n*3);
}

//funcion principal

int main (void)
{
	float r;
	printf ("Ingrese el valor en yardas: ");
	scanf ("%g", &r);
	printf ("\n%g yardas son %g pies", r, yd_ft (r));
	getch ();
}
