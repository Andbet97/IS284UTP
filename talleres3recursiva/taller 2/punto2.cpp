//2) Resolver la expresi�n (1/2) - n2 * 20.

//librerias

#include <stdio.h> 
#include <conio.h>

//variables globales; no hay

//funcion prototipo

int fun2 (int n)
{
	//return (((1/2)-(n * n))*20);
	return ((1/2)-(n*n*20));
}

//funcion principal

int main (void)
{
	int r;
	printf ("Ingrese un n�mero: ");
	scanf ("%d", &r);
	printf ("\nEl resultado es: %d", fun2 (r));
	getch ();
}
