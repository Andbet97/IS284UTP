//10) Dados la base mayor, la base menor y la altura de un trapecio, calcular el per�metro.
//asumo trapecio is�sceles 

//librerias

#include <stdio.h> 
#include <conio.h>
#include <math.h>>

//variables globales, no hay

//funcion prototipo

double ladoc (int B, int b, int h)
{
	return sqrt((h*h)+(((B-b)/2)*((B-b)/2)));
}

//funcion principal

int main (void)
{
	int r;
	int s;
	int a;
	printf ("Ingrese el valor de la base mayor: ");
	scanf ("%d", &r);
	printf ("Ingrese el valor de la base menor: ");
	scanf ("%d", &s);
	printf ("Ingrese el valor de la altura: ");
	scanf ("%d", &a);
	printf ("\nEl per�metro del trapecio es: %g",(ladoc (r, s, a) * 2)+r+s);
	getch ();
}
