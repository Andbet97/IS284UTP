//5) Calcular el �rea de un c�rculo.

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
	printf ("\nEl �rea del circulo es: %g", areacirculo (r));
	getch ();
}
