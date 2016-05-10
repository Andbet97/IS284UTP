/*Hacer una funcion que calcule la distancia entre dos puntos del plano*/
/*por valor*/

/*librerias*/

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/*variables globales*/

typedef struct par {
	int x;
	int y;
};

/*funciones prototipo*/

void capt (par aux, par  aux2)
{
	printf ("Ingrese el valor de X: ");
	scanf ("%d", &aux.x);
	printf ("Ingrese el valor de Y: ");
	scanf ("%d", &aux.y);
	printf ("\n");
	printf ("Ingrese el valor de X: ");
	scanf ("%d", &aux2.x);
	printf ("Ingrese el valor de Y: ");
	scanf ("%d", &aux2.y);
	printf ("\nLa distancia entre los puntos es : %g", sqrt(((aux.x-aux2.x)*(aux.x-aux2.x))+((aux.y-aux2.y)*(aux.y-aux2.y))));
}

/*funcion principal*/

int main ()
{
	par par1;
	par par2;
	capt(par1, par2);
	getch ();
}
