/*21) Dadas cantidades de billetes recibidos en denominaciones de $1.000, $2.000, $5.000,
$10.000, $20.000 y $50.000, obtener como resultado el valor del conjunto de todos
los billetes.*/

//librerias

#include <stdio.h>
#include <conio.h>

//variables globales, no hay

//funcion prototipo

int totalbilletes (int p, int q, int r, int s, int t, int u)
{
	return ((p*1000)+(q*2000)+(r*5000)+(s*10000)+(t*20000)+(u*50000));
}

//funcion principal

int main (void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	printf ("¿Cuántos billetes de $1.000 tiene?: ");
	scanf ("%d", &a);
	printf ("\n¿Cuántos billetes de $2.000 tiene?: ");
	scanf ("%d", &b);
	printf ("\n¿Cuántos billetes de $5.000 tiene?: ");
	scanf ("%d", &c);
	printf ("\n¿Cuántos billetes de $10.000 tiene?: ");
	scanf ("%d", &d);
	printf ("\n¿Cuántos billetes de $20.000 tiene?: ");
	scanf ("%d", &e);
	printf ("\n¿Cuántos billetes de $50.000 tiene?: ");
	scanf ("%d", &f);
	printf ("\nUsted tiene en total $%d", totalbilletes (a, b, c, d, e, f));
	getch ();
	
}
