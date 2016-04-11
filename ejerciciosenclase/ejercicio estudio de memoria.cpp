#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

char a=75, *p;
int b=123, *r;

int main (void)
{
	/*char a=75, *p;
    int b=123, *r; */  /*se pueden definir como variables globales o como variables locales*/
	r=&b;
	p=&a;
	printf ("%p\n", p);
	printf ("%d  %p ", b, r);
	++r;
	printf ("%p\n", r);
}
