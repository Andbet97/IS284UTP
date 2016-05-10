/*hacer una funcion que reciba una cadena de caracteres y devuelva solo los números*/

/*librerias*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

/*variables globales*/

/*funiones prototipo*/

void cadena (char *c)
{
	for (int a=0; a<strlen (c); a++){
		printf ("%c", c[a]);
	}
}

int Valint (char *c)
{
    int d=0;
    int n=1;
    for (int a=strlen (c); a>0; a--){
        if ((c[a]>=48)&&(c[a]<=57)){
                d+=(c[a]-48)*n;
                n*=10;
            }
    }
    return d;
}

/*funcion principal*/

int main ()
{
	char cad[10];
	printf ("Ingrese la cadena : \n");
	scanf ("%s", &cad);
	printf ("\nLa cadena es : ");
	cadena (cad);
	printf ("\nEl tamaño entero de la cadena es : %d\n", strlen(cad));
	printf ("\nEl valor numerico es : %d", Valint (cad));
	getch ();
}
