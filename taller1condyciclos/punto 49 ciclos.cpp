/*49. Utilizando ciclos anidados generar las siguientes ternas de números
1 1 1
2 1 2
3 1 3
4 2 1
5 2 2
6 2 3
7 3 1
8 3 2
9 3 3
*/

//#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

int fun49 ()
{
    int c;
    int a;
    int b=1;
    for (a=3 ; a<11; c++){
    	    for (c=a/3; c>=a/3; a++){
      		printf ("%d %d %d", a-2, c, b);
            printf ("\n");
            b++;
        }
        b=1;
        }
        return 0;
}

int main ()
{
	printf ("Este es : \n");
	fun49 ();
	getch ();
}
