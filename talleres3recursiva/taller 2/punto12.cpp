//12) Calcular el volumen de una pirámide de base cuadrada.

//librerias

#include <stdio.h> 
#include <conio.h>

//variables globales, no hay

//funcion prototipo

double volpiramide (float c, float h)
{
	return ((c*c*h)/3);
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
	printf ("\nEl volumen de la piramide es: %g", volpiramide (r, s));
	getch ();
}
