//16) Convertir de pulgadas a centímetros y otro programa que haga lo contrario.
//de pugadas a centímetros

//librerias

#include <stdio.h> 
#include <conio.h>

//variables globales, no hay 

//funcion prototipo

double in_cm (float n)
{
	return (n*2.54);
}

//funcion principal

int main (void)
{
	float r;
	printf ("Ingrese el valor en pulgadas: ");
	scanf ("%g", &r);
	printf ("\n%g pulgadas son %g centimetros", r, in_cm (r));
	getch ();
}
