//4) Hacer una funci�n que eleve al cuadrado sin usar expt .

//librerias

#include <stdio.h> 
#include <conio.h>

//variables globales, no hay 

//funcion prototipo

int cuadrado (int n)
{
	return (n*n);
}

//funcion principal

int main (void)
{
	int r;
	printf ("Ingrese un n�mero: ");
	scanf ("%d", &r);
	printf ("\nEl cuadrado de %d es: %d",r ,cuadrado (r));
	getch ();
}
