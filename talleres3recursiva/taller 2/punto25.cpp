/*25) Teniendo un cubo de lado con valor n, calcular cual es el volumen de la menor esfera
que contiene al cubo.*/

//librerias

#include <stdio.h>
#include <conio.h>
#include <math.h>

//variables globales 

#define pi 3.1415926535897932384626 

//funcion prototipo

double menoresfera (float n)
{
	return ((pi*n*n*n*(sqrt (3)))/2);
}

//funcion principal

int main (void)
{
	float r;
	printf ("Ingrese el valor del lado del cubo: ");
	scanf ("%g", &r);
	printf ("\n'El volumen de la menor esfera que contiene al cubo es: %g", menoresfera (r));
	getch ();
}
