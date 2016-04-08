//6) Encontrar el área de un anillo, conociendo el radio interior y el exterior.

//librerias

#include <stdio.h> 
#include <conio.h>

//variables globales

#define pi 3.1415926535897932384626

//funcion prototipo

double areanillo (int n, int a)
{
	return (pi*((n*n)-(a*a)));
}

//funcion principal

int main (void)
{
	int r;
	int s;
	printf ("Ingrese el valor del radio mayor: ");
	scanf ("%d", &r);
	printf ("\nIngrese el valor del radio menor: ");
	scanf ("%d", &s);
	printf ("\nEl área del anillo es: %g", areanillo (r, s));
	getch ();
}
