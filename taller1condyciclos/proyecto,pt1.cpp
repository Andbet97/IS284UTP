//Proyecto n° 1, parte 1, programación 2

/*------------------------CONDICIONALES---------------------------------*/

//librerias

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//variables globales

//funciones prototipo

int afirmacion (int a)      //punto n°1, determinar si un número termina en 4
{
	if ((a%10)==4)
	return 1;
	else
	return 0;
}

int cifras (int n)        //función que cuenta el número de dígitos de un entero
{
    int c=1;
	while (n>=10)
	{
		c++;
		n=(n/10);
	}
	return c;
}

int sumadigitos (int n)      //punto n°4, función que me devuelve la suma de los dígitos de un entero
{
	int a=0;
	while (n>=10){
		a=a+(n%10);
		n=n/10;
	}
	return (n+a);
}

int pares (int n)       //punto n°5, función que me devuelve un booleano afirmando o negando si la suma de los digitos es par o no
{
  int a=0;
  while (n>0){
		if (((n%10)%2)==0)
		a++;
		n=n/10;
	}
    return a;
}

int primo (int n)      //punto n°6, función que me determina si un número es primo o no
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

int multiplo (int n)    // función sólo para enteros de dos dígitos, determina si uno es múltiplo de otro.
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

int digitosiguales (int n)    //función sólo para enteros de dos dígitos, determina si ambos digitos son iguales.
{
	if ((n/10)==(n%10))
	return 1;  //ambos son iguales
	else
	return 0;   // no son iguales
}

int mayor (int n, int a)   //fución que determina que número es mayor
{
	if (n>a)
	return 1;
	else
	return 0;
}

int digitoigual (int a, int b) // función solo para números de dos dígitos, determina si existen dígitos en común.
{
    int a1=a/10, a2=a%10, b1= b/10, b2=b%10;
    if((a1==b1) || (a2==b2) || (a1==b2) || (a2==b1))
      return 1;
    else
      return 0;
}

int mostrardigitos (int n)
{
    printf ("\nLos dígitos del número son : ");
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
              printf ("\nLa suma de todos los dígitos es : %d",(sumadigitos (x) + sumadigitos (y)) );
              else{
                   if ((primo(b)==1)&&(b<10))
                    printf ("\nEl producto de los números es : %d", (x*y));
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
printf ("El dígito mayor es el primero");
else { if ((b>(n%10))&&(b>(n/100)))
      printf ("El dígito mayor, es el segundo");
      else{
	  if (((n%10)>(n/100))&&((n%10)>b))
      printf ("El dígito mayor, es el tercero");
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
	int c=0;         /*número de veces que el primer dígito es multilo de otro dígito*/
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
 	printf ("\nLa suma de sus dígitos es : %d", n/10+n%10);
 	else {
 		if ((primo (n)==1)&&(n<10))
 		printf ("\nEl último dígito es : %d ", n%10);
 		else {
 			if ((n%5==0)&&(n<30))
 			printf ("\nEl primer dígito es : %d", primerdigito (n));
 			else 
 			printf ("\nNo cumple ninguna de las anteriores.");
		 }
	 }
	 return 0;
 }
 
 int fun46 (int n)
 {
 	if (n%10==1)
 		printf ("\nEl primer dígito es : %d", primerdigito (n));
 		else {
 			if (n%10==2)
 				printf ("\nLa suma de sus dígitos es : %d", sumadigitos (n));
 				else {
 					if (n%10==3)
 					printf ("\nEl producto entre sus dígitos es : %d", primerdigito (n)*3);
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
		 printf ("\nEl cuadrado del número es : %d", n*n);
		 else {
		 	if (n%6==0)
		 	printf ("\nEl primer dígito es : %d", primerdigito (n));
		 	else 
		 	printf ("\nNo cumple con las condiciones anteriores.");
		 }
	 }
	 return 0;
 }
 
/*--------------------------------------------------Menus-------------------------------*/

int menu ()         // función menú principal
{
    printf ("       MENU PRINCIPAL      \n\n\n");
    printf ("1. Ejercicios del 1 al 10.\n");
    printf ("2. Ejercicios del 11 al 20.\n");
    printf ("3. Ejercicios del 21 al 30.\n");
    printf ("4. Ejercicios del 31 al 40.\n");
    printf ("5. Ejercicios del 41 al 50.\n");
    printf ("0. Salir.\n");
}

int opciones (int n)    //menú fragmentado en 5 partes
{
    switch (n){
    case 1:          //del 1 al 10
   	       printf ("1. Leer un número entero y determinar si es un número terminado en 4. \n");
           printf ("2. Leer un número entero y determinar si tiene 3 dígitos. \n");
           printf ("3. Leer un número entero y determinar si es negativo.\n");
           printf ("4. Leer un número entero de dos dígitos y determinar a cuánto es\n   igual la suma de sus dígitos.\n");
           printf ("5. Leer un número entero de dos dígitos y determinar si ambos\n   dígitos son pares.\n");
           printf ("6. Leer un número entero de dos dígitos menor que 20 y determinar\n   si es primo.\n");
           printf ("7. Leer un número entero de dos dígitos y determinar si es primo y\n   además si es negativo.\n");
           printf ("8. Leer un número entero de dos dígitos y determinar si sus dos dígitos\n   son primos.\n");
           printf ("9. Leer un número entero de dos dígitos y determinar si un dígito\n   es múltiplo del otro.\n");
           printf ("10. Leer un número entero de dos dígitos y determinar si los dos\n    dígitos son iguales.\n");
           printf ("0. Regresar al menú principal.\n");
           break;
    case 2:        //del 11 al 20
           printf ("11. Leer dos números enteros y determinar cuál es el mayor.\n");
           printf ("12. Leer dos números enteros de dos dígitos y determinar si tienen \n    dígitos comunes.\n");
           printf ("13. Leer dos números enteros de dos dígitos y determinar si la suma de\n    los dos números origina un número par.\n");
           printf ("14. Leer dos números enteros de dos dígitos y determinar a cuánto es igual \n    la suma de todos los dígitos.\n");
           printf ("15. Leer un número entero de tres dígitos y determinar a cuánto es igual\n    la suma de sus dígitos.\n");
           printf ("16. Leer un número entero de tres dígitos y determinar si al menos dos de\n    sus tres dígitos son iguales.\n");
           printf ("17. Leer un número entero de tres dígitos y determinar en qué posición está\n    el mayor dígito.\n");
           printf ("18. Leer un número entero de tres dígitos y determinar si algún dígito es \n    múltiplo de los otros.\n");
           printf ("19. Leer tres números enteros y determinar cuál es el mayor. \n    Usar solamente dos variables.\n");
           printf ("20. Leer tres números enteros y mostrarlos ascendentemente.\n");
           printf ("0. Regresar al menú principal.\n");
           break;
    case 3:         //del 21 al 30
           printf ("21. Leer tres números enteros de dos dígitos cada uno y determinar en cuál\n    de ellos se encuentra el mayor dígito.\n");
           printf ("22. Leer un número entero de tres dígitos y determinar si el primer dígito es\n    igual al último.\n");
           printf ("23. Leer un número entero de tres dígitos y determinar cuántos dígitos\n    primos tiene.\n");
           printf ("24. Leer un número entero de tres dígitos y determinar cuántos dígitos\n    pares tiene.\n");
           printf ("25. Leer un número entero de tres dígitos y determinar si alguno de sus dígitos\n    es igual a la suma de los otros dos.\n");
           printf ("26. Leer un número entero de cuatro dígitos y determinar a cuanto es igual\n    la suma de sus dígitos.\n");
           printf ("27. Leer un número entero de cuatro dígitos y determinar cuántos\n    dígitos pares tiene.\n");
           printf ("28. Leer un número entero menor que 50 y positivo y determinar si\n    es un número primo.\n");
           printf ("29. Leer un número entero de cinco dígitos y determinar si es \n    un número capicúo. Ej. 15651, 59895.\n");
           printf ("30. Leer un número entero de cuatro dígitos y determinar si el segundo\n    dígito es igual al penúltimo.\n");
           printf ("0. Regresar al menú principal.\n");
           break;
    case 4:         //del 31 al 40
           printf ("31. Leer un número entero y determina si es igual a 10.\n");
           printf ("32. Leer un número entero y determinar si es múltiplo de 7.\n");
           printf ("33. Leer un número entero y determinar si termina en 7.\n");
           printf ("34. Leer un número entero menor que mil y determinar cuántos dígitos tiene.\n");
           printf ("35. Leer un número entero de dos dígitos, guardar cada dígito en una variable\n    diferente y luego mostrarlas en pantalla.\n");
           printf ("36. Leer un número entero de 4 dígitos y determinar si tiene mas dígitos\n    pares o impares.\n");
           printf ("37. Leer dos números enteros y determinar cuál es múltiplo de cuál.\n");
           printf ("38. Leer tres números enteros y determinar si el último dígito de los\n    tres números es igual.\n");
           printf ("39. Leer tres números enteros y determina si el penúltimo dígito de los\n    tres números es igual.\n");
           printf ("40. Leer dos números enteros y si la diferencia entre los dos es menor o igual\n    a 10 entonces mostrar en pantalla todos los enteros comprendidos entre\n    el menor y el mayor de los números leídos.\n");
           printf ("0. Regresar al menú principal.\n");
           break;
    case 5:        //del 41 al 50
           printf ("41. Leer dos números enteros y determinar si la diferencia entre los dos\n    es un número primo.\n");
           printf ("42. Leer dos números enteros y determinar si la diferencia entre los dos\n    es un número par.\n");
           printf ("43. Leer dos números enteros y determinar si la diferencia entre los dos \n    es un número divisor exacto de alguno de los dos números.\n");
           printf ("44. Leer un número entero de 4 dígitos y determinar si el primer dígito\n    es múltiplo de alguno de los otros dígitos.\n");
           printf ("45. Leer un número entero de 2 dígitos y si es par mostrar en pantalla\n    la suma de sus dígitos, si es primo y menor que 10 mostrar en pantalla \n    su último dígito y si es múltiplo de 5 y menor que 30 mostrar \n    en pantalla el primer dígito.\n");
           printf ("46. Leer un número entero de 2 dígitos y si terminar en 1 mostrar en pantalla\n    su primer dígito, si termina en 2 mostrar en pantalla la suma de sus \n    dígitos y si termina en 3 mostrar en pantalla el producto de\n    sus dos dígitos.\n");
           printf ("47. Leer dos números enteros y si la diferencia entre los dos números es par\n    mostrar en pantalla la suma de los dígitos de los números, si dicha \n    diferencia es un número primo menor que 10 entonces mostrar en pantalla \n    el producto de los dos números y si la diferencia entre ellos terminar\n    en 4 mostrar en pantalla todos los dígitos por separado.\n");
           printf ("48. Leer un número entero y si es menor que 100 determinar si es primo.\n");
           printf ("49. Leer un número entero y si es múltiplo de 4 determinar si su \n    último dígito es primo.\n");
           printf ("50. Leer un número entero y si es múltiplo de 4 mostrar en pantalla su mitad,\n    si es múltiplo de 5 mostrar en pantalla su cuadrado y si es múltiplo de 6\n    mostrar en pantalla su primer dígito.\n    Asumir que el número no es mayor que 100.\n");
           printf ("0. Regresar al menú principal.\n");
           break;
    }
}

//función principal

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
		printf ("\n\nIngrese la opción seleccionada : "); // usa la libreria stdio.h
        scanf ("%d",&opc); // usa la libreria stdio.h
        switch (opc){
        case 1:{
                system ("cls");
                opciones (1);
                printf ("\n\nIngrese la opción seleccionada : "); // usa la libreria stdio.h
                scanf ("%d",&opc2); // usa la libreria stdio.h
                switch (opc2){
                case 1:
        	           printf ("\nIngrese el número entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);// usa la libreria stdio.h
        	           if ((afirmacion (x))==1)
	                   printf ("\nEl número %d es un número terminado en 4", x);// usa la libreria stdio.h
	                   else
	                   printf ("\nEl numero %d es un numero que no termina en 4", x);// usa la libreria stdio.h
	                   getch ();// usa la libreria conio.h
                       break;
	            case 2:
		               printf ("\nIngrese el entero n : ");// usa la libreria stdio.h
		               scanf ("%d", &x);// usa la libreria stdio.h
		               if ((cifras (x))<3)
		               printf ("\nEl entero tiene menos de tres dígitos.");// usa la libreria stdio.h
	                   else if ((cifras (x))>3)
		               printf ("\nEl entero tiene mas de tres dígitos.");// usa la libreria stdio.h
		               else
		               printf ("\nEl entero tiene tres dígitos.");// usa la libreria stdio.h
		               getch ();// usa la libreria conio.h
		               break;
		        case 3:
		               printf ("\nIngrese el entero n : ");// usa la libreria stdio.h
				       scanf ("%d", &x);
				       if (x<0)
				       printf ("\nEl número es negativo.");// usa la libreria stdio.h
				       else
		        	   printf ("\nEl número es positivo.");// usa la libreria stdio.h
		        	   getch ();        // usa la libreria conio.h
		        	   break;
		        case 4:
		               printf ("\nIngrese el entero n : ");// usa la libreria stdio.h
				       scanf ("%d", &x);// usa la libreria stdio.h
				       if (cifras (x)==2)
				       printf ("\nLa suma de los dígitos del entero %d es : %d ", x, sumadigitos (x));// usa la libreria stdio.h
				       else
				       printf ("\nEl número debe ser de dos dígitos, por favor verifique que asi sea.");// usa la libreria stdio.h
				       getch ();	// usa la libreria conio.h
				       break;
				case 5:
                       printf ("\nIngrese el entero n : ");// usa la libreria stdio.h
				       scanf ("%d", &x);// usa la libreria stdio.h
				       if (cifras (x)==2){
                            if (pares (x)== cifras (x))
				            printf ("\nAmbos dígitos del entero %d son pares.", x);// usa la libreria stdio.h
                            else
                            printf ("\nLos dígitos, o uno de ellos, no son pares.");// usa la libreria stdio.h
                            }
				       else
					   printf ("\nEl número debe ser de dos dígitos, por favor verifique que asi sea.");// usa la libreria stdio.h
                       getch ();// usa la libreria conio.h
                       break;
                case 6:
                       printf ("\nIngrese el entero n : ");// usa la libreria stdio.h
				       scanf ("%d", &x);// usa la libreria stdio.h
				       if ((x<20)&&(cifras (x)==2)){
				            if (primo (x)==1)
                            printf ("\nEL número es primo.");// usa la libreria stdio.h
                            else
                            printf ("\nEl número no es primo.");// usa la libreria stdio.h
					        }
                       else
                       printf ("\nEl número debe ser de dos dígitos y no debe ser mayor que 20,\npor favor verifique que asi sea.");// usa la libreria stdio.h
					   getch ();// usa la libreria conio.h
                       break;
				case 7:
                       printf ("\nIngrese el entero n : ");// usa la libreria stdio.h
				       scanf ("%d", &x);// usa la libreria stdio.h
				       if (x<0){
				       	if (cifras (-(x))==2){
				            if (primo (-(x))==1)
				            	printf ("\nEL número es primo negativo.");  // usa la libreria stdio.h
                            else
                            	printf ("\nEl número no es primo y es negativo.");// usa la libreria stdio.h
                         }
                        else
                        printf ("\nEl número debe ser de dos dígitos, por favor verifique que asi sea.");// usa la libreria stdio.h
					   }
				       else{
				       	if (cifras (x)==2){
				            if (primo (x)==1)
				            	printf ("\nEL número es primo positivo.");  // usa la libreria stdio.h
                            else
                            	printf ("\nEl número no es primo y es positivo.");// usa la libreria stdio.h
                         }
                        else
                        printf ("\nEl número debe ser de dos dígitos, por favor verifique que asi sea.");// usa la libreria stdio.h
					   }
					   getch ();// usa la libreria conio.h
                       break;
				case 8:
					   printf ("\nIngrese el entero n : ");
					   scanf ("%d", &x);
					   if (cifras (x) == 2){
					   	if (cifras (x) == contarprimo (x))
					   	printf ("\nAmbos dígitos del entero %d son primos.", x);// usa la libreria stdio.h
					   	else
					   	printf ("\nUno o ambos dígitos del entero %d no son primos.", x);// usa la libreria stdio.h
					   }
					   else
					   printf ("\nEl número debe ser de dos dígitos, por favor verifique que asi sea.");// usa la libreria stdio.h
					   getch ();// usa la libreria conio.h
					   break;
				case 9:
					   printf ("\nIngrese el entero n : ");
					   scanf ("%d", &x);
					   if (cifras (x)==2){
					   	if (multiplo (x)==1)
					   printf ("\n%d es múltiplo de %d.", (x%10), (x/10));
					    else{
					    	if (multiplo (x) == 2)
					    	printf ("\n%d es multiplo de %d.", (x/10), (x%10));
					    	else
					    	printf ("\nNinguno es múltiplo del otro.");
						}
					   }
					   else
					   printf ("\nEl número debe ser de dos dígitos, por favor verifique que asi sea.");// usa la libreria stdio.h
					   getch ();// usa la libreria conio.h
					   break;
				case 10:
					   printf ("\nIngrese el entero n : ");
					   scanf ("%d", &x);
					   if (cifras (x)==2){
					   	if (digitosiguales (x)==1)
					   	printf ("\nAmbos dígitos son iguales.");
					   	else
					   	printf ("\nLos dígitos son diferentes.");
					   }
					   else
					   printf ("\nEl número debe ser de dos dígitos, por favor verifique que asi sea.");// usa la libreria stdio.h
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
               printf ("\n\nIngrese la opción seleccionada : "); // usa la libreria stdio.h
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
                       printf ("\nNo tienen dígitos en común.");
                       else
                       printf ("\nTienen dígitos en común.");
                       }
                       else
                       printf ("\nAmbos números deben ser de dos dígitos, por favor berifique que asi sea.");
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
                       printf ("\nLa suma de ambos número es par.");
                       else
                       printf ("\nLa suma de ambos número es impar");
                       }
                       else
                       printf ("\nAmbos números deben ser de dos dígitos, por favor berifique que asi sea.");
                       getch (); 
					   break; 
			   case 14:
			           printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           printf ("\nIngrese el segundo entero : ");
			           scanf ("%d", &y);
			           if (((cifras (x))==2)&&((cifras (y))==2))
			           printf ("\nLa suma de todos los dígitos es igual a : %d", ((sumadigitos (x))+(sumadigitos (y))));
			           else
			           printf ("\nAmbos números deben ser de dos dígitos, por favor berifique que asi sea.");
					   getch ();
					   break;
			  case 15:
			           printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if ((cifras (x))==3)
			           printf ("\nLa suma sus dígitos es igual a : %d", sumadigitos (x));
			           else
			           printf ("\nEl número debe ser de tres dígitos, por favor berifique que asi sea.");
					   getch ();
					   break;
			   case 16:
			   	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==3){
			           	if (tresdigitosiguales (x)==1)
			           	printf ("\nAlmenos dos de sus dígitos son iguales");
			           	else
			           	printf ("\nNo tiene dígitos iguales");
					   }
				       else
					   printf ("\nEl número debe ser de tres dígitos, por favor berifique que asi sea.");
					   getch ();
					   break;
			   case 17:
			           printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
					   if (cifras (x)==3){
					   	posicionmayor (x);
					   }
					   else
					   printf ("\nEl número debe ser de tres dígitos, por favor berifique que asi sea.");
					   getch ();
					   break;
			   case 18:
			           printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
					   if (cifras (x)==3){
					            if (tresdigitosmultiplo (x)==1)
					            printf ("\nAlmenos uno de los dígitos es múltiplo de otro dígito.");	
								else 
								printf ("\nNinguno de los dígitos es múltiplo de otro.");					   
					   }
					   else
					   printf ("\nEl número debe ser de tres dígitos, por favor berifique que asi sea.");
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
               printf ("\n\nIngrese la opción seleccionada : "); // usa la libreria stdio.h
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
			           	printf ("\nEl mayor dígito es : %d y se encuentra en el entero %d", mayordigito (x), x);
			           	else{
			           		if ((mayordigito (y)>mayordigito (x))&&(mayordigito (y)>mayordigito (z)))
			           			printf ("\nEl mayor dígito es : %d y se encuentra en el entero %d", mayordigito (y), y);
			           		else 
			           			printf ("\nEl mayor dígito es : %d y se encuentra en el entero %d", mayordigito (z), z);
						   }
					   }
					   else
					   printf ("\nLos números deben ser de dos dígitos, berifique que asi sea.");
					   getch ();
					   break;
               case 22:
               	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==3){
			           	if (x/100==x%10)
			           	printf ("\nEl primer dígito es igual al último dígito.");
			           	else
			           	printf ("\nEl primer dígito no es igual al último dígito.");
					   }
					   else 
					   printf ("\nEl número debe ser de tres dígitos, berifique que asi sea.");
					   getch ();
               	       break;
               case 23:
               	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==3){
			           	printf ("\nEl entero %d tiene %d dígitos primos.", x, contarprimo (x));
					   }
					   else 
					   printf ("\nEl número debe ser de tres dígitos, berifique que asi sea.");
					   getch ();
               	       break;
               case 24:
               	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==3){
			           	printf ("\nEl entero %d tiene %d dígitos pares.", x, contarpares (x));
					   }
					   else 
					   printf ("\nEl número debe ser de tres dígitos, berifique que asi sea.");
					   getch ();
               	       break;
               case 25:
               	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==3){
			           	if (fun25 (x)==1)
			           	printf ("\nLa suma de dos dígitos del entero es igual al tercer dígito.");
			           	else
			           	printf ("\nNinguna de las sumas de dos de los dígitos es igual a algun dígito del entero.");
					   }
					   else 
					   printf ("\nEl número debe ser de tres dígitos, berifique que asi sea.");
					   getch ();
               	       break;
			   case 26:
			   	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==4){
			           printf ("\nLa suma de sus dígitos es : %d", sumadigitos (x));
					   }
					   else 
					   printf ("\nEl número debe ser de cuatro dígitos, berifique que asi sea.");
					   getch ();
			   	       break;
			   case 27:
			   	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==4){
			           printf ("\nEl entero %d tiene %d dígitos pares.", x, contarpares (x));
					   }
					   else 
					   printf ("\nEl número debe ser de cuatro dígitos, berifique que asi sea.");
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
					   printf ("\nEl número debe ser mayor que 0 y menor que 50, berifique que asi sea.");
					   getch ();
			   	       break;
			   case 29:
			   	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==5){
			           if (capicuo (x)==1)
			           printf ("\nEl entero es un número capicúo.");
			           else
			           printf ("\nEl entero no es un número capicúo.");
					   }
					   else 
					   printf ("\nEl número debe ser de cinco dígitos, berifique que asi sea.");
					   getch ();
			   	       break;
			   case 30:	
			           printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==4){
			           if (fun30 (x)==1)
			           printf ("\nEl segundo y el tercer dígito del entero son íguales.");
			           else
			           printf ("\nEl segundo y el tercer dígito del entero no son íguales.");
					   }
					   else 
					   printf ("\nEl número debe ser de cuatro dígitos, berifique que asi sea.");
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
               printf ("\n\nIngrese la opción seleccionada : "); // usa la libreria stdio.h
               scanf ("%d",&opc2); // usa la libreria stdio.h
               switch (opc2){
               case 31:
               	       printf ("\nIngrese el número entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           if (x==10)
        	           printf ("\nEl entero es igual a 10.");
        	           else
        	           printf ("\nEl entero no es igual a 10.");
        	           getch ();
               	       break;
               case 32:
               	       printf ("\nIngrese el número entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
					   if (fun32 (x)==1)
					   printf ("\nEl entero es múltiplo de 7."); 
					   else
					   printf ("\nEl entero no es múltiplo de 7."); 
					   getch ();
               	       break;
               case 33:
               	       printf ("\nIngrese el número entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           if (x%10==7)
        	           printf ("\nEl entero termina en 7.");
        	           else 
        	           printf ("\nEl entero no termina en 7.");
        	           getch ();
               	       break;
               case 34:
               	       printf ("\nIngrese el número entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           if (x<=1000){
        	           printf ("\nEl entero tiene %d dígitos.", cifras (x));	
					   }
					   else 
					   printf ("\nEl entero debe ser menor que 1000, berifique que asi sea.");
					   getch ();
               	       break;
               case 35:
               	       printf ("\nIngrese el número entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           if (cifras (x)==2){
        	           fun35 (x);	
					   }
					   else 
					   printf ("\nEl entero debe ser de dos dígitos, berifiue que asi sea.");
					   getch ();
               	       break;
			   case 36:
			   	       printf ("\nIngrese el número entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           if (cifras (x)==4){
        	           if (contarpares (x)==contarimpares (x))
					   printf ("\nEl entero tiene igual número de dígitos pares y de impares.");
					   else {
					   	if (contarpares (x)>contarimpares (x))
						   printf ("\nEl entero tiene más dígitos pares.");
						   else
						   printf ("\nEl entero tiene más dígitos impares.");
					   } 
					   }
					   else 
					   printf ("\nEl entero debe ser de cuatro dígitos, berifiue que asi sea.");
					   getch ();
			   	       break;
			   case 37:
			   	       printf ("\nIngrese el primer número entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           printf ("\nIngrese el segundo número entero : ");// usa la libreria stdio.h
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
			   	       printf ("\nIngrese el primer número entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           printf ("\nIngrese el segundo número entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&y);
        	           printf ("\nIngrese el primer número entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&z);
        	           if ((x%10==y%10)&&(z%10==y%10))
        	           printf ("\nEl último dígito de los enteroes es igual.");
        	           else 
        	           printf ("\nEl último dígito de los enteroes  no es igual.");
        	           getch ();
			   	       break;
			   case 39:
			   	       printf ("\nIngrese el primer número entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           printf ("\nIngrese el segundo número entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&y);
        	           printf ("\nIngrese el primer número entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&z);
        	           if (((x%100)/10==(y%100)/10)&&((z%100)/10==(y%100)/10))
        	           printf ("\nEl penútimo dígito de los enteroes es igual.");
        	           else 
        	           printf ("\nEl penúltimo dígito de los enteroes  no es igual.");
        	           getch ();
			   	       break;
			   case 40:
			   	       printf ("\nIngrese el primer número entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           printf ("\nIngrese el segundo número entero : ");// usa la libreria stdio.h
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
               printf ("\n\nIngrese la opción seleccionada : "); // usa la libreria stdio.h
               scanf ("%d",&opc2); // usa la libreria stdio.h
               switch (opc2){
               case 41:
               	       printf ("\nIngrese el primer número entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           printf ("\nIngrese el segundo número entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&y);
        	           if (x>y){
        	           	if (primo (x-y)==1)
        	           	printf ("\nLa diferencia entre los enteros en un número primo.");
        	           	else
        	           	printf ("\nLa diferencia entre los enteros en un número primo.");
					   }
					   else {
					   	if (primo (y-x)==1)
        	           	printf ("\nLa diferencia entre los enteros en un número primo.");
        	           	else
        	           	printf ("\nLa diferencia entre los enteros en un número primo.");
					   }
					   getch ();
               	       break;
               case 42:
               	       printf ("\nIngrese el primer número entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           printf ("\nIngrese el segundo número entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&y);
        	           if (x>y){
        	           	if (x-y%2==0)
        	           	printf ("\nLa diferencia entre los enteros es un número par.");
        	           	else
        	           	printf ("\nLa diferencia entre los enteros no es un número par.");
					   }
					   else {
					   	if (y-x%2==0)
        	           	printf ("\nLa diferencia entre los enteros es un número par.");
        	           	else
        	           	printf ("\nLa diferencia entre los enteros no es un número par.");
					   }
					   getch ();
               	       break;
               case 43:
               	       printf ("\nIngrese el primer número entero : ");// usa la libreria stdio.h
        	           scanf ("%d",&x);
        	           printf ("\nIngrese el segundo número entero : ");// usa la libreria stdio.h
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
			           	printf ("\nEl primer dígito no es multiplo de almenos uno de los dígitos.");
			           	else 
			           	printf ("\nEl primer dígito es multiplo de almenos uno de los dígitos.");
					   }
					   else 
					   printf ("\nEl entero debe ser de cuatro dígitos, berifiqeu que asi sea.");
					   getch ();
               	       break; 
               case 45:
               	       printf ("\nIngrese el entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==2){
			           fun45 (x);
					   }
					   else 
					   printf ("\nEl entero debe ser de dos dígitos, berifique que asi sea.");
			           getch ();
               	       break;
			   case 46:
			   	       printf ("\nIngrese el entero : ");
			           scanf ("%d", &x);
			           if (cifras (x)==2){
			           fun46 (x);
					   }
					   else 
					   printf ("\nEl entero debe ser de dos dígitos, berifique que asi sea.");
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
			           	printf ("\nEs un número primo.");
			           	else 
			           	printf ("\nNo es un número primo.");
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
			           	printf ("\nEl último dígito es primo.");
			           	else 
			           	printf ("\nEl último dígito no es primo.");
					   }
					   else 
					   printf ("\nEl número debe ser multiplo de 4.");
					   getch ();
			   	       break;
			   case 50:
			   	       printf ("\nIngrese el primer entero : ");
			           scanf ("%d", &x);
			           if (x<100){
			           	fun50 (x);
					   }
					   else 
					   printf ("\nEl número debe menor que 100.");
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
         getch();                                           // usa la librería conio.h
}

