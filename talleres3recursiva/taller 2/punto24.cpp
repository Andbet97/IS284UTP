/*24) Teniendo un cubo de lado con valor n, calcular cual es el volumen de la mayor esfera
que cabe dentro del cubo.*/

//librerias

#include <stdio.h>
#include <conio.h>

//variables globales 

#define pi 3.1415926535897932384626

//funcion prototipo

double mayoresfera (float n)
{
	return ((pi*n*n*n)/6);
}

//funcion principal

int main (void)
{
	float r;
	printf ("Ingrese el valor del lado del cubo: ");
	scanf ("%g", &r);
	printf ("\nEl volumen de la mayor esfera que cabe dentro del cubo es: %g", mayoresfera (r));
	getch ();
}
