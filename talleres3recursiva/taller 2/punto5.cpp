//5) Calcular el área de un círculo.

//librerias

#include <stdio.h> 
#include <conio.h>

//variables globales

#define pi 3.1415926535897932384626

//funcion prototipo

double areacirculo (int n)
{
	return (pi*n*n);
}

//funcion principal

int main (void)
{
	int r;
	printf ("Ingrese el valor del radio: ");
	scanf ("%d", &r);
	printf ("\nEl área del circulo es: %g", areacirculo (r));
	getch ();
}
