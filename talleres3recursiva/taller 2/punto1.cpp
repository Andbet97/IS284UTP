//1) Resolver la expresi�n n2 + 10.

//librerias

#include <stdio.h> 
#include <conio.h>

//variables globales; no hay

//funcion prototipo

int fun1 (int n)
{
	return ((n * n) + 10);
}

//funcion principal

int main (void)
{
	int r;
	printf ("Ingrese un n�mero: ");
	scanf ("%d", &r);
	printf ("\nEl resultado es: %d", fun1 (r));
	getch ();
}
