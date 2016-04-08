//17) Convertir de pies a pulgadas

//librerias

#include <stdio.h> 
#include <conio.h>

//variables globales, no hay 

//funcion prototipo

double ft_in (float n)
{
	return (n*12);
}

//funcion principal

int main (void)
{
	float r;
	printf ("Ingrese el valor en pies: ");
	scanf ("%g", &r);
	printf ("\n%g pies son %g pulgadas", r, ft_in (r));
	getch ();
}
