//funcion FACTORIAL
// librerias
#include <stdio.h>
#include <conio.h>

//variables globales; no hay

//funcion prototipo

int factorial (int n)
{
    if (n==0)
    return 1;
    else
    return (n * (factorial (n-1)));
}
    
//funcion principal

int main (void)
{
    int r;
	printf ("Ingrese un n�mero: ");
	scanf ("%d", &r);
	printf ("\nEl factorials de %d, es %d ", r, factorial (r));
	getch();
}
