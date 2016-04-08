#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

int fibonacci (int n)
{
	int a=0;
	int b=1;
	int c=a+b;
	if (n==0)
	return 0;
	else{
	for (n>0; n>2; n--){
		a=b;
		b=c;
		c=a+b;
	}
	return c;}
}

int main ()
{
    int r=0;
    int a=2;
    while (a=2){
    printf ("Ingrese...");
    scanf ("%d", &r);
    printf ("es : %d", fibonacci (r));
    printf ("\n");}
}
