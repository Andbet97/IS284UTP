/*construya una funcion que reciba un entero largo y retorna el dígito que mas repite y el número de veces que se repite*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int long veces_a (int n, int a)
{
	int c=0;
	while (n>0){
		if (n%10==a)
		c++;
		n=n/10;
	}
	return c;
}

int long funcion (int n)
{
    int c=0;
    int numero=0;
    while (n>0){
          if (veces_a (n, (n%10))>c){
          c=veces_a (n, (n%10));
          numero= (n%10);}
          n=n/10;
    }
    if (c==1)
    printf ("\nNo se repite ningún dígito.");
    else{
    printf ("\nEl número que mas se repite es : %d", numero);
    printf ("\nLas veces que se repite son : %d", c);}
    return 0;
}

int main ()
{
    int r;
    printf ("Ingrese el entero largo : ");
    scanf ("%d", &r);
    funcion (r);
    getch ();
}
