//23) Teniendo los lados de un triángulo rectángulo, encontrar el valor de la hipotenusa.

//librerias

#include <stdio.h>
#include <conio.h>
#include <math.h>

//variables globales, no hay

//fincion prototipo

double hipotenusa (float c, float a)
{
	return sqrt((c*c)+(a*a));
}

//funcion principal

int main (void)
{
	float r, s;
	printf ("Ingrese el valor del primer cateto: ");
	scanf ("%g", &r);
	printf ("\nIngrese el valor del segundo cateto: ");
	scanf ("%g", &s);
	printf ("\nEl valor de la hipotenusa es %g", hipotenusa (r, s));
	getch ();
}
