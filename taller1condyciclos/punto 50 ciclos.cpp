/*50. Utilizando ciclos anidados generar las siguientes parejas de números
0 1
1 1
2 1
3 1
4 2
5 2
6 2
*/

#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

int fun50 (void)
{
    int c;
    int a;
    for (a=4 ; a<10; c++){
    	    for (c=a/4; c>=a/4; a++){
    	    	if (a<=10){
      		printf ("%d %d", a-4, c);
            printf ("\n");}
        }
        }
        return 0;
}

int main ()
{
    printf ("\n Este es : \n");
    fun50 ();
    getch ();
}
