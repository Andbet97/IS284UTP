//funcion FIBONACCI
// librerias
#include <stdio.h>
#include <conio.h>

//variables globales; no hay

//funcion prototipo

int fibo (int n)
{
    if (n==0)
    return 1;
    if (n==1)
    return 1;
    else
    return ((fibo (n-1)) + (fibo(n-2)));
}
    
//funcion principal

int main (void)
{
    int r;
	printf ("Ingrese un número: ");
	scanf ("%d", &r);
	printf ("\nFibonacci %d, es %d ", r, fibo (r));
	getch();
}
