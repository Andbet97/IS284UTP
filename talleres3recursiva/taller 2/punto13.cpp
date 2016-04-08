//13) Calcular el área exterior de la pirámide del ejercicio anterior.

//librerias

#include <stdio.h> 
#include <conio.h>
#include <math.h>

//variables globales, no hay  

//funcion prototipo

double areaext (float c, float h)
{
	return ((2*c*(sqrt((h*h)+((c/2)*(c/2)))))+(c*c));
}

//funcion principal

int main (void)
{
	float r;
	float s;
	printf ("Ingrese el valor de un lado de la base: ");
	scanf ("%g", &r);
	printf ("\nIngrese el valor de la altura: ");
	scanf ("%g", &s);
	printf ("\nEl área exterior de la piramide es: %g", areaext (r, s));
	getch ();
}
