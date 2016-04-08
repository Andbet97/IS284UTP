//14) Encontrar el volumen de un cilindro.

//librerias

#include <stdio.h> 
#include <conio.h>

//variables globales

#define pi 3.1415926535897932384626   

//funcion prototipo

double volcilindro (float c, float h)
{
	return (pi*c*c*h);
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
	printf ("\nEl volumen del cilindro es: %g", volcilindro (r, s));
	getch ();
}
