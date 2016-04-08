//16) Convertir de pulgadas a centímetros y otro programa que haga lo contrario.
//de centimetros a pulgadas

//librerias

#include <stdio.h> 
#include <conio.h>

//variables globales, no hay 

//funcion prototipo

double cm_in (float n)
{
	return (n/2.54);
}

//funcion principal

int main (void)
{
	float r;
	printf ("Ingrese el valor en centimetros: ");
	scanf ("%g", &r);
	printf ("\n%g centimetros son %g pulgadas", r, cm_in (r));
	getch ();
}
