//1. Leer un n�mero entero y determinar si es un n�mero terminado en 4.

//librerias

#include <stdio.h>
#include <conio.h>

//variables globales, no hay

//funciones prototipo

int afirmacion (int a)
{
	if ((a%10)==4)
	return 1;
	else 
	return 0;
}

//funciion principal

int main ()
{
	int r;
	printf ("Ingrese un n�mero entero : ");
	scanf ("%d", &r);
	if ((afirmacion (r))==1) 
	printf ("\n El n�mero %d es un n�mero terminado en 4", r);
	else 
	printf ("\n El numero %d es un numero que no termina en 4", r);
	getch ();
}

