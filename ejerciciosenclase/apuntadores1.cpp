/*todos los tipos de datos conocidos, calcular el tamaño de todos los tipos de datos, calculr la direccion y devolver el valor de la variable*/

#include <conio.h>
//#include <stdlib.h>
#include <stdio.h>
//#include <mem.h>

int main (void)
{
	int a=0, *a1=NULL;
	long b=0, *b1=NULL;
	short int c=0, *c1=NULL;
	char d=3, *d1=NULL;
	double e=0, *e1=NULL;
	float f=1.1, *f1=NULL;
	/*ENTERO*/
	a1=&a;
	b1=&b;
	c1=&c;
	printf ("\nENTERO (normal)");
	printf ("\nEntero a: %d \nTamaño de entero: %d\nDireccion de puntero : %p\nContenido : %d", a, sizeof(int), a1, *a1);
	printf ("\n");
	printf ("\nENTERO (largo)");
	printf ("\nEntero b: %d \nTamaño de entero: %d\nDireccion de puntero : %p\nContenido : %d", b, sizeof(long), b1, *b1);
	printf ("\n");
	printf ("\nENTERO (corto)");
	printf ("\nEntero c: %d \nTamaño de entero: %d\nDireccion de puntero : %p\nContenido : %d", c, sizeof(short int), c1, *c1);
	/*CARACTER*/
	d1=&d;
	printf ("\n");
	printf ("\nCARACTER");
	printf ("\nCaracter c: %c \nTamaño de caracter: %d\nDireccion de puntero : %p\nContenido : %c", d, sizeof(char), d1, *d1);
	/*DOUBLE*/
	e1=&e;
	printf ("\n");
	printf ("\nDOUBLE");
	printf ("\nDouble e: %d \nTamaño de caracter: %d\nDireccion de puntero : %p\nContenido : %d", e, sizeof(double), e1, *e1);
	/*FLOAT*/
	f1=&f;
	printf ("\n");
	printf ("\nFLOAT");
	printf ("\nFloat f: %g \nTamaño de caracter: %d\nDireccion de puntero : %p\nContenido : %g", f, sizeof(float), f1, *f1);
	/*getch*/
	getch ();
}
