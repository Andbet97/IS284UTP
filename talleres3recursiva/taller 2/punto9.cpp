//9) Calcular el área de un trapecio.

//librerias

#include <stdio.h> 
#include <conio.h>

//variables globales, no hay

//funcion prototipo

double Atrapecio (int B, int b, int h)
{
	return (((B+b)*h)*0.5);
}

//funcion principal

int main (void)
{
	int r;
	int s;
	int a;
	printf ("Ingrese el valor de la base mayor: ");
	scanf ("%d", &r);
	printf ("\nIngrese el valor de la base menor: ");
	scanf ("%d", &s);
	printf ("\nIngrese el valor de la altura: ");
	scanf ("%d", &a);
	printf ("\nEl área del trapecio es: %g",Atrapecio (r, s, a));
	getch ();
}
