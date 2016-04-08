//7) Dado un valor de temperatura en grados Celsius, convertirla a grados Fahrenheit.

//librerias

#include <stdio.h> 
#include <conio.h>

//variables globales, no hay 

//funcion prototipo

double conversor (float n)
{
	return ((n * 1.8)+32);
}

//funcion principal

int main (void)
{
	float r;
	printf ("Ingrese la temperatura en grados celsius: ");
	scanf ("%f", &r);
	printf ("\n%g °C igual a %g °F",r ,conversor (r));
	getch ();
}
