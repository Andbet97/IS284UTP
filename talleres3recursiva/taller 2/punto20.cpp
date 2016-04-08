//20) Convertir de millas a centímetros usando las funciones anteriores.

//librerias

#include <stdio.h> 
#include <conio.h>

//variables globales, no hay 

//funcion prototipo

double in_cm (float n)     //pulgadas a centimetros, punto16-1.cpp
{
	return (n*2.54);
}

double ft_in (float n)    //pies a pulgadas, punto17.cpp
{
	return (n*12);
}

double yd_ft (float n)    //yardas a pies, punto18.cpp
{
	return (n*3);
}

double mi_yd (float n)    //millas a yardas, punto19.cpp
{
	return (n*1760);
}

//funcion principal

int main (void)
{
	float r;
	printf ("Ingrese el valor en millas: ");
	scanf ("%g", &r);
	printf ("\n%g millas son %g centimetros", r, in_cm (ft_in (yd_ft (mi_yd (r)))));
	getch ();
}
