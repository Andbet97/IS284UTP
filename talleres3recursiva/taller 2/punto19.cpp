//19) Convertir de millas a yardas.

//librerias

#include <stdio.h> 
#include <conio.h>

//variables globales, no hay 

//funcion prototipo

double mi_yd (float n)
{
	return (n*1760);
}

//funcion principal

int main (void)
{
	float r;
	printf ("Ingrese el valor en millas: ");
	scanf ("%g", &r);
	printf ("\n%g millas son %g yardas", r, mi_yd (r));
	getch ();
}
