/*48. Utilizando ciclos anidados generar las siguientes parejas de enteros
0 1
1 1
2 2
3 2
4 3
5 3
6 4
7 4
8 5
9 5
*/

#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

int fun48 (void)
{
    int c;/*segunda columna*/
    int a;/*primer columna */
    for (a=2 ; a<12; c++){
    	    for (c=a/2; c>=a/2; a++){
      		printf ("%d %d", a-2, c);
            printf ("\n");
        }
        }
        return 0;
}

int main ()
{
    printf ("Este es : \n\n");
    fun48 ();
    getch ();
}
