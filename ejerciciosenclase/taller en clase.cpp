/* 1. Construir un programa que lea un entero y
a) si es de 2 d�gitos muestre la suma de sus  d�gitos, 
b) si es de 3 d�gitos, muestre el mayor, 
c) si es de cuatro d�gitos muestre el menor, 
d) si  es de cinco d�gitos muestre el producto de sus d�gitos*/
 
 /*2. Construir un programa que lea un entero y 
a) si menor que 10, muestre su ultimo digito,
b) si es menor que 100, muestre sus dos �ltimos d�gitos por separado , 
c) si es menor que 1000  muestre sus tres �ltimos d�gitos por separado,
d) si es menor que 10000 muestre sus cuatro �ltimos d�gitos por separado*/

 //librerias
 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

 //variables globales
 
 //funcion prototipo
 
 int opciones (void)
{
     printf ("   M E N U     P R I N C I P A L   \n\n\n" );
     printf ("1.  Programa 1. \n");
     printf ("2.  Programa 2. \n");
     printf ("0.  Salir   \n");
}
 
 int cifras (int n, int c)        //funcion que cuenta el numero de digitos de un n�mero 
{
	//if (n<10)
	//return 1;
    //else
    //return (1 + cifras (n/10));	
	while (n>10)
	{
		c++;
		n=(n/10);
	}
	return c;
}

int sumadigitos (int a)    //funcion que suma los digitos de un n�mero  
{
    int b = 10, c=0;
    while (a>10) {
          c = c+(a%b);
          a = (a/b);
    }
    return (a+c);  
}

int mayordigito (int a)      //funcion que me entrega el mayor digito de un numero n
{
    int b=10, c=0, mayor=0;
    while (a>10) {
          if (c>mayor)
          mayor = c;
          else
          mayor = mayor;
          c = a%b;
          a = (a/b);
    }
    if ((a>mayor)&&(a>c))
    	return a;
    	else
		if ((c>mayor)&&(c>a))
    	return c;
    	else 
    	return mayor;		
}

int menordigito (int a)      //funcion que me entrega el menor digito de un numero n 
{
    int b=10, c= mayordigito (a), menor= mayordigito (a);
    while (a>10) {
          if (c>menor)
          menor = menor;
          else
          menor = c;
          c = a%b;
          a = (a/b);
    }
    if ((a<menor)&&(a<c)){
    	return a;
    	if ((c<menor)&&(c<a))
    		return c;
    	    else 
    	    return menor;
		
	}
} 

int productodigitos (int a)    //funcion que me entrega el producto de los digitos de un numero n
{
    int b = 10, c=1;
    while (a>10) {
          c = c*(a%b);
          a = (a/b);
    }
    return (a*c);  
}
 
 //funcion principal
 
 int main ()
 {
     int opc=-1, a=0;
     do{
         system ("cls");
         opciones ();
         printf ("\n\nIngrese la opci�n seleccionada:  "); // usa la libreria stdio.h 
         scanf ("%d",&opc); 
         switch (opc) {
         case 1: 
                 printf ("\nIngrese el entero n :  "); // usa la libreria stdio.h 
                 scanf ("%d",&a);       // usa la libreria stdio.h 
				 if ((cifras (a, 1) == 1)||(cifras (a, 1) > 5))   
				 printf ("\nEl entero debe ser de dos hasta cinco digitos, \npor favor verifique que digito bien el entero.  ");  
				 if (cifras (a, 1) == 2)                     
                 printf ("\nLa suma de los digitos del entero %d es igual a : %d", a, sumadigitos (a));
                 if (cifras (a, 1) == 3)                     
                 printf ("\nEl mayor d�gito del entero %d es : %d ", a, mayordigito (a));
                 if (cifras (a, 1) == 4)                     
                 printf ("\nEl menor d�gito del entero %d es : %d", a, menordigito (a));
                 if (cifras (a, 1) == 5)                     
                 printf ("\nEl producto de los d�gitos del entero %d es : %d", a, productodigitos (a));
                 getch();                                          // usa la librer�a conio.h 
                 break;
		case 2: 
                 printf ("\nIngrese el entero n :  "); // usa la libreria stdio.h 
                 scanf ("%d",&a);       // usa la libreria stdio.h
				 if ((a<10) && (a>0))  
				 printf ("\nEl �ltimo g�gito es : %d   ", a);  
				 else if ((a<100)&&(a>=10))               
                 printf ("\nLos �ltimos dos g�gito son : %d y %d  ", ((a/10)%10), a%10);
                 else if ((a<1000)&&(a>=100))                     
                 printf ("\nLos �ltimos tres g�gitos son : %d , %d y %d  ",((a/100)%10), ((a/10)%10), a%10 );
                 else if ((a<10000)&&(a>=1000))                     
                 printf ("\nLos �ltimos cuatro g�gito son : %d , %d , %d y %d  ",((a/1000)%10), ((a/100)%10), ((a/10)%10), a%10 );
                 else 
                 printf ("\nEl n�mero debe ser mayor que cero y menor que 10000, por favor verifique el valor del entero n.");
                 getch();                                          // usa la librer�a conio.h 
                 break;  
         case 0: 
                 //getch();
                 break;
                }                                                 // usa la libreria stdio.h 
         }while (opc != 0);
         printf ("\nGracias por utilizar nuestro sistemas, Adios  "); // usa la libreria stdio.h 
     
         getch();                                           // usa la librer�a conio.h
}
