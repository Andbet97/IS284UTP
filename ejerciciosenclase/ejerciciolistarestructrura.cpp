/*crear un estructura, crear una variable de tipo estructura y listar la estructura*/
/*Librerias*/

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*variables globales*/

typedef struct ASCII {
  int n;
  char c;
};

/*funciones prototipo*/

ASCII nuevo (ASCII Pv)
{
    printf ("\nIngrese el c�digo ASCII que dese aconocer, recuerde que el c�digo ASCII \nva desde 0 hasta 255.\n\n");
    scanf ("%d", &Pv.n);
    //Pv.c=Pv.n;
}

void mostrar (ASCII *Pc)
{
	printf (" \n \n \t \t Lista de ASCCI \n");
     printf (" \n N�mero : %d ", Pc->n);
     //printf (" \n ASCII : %c ", Pc->c);     
}

/*funcion principal*/

int main (void)
{
    ASCII num, *n;
    n = nuevo (num);
    //getch ();
    mostrar (n);
    getch();
}
