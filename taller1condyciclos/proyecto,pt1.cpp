//Proyecto n� 1, parte 1, programaci�n 2

/*------------------------CONDICIONALES---------------------------------*/

//librerias

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//variables globales

//funciones prototipo

int afirmacion (int a)      //punto n�1, determinar si un n�mero termina en 4
{
	if ((a%10)==4)
	return 1;
	else
	return 0;
}

int cifras (int n)        //funci�n que cuenta el n�mero de d�gitos de un entero
{
    int c=1;
	while (n>=10)
	{
		c++;
		n=(n/10);
	}
	return c;
}

int sumadigitos (int n)      //punto n�4, funci�n que me devuelve la suma de los d�gitos de un entero
{
	int a=0;
	while (n>=10){
		a=a+(n%10);
		n=n/10;
	}
	return (n+a);
}

int pares (int n)       //punto n�5, funci�n que me devuelve un booleano afirmando o negando si la suma de los digitos es par o no
{
  int a=0;
  while (n>0){
		if (((n%10)%2)==0)
		a++;
		n=n/10;
	}
    return a;
}

int primo (int n)      //punto n�6, funci�n que me determina si un n�mero es primo o no
{
	int d;
	int c=0;
	for (d=2; n>=d; d++){
		if ((n%d)==0)
		c++;
	}
	return c;
}

int contarprimo (int n)
{
	int d=0;
	while (n>0){
		if (primo (n%10)==1)
		d++;
		n=n/10;
	}
	return d;
}

int multiplo (int n)    // funci�n s�lo para enteros de dos d�gitos, determina si uno es m�ltiplo de otro.
{
	int a=n%10;
	n=n/10;
	if ((a%n)==0)
	return 1;  // a es multiplo de n
	else{
		if ((n%a)==0)
		return 2; // n es multiplo de a
		else
		return 0; // ninguno es multiplo del otro
	}
}

int digitosiguales (int n)    //funci�n s�lo para enteros de dos d�gitos, determina si ambos digitos son iguales.
{
	if ((n/10)==(n%10))
	return 1;  //ambos son iguales
	else
	return 0;   // no son iguales
}

int mayor (int n, int a)   //fuci�n que determina que n�mero es mayor
{
	if (n>a)
	return 1;
	else
	return 0;
}

int digitoigual (int a, int b) // funci�n solo para n�meros de dos d�gitos, determina si existen d�gitos en com�n.
{
    int a1=a/10, a2=a%10, b1= b/10, b2=b%10;
    if((a1==b1) || (a2==b2) || (a1==b2) || (a2==b1))
      return 1;
    else
      return 0;
}

int mostrardigitos (int n)
{
    printf ("\nLos d�gitos del n�mero son : ");
    while (n>0){
          printf ("\n%d ", n%10);
          n=n/10;
          } 
          return 0; 
}

int funcion47 (int x, int y)
{
    int b=(x-y);
    if (((b%2)==0)&&(b%10==4)){
                       mostrardigitos (x);
                       mostrardigitos (y);
                       }
    else {if ((b%2)==0)
              printf ("\nLa suma de todos los d�gitos es : %d",(sumadigitos (x) + sumadigitos (y)) );
              else{
                   if ((primo(b)==1)&&(b<10))
                    printf ("\nEl producto de los n�meros es : %d", (x*y));
                       else 
                       printf ("\nNo cumple con ninguna de las anteriores caracteristicas.");
                   }
         }
}   

int tresdigitosiguales (int n)
{ 
int b= ((n/10)%10);
if (((n/100)-b==0)|| (((n/100)-(n%10))==0)||((b - (n%10))==0))
return 1;
else 
return 0;

}

int posicionmayor (int n)
{ 
int b= ((n/10)%10);
if (((n/100)>b)&&((n/100)>(n%10)))
printf ("El d�gito mayor es el primero");
else { if ((b>(n%10))&&(b>(n/100)))
      printf ("El d�gito mayor, es el segundo");
      else{
	  if (((n%10)>(n/100))&&((n%10)>b))
      printf ("El d�gito mayor, es el tercero");
      }
   }
}

int tresdigitosmultiplo (int n)
{
int b= ((n/10)%10);

if ((((n/100)%b)==0)||(((n/100)%(n%10))==0))
return 1;
else { if (((b%(n/100))==0)||((b%(n%10))==0))
           return 1;
        else { if ((((n%10)%(n/100))==0)||(((n%10)%b)==0))
               return 1;
               else 
               return 0;
           }
    }
}

int fun19 (int a, int b)
{
	if (a>b)
	return a;
	else 
	return b;
}

int mayordigito (int n)
{
	int m=0;
	while (n>0){
		if (n%10>m)
		m=n%10;
		n=n/10;
	}
	return m;
}

int contarpares (int n)
{
	int c=0;
	while (n>0){
		if ((n%10)%2==0)
		c++;
		n=n/10;
	}
	return c;
}

int fun25 (int n)
{
	int b=(n%100)/10;
	if ((n/100+n%10==b)||(n/100+b==n%10)||(b+n%10==n/100))
	return 1;
	else 
	return 0;
}

int capicuo (int n)
{
	if ((n%10==n/10000)&&((n%100)/10)==(n/1000)%10)
	return 1;
	else 
	return 0;
}

int fun30 (int n)
{
	if (((n/100)%10)==((n%100)/10))
	return 1;
	else
	return 0;
}

int fun32 (int n)
{
	if (n%7==0)
	return 1;
	else 
	return 0;
}

int fun35 (int n)
{
	int a=n/10;
	int b=n%10;
	printf ("\n%d \n%d", a, b);
	return 0;
}

int contarimpares (int n)
{
	int c=0;
	while (n>0){
		if ((n%10)%2!=0)
		c++;
		n=n/10;
	}
	return c;
}

int fun37 (int a, int b)
{
	if (a%b==0)
	return 1;    /*a es multiplo de b*/
	else {
		if (b%a==0)
		return 2; /*b es multiplo de a*/
		else 
		return 0; /*ninguno es multiplo del otro*/
	}
}

int entre (int r, int n)
{
    while (n>=r){
    printf ("\n%d", r);
    (r++);
  }
  return 0;
}

int fun43 (int a, int b)
{
    if (((a%(a-b))==0)||((b%(a-b))==0))
    return 1;
    else
    return 0;
}

int primerdigito (int n)
{
	while (n>10){
		n=n/10;
	}
	return n;
}

int fun44 (int n)
{
	int c=0;         /*n�mero de veces que el primer d�gito es multilo de otro d�gito*/
	while (n>10){
		if (primerdigito (n)%(n%10)==0)
		c++;
		n=n/10;
	}
	return c;
}

 int fun45 (int n)
 {
 	if (n%2==0)
 	printf ("\nLa suma de sus d�gitos es : %d", n/10+n%10);
 	else {
 		if ((primo (n)==1)&&(n<10))
 		printf ("\nEl �ltimo d�gito es : %d ", n%10);
 		else {
 			if ((n%5==0)&&(n<30))
 			printf ("\nEl primer d�gito es : %d", primerdigito (n));
 			else 
 			printf ("\nNo cumple ninguna de las anteriores.");
		 }
	 }
	 return 0;
 }
 
 int fun46 (int n)
 {
 	if (n%10==1)
 		printf ("\nEl primer d�gito es : %d", primerdigito (n));
 		else {
 			if (n%10==2)
 				printf ("\nLa suma de sus d�gitos es : %d", sumadigitos (n));
 				else {
 					if (n%10==3)
 					printf ("\nEl producto entre sus d�gitos es : %d", primerdigito (n)*3);
 					else 
 					printf ("\nNo cumple con las condiciones anteriores.");
				 }
		 }
		 return 0;
 }
 
 int fun50 (int n)
 {
 	if (n%4==0)
 	printf ("\nLa mitad del entero es : %d", n/2);
 	else {
 		if (n%5==0)
		 printf ("\nEl cuadrado del n�mero es : %d", n*n);
		 else {
		 	if (n%6==0)
		 	printf ("\nEl primer d�gito es : %d", primerdigito (n));
		 	else 
		 	printf ("\nNo cumple con las condiciones anteriores.");
		 }
	 }
	 return 0;
 }
 
/*--------------------------------------------------Menus-------------------------------*/

int menu ()         // funci�n men� principal
{
    printf ("       MENU PRINCIPAL      \n\n\n");
    printf ("1. Ejercicios del 1 al 10.\n");
    printf ("2. Ejercicios del 11 al 20.\n");
    printf ("3. Ejercicios del 21 al 30.\n");
    printf ("4. Ejercicios del 31 al 40.\n");
    printf ("5. Ejercicios del 41 al 50.\n");
    printf ("0. Salir.\n");
}

int opciones (int n)    //men� fragmentado en 5 partes
{
    switch (n){
    case 1:          //del 1 al 10
   	       printf ("1. Leer un n�mero entero y determinar si es un n�mero terminado en 4. \n");
           printf ("2. Leer un n�mero entero y determinar si tiene 3 d�gitos. \n");
           printf ("3. Leer un n�mero entero y determinar si es negativo.\n");
           printf ("4. Leer un n�mero entero de dos d�gitos y determinar a cu�nto es\n   igual la suma de sus d�gitos.\n");
           printf ("5. Leer un n�mero entero de dos d�gitos y determinar si ambos\n   d�gitos son pares.\n");
           printf ("6. Leer un n�mero entero de dos d�gitos menor que 20 y determinar\n   si es primo.\n");
           printf ("7. Leer un n�mero entero de dos d�gitos y determinar si es primo y\n   adem�s si es negativo.\n");
           printf ("8. Leer un n�mero entero de dos d�gitos y determinar si sus dos d�gitos\n   son primos.\n");
           printf ("9. Leer un n�mero entero de dos d�gitos y determinar si un d�gito\n   es m�ltiplo del otro.\n");
           printf ("10. Leer un n�mero entero de dos d�gitos y determinar si los dos\n    d�gitos son iguales.\n");
           printf ("0. Regresar al men� principal.\n");
           break;
    case 2:        //del 11 al 20
           printf ("11. Leer dos n�meros enteros y determinar cu�l es el mayor.\n");
           printf ("12. Leer dos n�meros enteros de dos d�gitos y determinar si tienen \n    d�gitos comunes.\n");
           printf ("13. Leer dos n�meros enteros de dos d�gitos y determinar si la suma de\n    los dos n�meros origina un n�mero par.\n");
           printf ("14. Leer dos n�meros enteros de dos d�gitos y determinar a cu�nto es igual \n    la suma de todos los d�gitos.\n");
           printf ("15. Leer un n�mero entero de tres d�gitos y determinar a cu�nto es igual\n    la suma de sus d�gitos.\n");
           printf ("16. Leer un n�mero entero de tres d�gitos y determinar si al menos dos de\n    sus tres d�gitos son iguales.\n");
           printf ("17. Leer un n�mero entero de tres d�gitos y determinar en qu� posici�n est�\n    el mayor d�gito.\n");
           printf ("18. Leer un n�mero entero de tres d�gitos y determinar si alg�n d�gito es \n    m�ltiplo de los otros.\n");
           printf ("19. Leer tres n�meros enteros y determinar cu�l es el mayor. \n    Usar solamente dos variables.\n");
           printf ("20. Leer tres n�meros enteros y mostrarlos ascendentemente.\n");
           printf ("0. Regresar al men� principal.\n");
           break;
    case 3:         //del 21 al 30
           printf ("21. Leer tres n�meros enteros de dos d�gitos cada uno y determinar en cu�l\n    de ellos se encuentra el mayor d�gito.\n");
           printf ("22. Leer un n�mero entero de tres d�gitos y determinar si el primer d�gito es\n    igual al �ltimo.\n");
           printf ("23. Leer un n�mero entero de tres d�gitos y determinar cu�ntos d�gitos\n    primos tiene.\n");
           printf ("24. Leer un n�mero entero de tres d�gitos y determinar cu�ntos d�gitos\n    pares tiene.\n");
           printf ("25. Leer un n�mero entero de tres d�gitos y determinar si alguno de sus d�gitos\n    es igual a la suma de los otros dos.\n");
           printf ("26. Leer un n�mero entero de cuatro d�gitos y determinar a cuanto es igual\n    la suma de sus d�gitos.\n");
           printf ("27. Leer un n�mero entero de cuatro d�gitos y determinar cu�ntos\n    d�gitos pares tiene.\n");
           printf ("28. Leer un n�mero entero menor que 50 y positivo y determinar si\n    es un n�mero primo.\n");
           printf ("29. Leer un n�mero entero de cinco d�gitos y determinar si es \n    un n�mero capic�o. Ej. 15651, 59895.\n");
           printf ("30. Leer un n�mero entero de cuatro d�gitos y determinar si el segundo\n    d�gito es igual al pen�ltimo.\n");
           printf ("0. Regresar al men� principal.\n");
           break;
    case 4:         //del 31 al 40
           printf ("31. Leer un n�mero entero y determina si es igual a 10.\n");
           printf ("32. Leer un n�mero entero y determinar si es m�ltiplo de 7.\n");
           printf ("33. Leer un n�mero entero y determinar si termina en 7.\n");
           printf ("34. Leer un n�mero entero menor que mil y determinar cu�ntos d�gitos tiene.\n");
           printf ("35. Leer un n�mero entero de dos d�gitos, guardar cada d�gito en una variable\n    diferente y luego mostrarlas en pantalla.\n");
           printf ("36. Leer un n�mero entero de 4 d�gitos y determinar si tiene mas d�gitos\n    pares o impares.\n");
           printf ("37. Leer dos n�meros enteros y determinar cu�l es m�ltiplo de cu�l.\n");
           printf ("38. Leer tres n�meros enteros y determinar si el �ltimo d�gito de los\n    tres n�meros es igual.\n");
           printf ("39. Leer tres n�meros enteros y determina si el pen�ltimo d�gito de los\n    tres n�meros es igual.\n");
           printf ("40. Leer dos n�meros enteros y si la diferencia entre los dos es menor o igual\n    a 10 entonces mostrar en pantalla todos los enteros comprendidos entre\n    el menor y el mayor de los n�meros le�dos.\n");
           printf ("0. Regresar al men� principal.\n");
           break;
    case 5:        //del 41 al 50
           printf ("41. Leer dos n�meros enteros y determinar si la diferencia entre los dos\n    es un n�mero primo.\n");
           printf ("42. Leer dos n�meros enteros y determinar si la diferencia entre los dos\n    es un n�mero par.\n");
           printf ("43. Leer dos n�meros enteros y determinar si la diferencia entre los dos \n    es un n�mero divisor exacto de alguno de los dos n�meros.\n");
           printf ("44. Leer un n�mero entero de 4 d�gitos y determinar si el primer d�gito\n    es m�ltiplo de alguno de los otros d�gitos.\n");
           printf ("45. Leer un n�mero entero de 2 d�gitos y si es par mostrar en pantalla\n    la suma de sus d�gitos, si es primo y menor que 10 mostrar en pantalla \n    su �ltimo d�gito y si es m�ltiplo de 5 y menor que 30 mostrar \n    en pantalla el primer d�gito.\n");
           printf ("46. Leer un n�mero entero de 2 d�gitos y si terminar en 1 mostrar en pantalla\n    su primer d�gito, si termina en 2 mostrar en pantalla la suma de sus \n    d�gitos y si termina en 3 mostrar en pantalla el producto de\n    sus dos d�gitos.\n");
           printf ("47. Leer dos n�meros enteros y si la diferencia entre los dos n�meros es par\n    mostrar en pantalla la suma de los d�gitos de los n�meros, si dicha \n    diferencia es un n�mero primo menor que 10 entonces mostrar en pantalla \n    el producto de los dos n�meros y si la diferencia entre ellos terminar\n    en 4 mostrar en pantalla todos los d�gitos por separado.\n");
           printf ("48. Leer un n�mero entero y si es menor que 100 determinar si es primo.\n");
           printf ("49. Leer un n�mero entero y si es m�ltiplo de 4 determinar si su \n    �ltimo d�gito es primo.\n");
           printf ("50. Leer un n�mero entero y si es m�ltiplo de 4 mostrar en pantalla su mitad,\n    si es m�ltiplo de 5 mostrar en pantalla su cuadrado y si es m�ltiplo de 6\n    mostrar en pantalla su primer d�gito.\n    Asumir que el n�mero no es mayor que 100.\n");
           printf ("0. Regresar al men� principal.\n");
           break;
    }
}

//funci�n principal

int main ()
{
	int opc=-1;
	int opc2=-1;
    int x=0;
    int y=0;
    int z=0;
	do{
		system ("cls");
		menu ();
		printf ("\n\nIngrese la opci�n seleccionada : "); // usa la libreria stdio.h
        scanf ("%d",&opc); // usa la libreria stdio.h
        switch (opc){
        case 1:{
                system ("cls");
                opciones (1);
                printf ("\n\nIngrese la opci�n seleccionada : "); // usa la libreria stdio.h
                scanf ("%d",&opc2); // usa la libreria stdio.h
                switch (opc2){
                case 1:
        	           printf ("\nIngrese el n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);// usa la libreria stdio.h
        	           if ((afirmacion (x))==1)
	                   printf ("\nEl n�mero %d es un n�mero terminado en 4", x);// usa la libreria stdio.h
	                   else
	                   printf ("\nEl numero %d es un numero que no termina en 4", x);// usa la libreria stdio.h
	                   getch ();// usa la libreria conio.h
                       break;
	            case 2:
		               printf ("\nIngrese el entero n : ");// usa la libreria stdio.h
		               scanf ("%d", &x);// usa la libreria stdio.h
		               if ((cifras (x))<3)
		               printf ("\nEl entero tiene menos de tres d�gitos.");// usa la libreria stdio.h
	                   else if ((cifras (x))>3)
		               printf ("\nEl entero tiene mas de tres d�gitos.");// usa la libreria stdio.h
		               else
		               printf ("\nEl entero tiene tres d�gitos.");// usa la libreria stdio.h
		               getch ();// usa la libreria conio.h
		               break;
		        case 3:
		               printf ("\nIngrese el entero n : ");// usa la libreria stdio.h
				       scanf ("%d", &x);
				       if (x<0)
				       printf ("\nEl n�mero es negativo.");// usa la libreria stdio.h
				       else
		        	   printf ("\nEl n�mero es positivo.");// usa la libreria stdio.h
		        	   getch ();        // usa la libreria conio.h
		        	   break;
		        case 4:
		               printf ("\nIngrese el entero n : ");// usa la libreria stdio.h
				       scanf ("%d", &x);// usa la libreria stdio.h
				       if (cifras (x)==2)
				       printf ("\nLa suma de los d�gitos del entero %d es : %d ", x, sumadigitos (x));// usa la libreria stdio.h
				       else
				       printf ("\nEl n�mero debe ser de dos d�gitos, por favor verifique que asi sea.");// usa la libreria stdio.h
				       getch ();	// usa la libreria conio.h
				       break;
				case 5:
                       printf ("\nIngrese el entero n : ");// usa la libreria stdio.h
				       scanf ("%d", &x);// usa la libreria stdio.h
				       if (cifras (x)==2){
                            if (pares (x)== cifras (x))
				            printf ("\nAmbos d�gitos del entero %d son pares.", x);// usa la libreria stdio.h
                            else
                            printf ("\nLos d�gitos, o uno de ellos, no son pares.");// usa la libreria stdio.h
                            }
				       else
					   printf ("\nEl n�mero debe ser de dos d�gitos, por favor verifique que asi sea.");// usa la libreria stdio.h
                       getch ();// usa la libreria conio.h
                       break;
                case 6:
                       printf ("\nIngrese el entero n : ");// usa la libreria stdio.h
				       scanf ("%d", &x);// usa la libreria stdio.h
				       if ((x<20)&&(cifras (x)==2)){
				            if (primo (x)==1)
                            printf ("\nEL n�mero es primo.");// usa la libreria stdio.h
                            else
                            printf ("\nEl n�mero no es primo.");// usa la libreria stdio.h
					        }
                       else
                       printf ("\nEl n�mero debe ser de dos d�gitos y no debe ser mayor que 20,\npor favor verifique que asi sea.");// usa la libreria stdio.h
					   getch ();// usa la libreria conio.h
                       break;
				case 7:
                       printf ("\nIngrese el entero n : ");// usa la libreria stdio.h
				       scanf ("%d", &x);// usa la libreria stdio.h
				       if (x<0){
				       	if (cifras (-(x))==2){
				            if (primo (-(x))==1)
				            	printf ("\nEL n�mero es primo negativo.");  // usa la libreria stdio.h
                            else
                            	printf ("\nEl n�mero no es primo y es negativo.");// usa la libreria stdio.h
                         }
                        else
                        printf ("\nEl n�mero debe ser de dos d�gitos, por favor verifique que asi sea.");// usa la libreria stdio.h
					   }
				       else{
				       	if (cifras (x)==2){
				            if (primo (x)==1)
				            	printf ("\nEL n�mero es primo positivo.");  // usa la libreria stdio.h
                            else
                            	printf ("\nEl n�mero no es primo y es positivo.");// usa la libreria stdio.h
                         }
                        else
                        printf ("\nEl n�mero debe ser de dos d�gitos, por favor verifique que asi sea.");// usa la libreria stdio.h
					   }
					   getch ();// usa la libreria conio.h
                       break;
				case 8:
					   printf ("\nIngrese el entero n : ");
					   scanf ("%d", &x);
					   if (cifras (x) == 2){
					   	if (cifras (x) == contarprimo (x))
					   	printf ("\nAmbos d�gitos del entero %d son primos.", x);// usa la libreria stdio.h
					   	else
					   	printf ("\nUno o ambos d�gitos del entero %d no son primos.", x);// usa la libreria stdio.h
					   }
					   else
					   printf ("\nEl n�mero debe ser de dos d�gitos, por favor verifique que asi sea.");// usa la libreria stdio.h
					   getch ();// usa la libreria conio.h
					   break;
				case 9:
					   printf ("\nIngrese el entero n : ");
					   scanf ("%d", &x);
					   if (cifras (x)==2){
					   	if (multiplo (x)==1)
					   printf ("\n%d es m�ltiplo de %d.", (x%10), (x/10));
					    else{
					    	if (multiplo (x) == 2)
					    	printf ("\n%d es multiplo de %d.", (x/10), (x%10));
					    	else
					    	printf ("\nNinguno es m�ltiplo del otro.");
						}
					   }
					   else
					   printf ("\nEl n�mero debe ser de dos d�gitos, por favor verifique que asi sea.");// usa la libreria stdio.h
					   getch ();// usa la libreria conio.h
					   break;
				case 10:
					   printf ("\nIngrese el entero n : ");
					   scanf ("%d", &x);
					   if (cifras (x)==2){
					   	if (digitosiguales (x)==1)
					   	printf ("\nAmbos d�gitos son iguales.");
					   	else
					   	printf ("\nLos d�gitos son diferentes.");
					   }
					   else
					   printf ("\nEl n�mero debe ser de dos d�gitos, por favor verifique que asi sea.");// usa la libreria stdio.h
					   getch ();// usa la libreria conio.h
					   break;
				case 0:
                       system ("cls");
                       opc=-1;
                       break;
	        	}
             }
             break;
	    case 2:{
               system ("cls");
               opciones (2);
               printf ("\n\nIngrese la opci�n seleccionada : "); // usa la libreria stdio.h
               scanf ("%d",&opc2); // usa la libreria stdio.h
               switch (opc2){
               case 11:
			           printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           printf ("\nIngrese el segundo entero : ");
			           scanf ("%d", &y);
			           if (mayor (x, y)==1)
			           printf ("\n%d es mayor que %d.", x, y);
			           else
			           printf ("\n%d es mayor que %d.", y, x);
			           getch ();
			           break;
			   case 12:
			           printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           printf ("\nIngrese el segundo entero : ");
			           scanf ("%d", &y);
                       if (((cifras (x))==2)&&((cifras (y))==2))
                       {
                       if (digitoigual (x, y)==0)
                       printf ("\nNo tienen d�gitos en com�n.");
                       else
                       printf ("\nTienen d�gitos en com�n.");
                       }
                       else
                       printf ("\nAmbos n�meros deben ser de dos d�gitos, por favor berifique que asi sea.");
                       getch ();
                       break;
               case 13:
			           printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           printf ("\nIngrese el segundo entero : ");
			           scanf ("%d", &y);
                       if (((cifras (x))==2)&&((cifras (y))==2))
                       {
                       if (((x+y)%2)==0)
                       printf ("\nLa suma de ambos n�mero es par.");
                       else
                       printf ("\nLa suma de ambos n�mero es impar");
                       }
                       else
                       printf ("\nAmbos n�meros deben ser de dos d�gitos, por favor berifique que asi sea.");
                       getch (); 
					   break; 
			   case 14:
			           printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           printf ("\nIngrese el segundo entero : ");
			           scanf ("%d", &y);
			           if (((cifras (x))==2)&&((cifras (y))==2))
			           printf ("\nLa suma de todos los d�gitos es igual a : %d", ((sumadigitos (x))+(sumadigitos (y))));
			           else
			           printf ("\nAmbos n�meros deben ser de dos d�gitos, por favor berifique que asi sea.");
					   getch ();
					   break;
			  case 15:
			           printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if ((cifras (x))==3)
			           printf ("\nLa suma sus d�gitos es igual a : %d", sumadigitos (x));
			           else
			           printf ("\nEl n�mero debe ser de tres d�gitos, por favor berifique que asi sea.");
					   getch ();
					   break;
			   case 16:
			   	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==3){
			           	if (tresdigitosiguales (x)==1)
			           	printf ("\nAlmenos dos de sus d�gitos son iguales");
			           	else
			           	printf ("\nNo tiene d�gitos iguales");
					   }
				       else
					   printf ("\nEl n�mero debe ser de tres d�gitos, por favor berifique que asi sea.");
					   getch ();
					   break;
			   case 17:
			           printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
					   if (cifras (x)==3){
					   	posicionmayor (x);
					   }
					   else
					   printf ("\nEl n�mero debe ser de tres d�gitos, por favor berifique que asi sea.");
					   getch ();
					   break;
			   case 18:
			           printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
					   if (cifras (x)==3){
					            if (tresdigitosmultiplo (x)==1)
					            printf ("\nAlmenos uno de los d�gitos es m�ltiplo de otro d�gito.");	
								else 
								printf ("\nNinguno de los d�gitos es m�ltiplo de otro.");					   
					   }
					   else
					   printf ("\nEl n�mero debe ser de tres d�gitos, por favor berifique que asi sea.");
					   getch ();
					   break;
			   case 19: 
			           printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
					   printf ("\nIngrese el segundo entero : ");
			           scanf ("%d", &y);
					   if (x>y){
					    printf ("\nIngrese el tercer entero : ");
			            scanf ("%d", &y);
					   }
					   else {
					   	printf ("\nIngrese el primer entero : ");
			            scanf ("%d", &x);
					   }
					   printf ("\nEl mayor es : %d ", fun19 (x, y));
			           getch ();
					   break; 
			   case 20:
			           printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
					   printf ("\nIngrese el segundo entero : ");
			           scanf ("%d", &y);
					   if (x>=y){
					   	z=y;
					    printf ("\nIngrese el tercer entero : ");
			            scanf ("%d", &y);
					   }
					   else{
					   	z=x;
					   	printf ("\nIngrese el tercer entero : ");
			            scanf ("%d", &x);
					   }
					   if (z>=y){
					   	   printf ("\n%d %d %d ", y, z, x);
						}
						else {
						   	if (x>=y){
						   		printf ("\n%d %d %d ", z, y, x);
							   }
							   else 
							   printf ("\n%d %d %d ", z, x, y);
						   }					   
			           getch ();
			           z=0;
					   break;		   	   				  	   	         
               case 0:
                       system ("cls");
                       opc=-1;
                       break;
               }
             }
             break;
        case 3:{
               system ("cls");
               opciones (3);
               printf ("\n\nIngrese la opci�n seleccionada : "); // usa la libreria stdio.h
               scanf ("%d",&opc2); // usa la libreria stdio.h
               switch (opc2){
               case 21:
               	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           printf ("\nIngrese el segundo entero : ");
			           scanf ("%d", &y);
			           printf ("\nIngrese el segundo entero : ");
			           scanf ("%d", &z);
			           if ((cifras (x)==2)&&(cifras (y)==2)&&(cifras (z)==2)){
			           	if ((mayordigito (x)>mayordigito (y))&&(mayordigito (x)>mayordigito (z)))
			           	printf ("\nEl mayor d�gito es : %d y se encuentra en el entero %d", mayordigito (x), x);
			           	else{
			           		if ((mayordigito (y)>mayordigito (x))&&(mayordigito (y)>mayordigito (z)))
			           			printf ("\nEl mayor d�gito es : %d y se encuentra en el entero %d", mayordigito (y), y);
			           		else 
			           			printf ("\nEl mayor d�gito es : %d y se encuentra en el entero %d", mayordigito (z), z);
						   }
					   }
					   else
					   printf ("\nLos n�meros deben ser de dos d�gitos, berifique que asi sea.");
					   getch ();
					   break;
               case 22:
               	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==3){
			           	if (x/100==x%10)
			           	printf ("\nEl primer d�gito es igual al �ltimo d�gito.");
			           	else
			           	printf ("\nEl primer d�gito no es igual al �ltimo d�gito.");
					   }
					   else 
					   printf ("\nEl n�mero debe ser de tres d�gitos, berifique que asi sea.");
					   getch ();
               	       break;
               case 23:
               	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==3){
			           	printf ("\nEl entero %d tiene %d d�gitos primos.", x, contarprimo (x));
					   }
					   else 
					   printf ("\nEl n�mero debe ser de tres d�gitos, berifique que asi sea.");
					   getch ();
               	       break;
               case 24:
               	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==3){
			           	printf ("\nEl entero %d tiene %d d�gitos pares.", x, contarpares (x));
					   }
					   else 
					   printf ("\nEl n�mero debe ser de tres d�gitos, berifique que asi sea.");
					   getch ();
               	       break;
               case 25:
               	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==3){
			           	if (fun25 (x)==1)
			           	printf ("\nLa suma de dos d�gitos del entero es igual al tercer d�gito.");
			           	else
			           	printf ("\nNinguna de las sumas de dos de los d�gitos es igual a algun d�gito del entero.");
					   }
					   else 
					   printf ("\nEl n�mero debe ser de tres d�gitos, berifique que asi sea.");
					   getch ();
               	       break;
			   case 26:
			   	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==4){
			           printf ("\nLa suma de sus d�gitos es : %d", sumadigitos (x));
					   }
					   else 
					   printf ("\nEl n�mero debe ser de cuatro d�gitos, berifique que asi sea.");
					   getch ();
			   	       break;
			   case 27:
			   	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==4){
			           printf ("\nEl entero %d tiene %d d�gitos pares.", x, contarpares (x));
					   }
					   else 
					   printf ("\nEl n�mero debe ser de cuatro d�gitos, berifique que asi sea.");
					   getch ();
			   	       break;
			   case 28:
			   	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if ((x>0)&&(x<=50)){
			           if (primo (x)==1)
			           printf ("\nEl entero es primo.");
			           else
			           printf ("\nEl entero no es primo.");
					   }
					   else 
					   printf ("\nEl n�mero debe ser mayor que 0 y menor que 50, berifique que asi sea.");
					   getch ();
			   	       break;
			   case 29:
			   	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==5){
			           if (capicuo (x)==1)
			           printf ("\nEl entero es un n�mero capic�o.");
			           else
			           printf ("\nEl entero no es un n�mero capic�o.");
					   }
					   else 
					   printf ("\nEl n�mero debe ser de cinco d�gitos, berifique que asi sea.");
					   getch ();
			   	       break;
			   case 30:	
			           printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==4){
			           if (fun30 (x)==1)
			           printf ("\nEl segundo y el tercer d�gito del entero son �guales.");
			           else
			           printf ("\nEl segundo y el tercer d�gito del entero no son �guales.");
					   }
					   else 
					   printf ("\nEl n�mero debe ser de cuatro d�gitos, berifique que asi sea.");
					   getch ();
			           break;
			   case 0:
                       system ("cls");
                       opc=-1;
                       break;
                }
             }
             break;
        case 4:{
               system ("cls");
               opciones (4);
               printf ("\n\nIngrese la opci�n seleccionada : "); // usa la libreria stdio.h
               scanf ("%d",&opc2); // usa la libreria stdio.h
               switch (opc2){
               case 31:
               	       printf ("\nIngrese el n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           if (x==10)
        	           printf ("\nEl entero es igual a 10.");
        	           else
        	           printf ("\nEl entero no es igual a 10.");
        	           getch ();
               	       break;
               case 32:
               	       printf ("\nIngrese el n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
					   if (fun32 (x)==1)
					   printf ("\nEl entero es m�ltiplo de 7."); 
					   else
					   printf ("\nEl entero no es m�ltiplo de 7."); 
					   getch ();
               	       break;
               case 33:
               	       printf ("\nIngrese el n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           if (x%10==7)
        	           printf ("\nEl entero termina en 7.");
        	           else 
        	           printf ("\nEl entero no termina en 7.");
        	           getch ();
               	       break;
               case 34:
               	       printf ("\nIngrese el n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           if (x<=1000){
        	           printf ("\nEl entero tiene %d d�gitos.", cifras (x));	
					   }
					   else 
					   printf ("\nEl entero debe ser menor que 1000, berifique que asi sea.");
					   getch ();
               	       break;
               case 35:
               	       printf ("\nIngrese el n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           if (cifras (x)==2){
        	           fun35 (x);	
					   }
					   else 
					   printf ("\nEl entero debe ser de dos d�gitos, berifiue que asi sea.");
					   getch ();
               	       break;
			   case 36:
			   	       printf ("\nIngrese el n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           if (cifras (x)==4){
        	           if (contarpares (x)==contarimpares (x))
					   printf ("\nEl entero tiene igual n�mero de d�gitos pares y de impares.");
					   else {
					   	if (contarpares (x)>contarimpares (x))
						   printf ("\nEl entero tiene m�s d�gitos pares.");
						   else
						   printf ("\nEl entero tiene m�s d�gitos impares.");
					   } 
					   }
					   else 
					   printf ("\nEl entero debe ser de cuatro d�gitos, berifiue que asi sea.");
					   getch ();
			   	       break;
			   case 37:
			   	       printf ("\nIngrese el primer n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           printf ("\nIngrese el segundo n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&y);
        	           if (fun37 (x,y)==1)
        	           printf ("\n%d es multiplo de %d", x, y);
        	           else {
        	           	if (fun37 (x,y)==2)
        	           	printf ("\n%d es multiplo de %d", y, x);
        	           	else 
        	           	printf ("\nNinguno es multiplo del otro.");
					   }
					   getch ();
			   	       break;
			   case 38:
			   	       printf ("\nIngrese el primer n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           printf ("\nIngrese el segundo n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&y);
        	           printf ("\nIngrese el primer n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&z);
        	           if ((x%10==y%10)&&(z%10==y%10))
        	           printf ("\nEl �ltimo d�gito de los enteroes es igual.");
        	           else 
        	           printf ("\nEl �ltimo d�gito de los enteroes  no es igual.");
        	           getch ();
			   	       break;
			   case 39:
			   	       printf ("\nIngrese el primer n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           printf ("\nIngrese el segundo n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&y);
        	           printf ("\nIngrese el primer n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&z);
        	           if (((x%100)/10==(y%100)/10)&&((z%100)/10==(y%100)/10))
        	           printf ("\nEl pen�timo d�gito de los enteroes es igual.");
        	           else 
        	           printf ("\nEl pen�ltimo d�gito de los enteroes  no es igual.");
        	           getch ();
			   	       break;
			   case 40:
			   	       printf ("\nIngrese el primer n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           printf ("\nIngrese el segundo n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&y);
        	           if (x>y){
        	           	if (x-y<=10)
        	           	entre (y, x);
        	           	else 
        	           	printf ("\nLa diferencia es mayor que diez.");
					   }
					   else{
					   	if (y-x<=10)
        	           	entre (x, y);
        	           	else 
        	           	printf ("\nLa diferencia es mayor que diez.");
					   }
					   getch ();
			   	       break;
			   case 0:
                       system ("cls");
                       opc=-1;
                       break;
                }
             }
             break;
        case 5:{
               system ("cls");
               opciones (5);
               printf ("\n\nIngrese la opci�n seleccionada : "); // usa la libreria stdio.h
               scanf ("%d",&opc2); // usa la libreria stdio.h
               switch (opc2){
               case 41:
               	       printf ("\nIngrese el primer n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           printf ("\nIngrese el segundo n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&y);
        	           if (x>y){
        	           	if (primo (x-y)==1)
        	           	printf ("\nLa diferencia entre los enteros en un n�mero primo.");
        	           	else
        	           	printf ("\nLa diferencia entre los enteros en un n�mero primo.");
					   }
					   else {
					   	if (primo (y-x)==1)
        	           	printf ("\nLa diferencia entre los enteros en un n�mero primo.");
        	           	else
        	           	printf ("\nLa diferencia entre los enteros en un n�mero primo.");
					   }
					   getch ();
               	       break;
               case 42:
               	       printf ("\nIngrese el primer n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           printf ("\nIngrese el segundo n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&y);
        	           if (x>y){
        	           	if (x-y%2==0)
        	           	printf ("\nLa diferencia entre los enteros es un n�mero par.");
        	           	else
        	           	printf ("\nLa diferencia entre los enteros no es un n�mero par.");
					   }
					   else {
					   	if (y-x%2==0)
        	           	printf ("\nLa diferencia entre los enteros es un n�mero par.");
        	           	else
        	           	printf ("\nLa diferencia entre los enteros no es un n�mero par.");
					   }
					   getch ();
               	       break;
               case 43:
               	       printf ("\nIngrese el primer n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           printf ("\nIngrese el segundo n�mero entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&y);
        	           if (x>y){
        	           	if (fun43 (x,y)==1)
        	           	printf ("\nLa diferencia entre los enteros es divisor de uno de los enteros.");
        	           	else
        	           	printf ("\nLa diferencia entre los enteros no es divisor de uno de los enteros.");
					   }
					   else {
					   	if (fun43 (y,x)==1)
        	           	printf ("\nLa diferencia entre los enteros es divisor de almenos uno de los enteros.");
        	           	else
        	           	printf ("\nLa diferencia entre los enteros no es divisor de almenos uno de los enteros.");
					   }
        	           getch ();
               	       break;
               case 44:
               	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==4){
			           	if (fun44 (x)==0)
			           	printf ("\nEl primer d�gito no es multiplo de almenos uno de los d�gitos.");
			           	else 
			           	printf ("\nEl primer d�gito es multiplo de almenos uno de los d�gitos.");
					   }
					   else 
					   printf ("\nEl entero debe ser de cuatro d�gitos, berifiqeu que asi sea.");
					   getch ();
               	       break; 
               case 45:
               	       printf ("\nIngrese el entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==2){
			           fun45 (x);
					   }
					   else 
					   printf ("\nEl entero debe ser de dos d�gitos, berifique que asi sea.");
			           getch ();
               	       break;
			   case 46:
			   	       printf ("\nIngrese el entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==2){
			           fun46 (x);
					   }
					   else 
					   printf ("\nEl entero debe ser de dos d�gitos, berifique que asi sea.");
			           getch ();
			   	       break;
			   case 47:
                       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           printf ("\nIngrese el segundo entero : ");
			           scanf ("%d", &y);
			           if (x>y)
			           funcion47 (x, y);
			           else 
			           funcion47 (y, x);
			           getch ();
			           break;
			   case 48:
			   	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (x<100){
			           	if (primo (x)==1)
			           	printf ("\nEs un n�mero primo.");
			           	else 
			           	printf ("\nNo es un n�mero primo.");
					   }
					   else 
					   printf ("\nEl numero debe ser menor que 100, berifique que asi sea.");
					   getch ();
			   	       break;
			   case 49:
			   	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (x%4==0){
			           	if (primo (x%10)==1)
			           	printf ("\nEl �ltimo d�gito es primo.");
			           	else 
			           	printf ("\nEl �ltimo d�gito no es primo.");
					   }
					   else 
					   printf ("\nEl n�mero debe ser multiplo de 4.");
					   getch ();
			   	       break;
			   case 50:
			   	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (x<100){
			           	fun50 (x);
					   }
					   else 
					   printf ("\nEl n�mero debe menor que 100.");
					   getch ();
			   	       break;
               case 0:
                       system ("cls");
                       opc=-1;
                       break;
                }
             }
             break;
       	case 0:
               //getch () //usa la libreria stdio.h
               break;
        }
	}while (opc != 0);
         printf ("\nGracias por utilizar nuestro sistemas, Adios  "); // usa la libreria stdio.h
         getch();                                           // usa la librer�a conio.h
}

