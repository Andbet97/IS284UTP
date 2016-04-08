//8) Dado un valor de temperatura en grados Fahrenheit, convertirla a grados Celsius.

//librerias

#include <stdio.h> 
#include <conio.h>

//variables globales, no hay 

//funcion prototipo

double conversor (float n)
{
	return ((n-32)/1.8);
}

//funcion principal

int main (void)
{
	float r;
	printf ("Ingrese la temperatura en grados Fahrenheit: ");
	scanf ("%f", &r);
	printf ("\n%g °F igual a %g °C",r ,conversor (r));
	getch ();
}
