/*librerias*/

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

/*variables globales*/

#define m 20
#define l 100

/*funciones prototipo*/

int arreglo (int *a)
{
    for (int c=0; c<m; c++){
        a[c]=l+c;
        }
        return 0;
}

int mostrar_arreglo (int *b)
{
    for (int c=0; c<m; c++)
        printf ("%3d ", c );
        printf ("\n");
        for (int c=0; c<m; c++)
        printf ("%3d ", b[c] );

    return 0;
}
/*funcion principal*/

int main (void)
{ 
    int A[m]; 
    arreglo (A);
    mostrar_arreglo (A);
    getch ();
}
