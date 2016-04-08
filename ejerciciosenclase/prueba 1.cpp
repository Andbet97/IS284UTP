//librerias

#include <stdio.h> 
#include <conio.h>

//variables globales; no hay

//funcion prototipo

int cifras (int n)
{
	if (n<10)
	return 1;
	else
	return (1 + cifras (n/10));	
}

//funcion principal

int main (void)
{
	int q;
	printf ("Ingrese un número: ");
	scanf ("%d", &q);
	printf ("\nTiene %d dígitos", cifras (q));
	getch();
}
