//11) Calcular el volumen de una esfera

//librerias

#include <stdio.h> 
#include <conio.h>

//variables globales

#define pi 3.1415926535897932384626 

//funcion prototipo

double volumesfera (int n)
{
	return ((4*pi*n*n*n)/3);
}

//funcion principal

int main (void)
{
	int r;
	printf ("Ingrese el valor del radio: ");
	scanf ("%d", &r);
	printf ("\nEl volumen de la esfera es: %g",volumesfera (r));
	getch ();
}
