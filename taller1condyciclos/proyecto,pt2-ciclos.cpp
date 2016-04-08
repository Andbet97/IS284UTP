//Proyecto n� 1, parte 2, programaci�n 2

/*------------------------CICLOS---------------------*/

//librerias

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

//variables globales

//funciones prototipo

/*------------------------------------------FUNCIONES---------------------------------------------*/

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

int funcdig (int r, int n)
{
    while (n>=r){
    printf ("\n%d", r);
    (r++);
  }
  return 0;
}

int fun11 (int n)
{
	int a=n%10;
	n=n/10;
	if (a>n){
	while (a>=n){
    printf ("\n%d", n);
    (n++);
  }
  return 0;
	}
	else{
	while (n>=a){
    printf ("\n%d", a);
    (a++);
  }
  return 0;
	}
}

int mostrarpares (int n, int r)
{
    while (n>=r){
          if (r%2==0)
          printf ("\n%d", r);
          r++;
  }
  return 0;
}

int mostrar6 (int n)
{
    int r=25;
    while (n>=r){
          if (r%10==6)
          printf ("\n%d", r);
          r++;
  }
  return 0;
}

 int mostrardigitos (int n)
 {
    int a=(n/10)%10;
    printf ("\nLos n�mero comprendidos entre 1 y el primer d�gito son : ");
    funcdig (1, n/100);
    printf ("\nLos n�mero comprendidos entre 1 y el segundo d�gito son : ");
    funcdig (1, a);
    printf ("\nLos n�mero comprendidos entre 1 y el tercer d�gito son : ");
    funcdig (1, n%10);
    getch ();
}

int sumanumero (int n)
{
    int c=0;
    while (n>0){
          c+=n;
          n--;
          }
          return c;
}

int contar1 (int x, int a)
{
    for (a<x; x>a; a++){
        if ((a%10)==4)
        printf ("\n%d", a);
        }
        return 0;
}

int digito1 (int n)
{
    int a=(n/10)%10;
    if ((n/100==1)||(a==1)||(n%10==1))
    printf ("\nEl n�mero contiene el d�gito 1.");
    else
    printf ("\nEl n�mero no contiene el d�gito 1.");
}

int multiplos5 (int n)
{
	int c=1;
	printf ("\nlos multiplo de 5 son : ");
	while (c<=n/5){
		printf ("\n%d",5*c);
		c++;
	}
	return 0;
}

int multiplos3 (int n)
{
	int c=1;
	printf ("\nlos primeros 20 multiplos de 3 son : ");
	while (c<=n){
		printf ("\n%d",3*c);
		c++;
	}
	return 0;
}

int sumarmultiplos3 (int n)
{
	int c=1, a=0;
	while (c<=n){
		a=(a+(3*c));
		c++;
	}
	return a;
}

int sumarmultiplos2 (int n)
{
	int c=1, a=0;
	while (c<=n){
		a=(a+(2*c));
		c++;
	}
	return a;
}

int fun (int n, int a)
{
	int c=1;
	printf ("\nEl promedio de los primeros %d multiplos de 2 es : %d", n, sumarmultiplos2 (n)/n);
	printf ("\nlos multiplo de 5 son : ");
	while (c<=a){
		if ((sumarmultiplos2 (n)/n)>(5*c))
		printf ("\n%d > %d", sumarmultiplos2 (n)/n, 5*c);
		else
		printf ("\n%d < %d", sumarmultiplos2 (n)/n, 5*c);
		c++;
	}
	return 0;
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

int fun17 (int n, int a)
{
	int c=((a/5)+1);
	printf ("\nlos multiplo de 5 son : ");
	while (c<=n/5){
		printf ("\n%d",5*c);
		c++;
	}
	return 0;
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

int divisores (int n)
{
	int r=1;
	while (n>=r){
		if (n%r==0)
		printf ("\n%d", r);
		r++;
	}
	return 0;
}

int veces1 (int n)
{
	int c=0;
	while (n>0){
		if (n%10==1)
		c++;
		n=n/10;
	}
	return c;
}

int sumapares (int n)
{
   int c=0;
   while (n>0){
   	if ((n%10)%2==0)
   	c+=n%10;
   	n=n/10;
   }
   return c;
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

int primerdigito (int n)
{
	while (n>10){
		n=n/10;
	}
	return n;
}

double fun31 (void)
{
	int n;
	float a=0;
	float d=0;
	do {
		printf ("\nIngrese : ");
		scanf ("%d", &n);
		if (n%10==5){
			a+=n;
		    d++;
		}
	} while (n != 0);
	printf ("\nEl promedio de los n�meros terminados en 5 es : %g", (a/d));
	return 0;
}

int fun32 (void)
{
	int n;
	int a=0;
	int d=0;
	do {
		printf ("\nIngrese : ");
		scanf ("%d", &n);
		if (primo (n)==1){
			a+=n;
		    d++;
		}
	} while (n != 0);
	printf ("\nEl promedio de los n�meros primos ingresados es : %d", (a/d));
	return 0;
}

int primoraiz (int n)
{
	int c=1;
	int a=0;
	while (c<= (sqrt (n))){
		if (n%c==0)
		a++;
		c++;
	}
	return a;
}

int fun33 (void)
{
	int n=32768;
	while (primoraiz (n) != 1){
		n--;
	}
	return n;
}

int fun34 (void)
{
	int c=10;
	while (c>0){
		printf ("\n%d", 11-c);
		c--;
	}
	return 0;
}

int tablamultiplicar (int n)
{
	int a;
	for (a=1; a<=10; a++){
		printf ("\n%d * %d = %d", n, a, n*a);
	}
	return 0;
}

int tablas (int n)
{
	int c;
	for (c=1; c<=10; c++){
		tablamultiplicar (c);
		printf ("\n");
	}
	return 0;
}

int fibonacci (int n)
{
	int a=0;
	int b=1;
	int c=a+b;
	if (n==0)
	return 0;
	else{
	for (n>0; n>2; n--){
		a=b;
		b=c;
		c=a+b;
	}
	return c;}
}

int fun39 (void)
{
	int c=0;
	while (fibonacci (c) <= 10000) {
		c++;
	}
	printf ("\nFibonacci %d es igual a %d", c, fibonacci (c));
	return 0;
}

int fun40 (int n)
{
	int c=0;
	int d=0;
	while (fibonacci (c) <= n){
		if (fibonacci (c)==n)
		d++;
		c++;
	}
	return d;
}

int fun41 (void)
{
	int c=0;
	int a=0;
	while ((fibonacci (c))<=100){
		a+=fibonacci (c);
		c++;
	}
	printf ("\nLa suma de los fibonacci comprendidos entre 0 y 100 es : %d", a);
	return 0;
}

int fun42 (void)
{
	int c=0;
	int a=0;
	while (fibonacci (c)<=1000){
		a+=fibonacci (c);
		c++;
	}
	printf ("\nEl promedio de los fibonacci comprendidos entre 0 y 1000 es : %d", a/c);
	return 0;
}

int fun43 (int d, int a)
{
    //int d ---> desde 
    //int a ---> hasta
    int c;
    for(c=0; fibonacci (c)<a; c++){
             if (fibonacci (c)>d)
             printf ("\nFibonacci %d igual a : %d", c, fibonacci (c));
             }
             return 0;
}

int factorial (int n)
{
    int c=1;
    while (n>0){
          c*=n;
          n--;
          }
          return c;
}

int fun45 (int n)
{
    int c;
    for (c=1; n>=c; c++){
        printf ("\nFactorial de %d : %d", c, factorial (c));
    }
    return 0;
}

int fun46 (int n)
{
      int c;
      int a=0;
      for (c=1; n>=c; c++){
          a+=factorial (c);
      }
      return a;
}

int fun48 (void)
{
    int c;
    int a;
    for (a=2 ;a<12; (c+1)/2){
    	    for (c=a/2; c>=a/2; a++){
      		printf ("%d %d", a-2, c);
            printf ("\n");
        }
        }
        return 0;
}

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

/*----------------------------------------------MENUS---------------------------------------------------------------*/

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
   	       printf ("1. Leer un n�mero entero y mostrar todos los enteros comprendidos entre 1 \n   y el n�mero le�do.\n");
           printf ("2. Leer un n�mero entero y mostrar todos los pares comprendidos entre 1 y el n�mero le�do.\n");
           printf ("3. Leer un n�mero entero y mostrar todos los divisores exactos del n�mero\n   comprendidos entre 1 y el n�mero le�do.\n");
           printf ("4. Leer dos n�meros y mostrar todos los enteros comprendidos entre ellos.\n");
           printf ("5. Leer dos n�meros y mostrar todos los n�meros terminados en 4\n   comprendidos entre ellos. \n");
           printf ("6. Leer un n�mero entero de tres d�gitos y mostrar todos los enteros\n   comprendidos entre 1 y cada uno de los d�gitos\n");
           printf ("7. Mostrar en pantalla todos los enteros comprendidos entre 1 y 100.\n");
           printf ("8. Mostrar en pantalla todos los pares comprendidos entre 20 y 200.\n");
           printf ("9. Mostrar en pantalla todos los n�meros terminados en 6 comprendidos\n   entre 25 y 205.\n");
           printf ("10. Leer un n�mero entero y determinar a cu�nto es igual la suma de\n   todos los enteros comprendidos entre 1 y el n�mero le�do.\n");
           printf ("0. Regresar al men� principal.\n");
           break;
    case 2:        //del 11 al 20
           printf ("11. Leer un n�mero entero de dos d�gitos y mostrar en pantalla\n    todos los enteros comprendidos entre un d�gito y otro.\n");
           printf ("12. Leer un n�mero entero de 3 d�gitos y determinar si\n    tiene el d�gito 1.\n");
           printf ("13. Leer un entero y mostrar todos los m�ltiplos de 5 comprendidos entre 1 y el n�mero le�do.\n");
           printf ("14. Mostrar en pantalla los primeros 20 m�ltiplos de 3.\n");
           printf ("15. Escribir en pantalla el resultado de sumar los primeros 20 m�ltiplos de 3.\n");
           printf ("16. Mostrar en pantalla el promedio entero de los n primeros m�ltiplos de 3\n    para un n�mero n le�do.\n");
           printf ("17. Promediar los x primeros m�ltiplos de 2 y determinar si ese promedio\n    es mayor que los y primeros m�ltiplos de 5 para valores de x y y le�dos.\n");
           printf ("18. Leer dos n�meros entero y mostrar todos los m�ltiplos de 5 comprendidos\n    entre el menor y el mayor.\n");
           printf ("19. Leer un n�mero entero y determinar si es primo.\n");
           printf ("20. Leer un n�mero entero y determinar cu�ntos d�gitos tiene.\n");
           printf ("0. Regresar al men� principal.\n");
           break;
    case 3:         //del 21 al 30
           printf ("21. Leer un n�mero entero y determinar a cu�nto es igual al suma de sus d�gitos.\n");
           printf ("22. Leer un n�mero entero y determinar cu�ntas veces tiene el d�gito 1.\n");
           printf ("23. Leer un n�mero entero y determinar si la suma de sus d�gitos es tambi�n un n�mero primo.\n");
           printf ("24. Leer un n�mero entero y determinar a cu�nto es igual la suma de sus d�gitos pares.\n");
           printf ("25. Leer un n�mero entero y determinar a cu�nto es igual el promedio entero de sus d�gitos.\n");
           printf ("26. Leer un n�mero entero y determinar cu�l es el mayor de sus d�gitos.\n");
           printf ("27. Leer 2 n�meros enteros y determinar cu�l de los dos tiene mayor cantidad de d�gitos.\n");
           printf ("28. Leer 2 n�meros enteros y determinar cual de los dos tiene mayor cantidad de d�gitos primos.\n");
           printf ("29. Leer un n�mero entero y determinar a cu�nto es igual el primero de sus d�gitos.\n");
           printf ("30. Leer un n�mero entero y mostrar todos sus componentes num�ricos o sea aquellos\n    para quienes el sea un m�ltiplo.\n");
           printf ("0. Regresar al men� principal.\n");
           break;
    case 4:         //del 31 al 40
           printf ("31. Leer n�meros hasta que digiten 0 y determinar a cu�nto es igual\n    el promedio de los n�meros terminados en 5.\n");
           printf ("32. Leer n�meros hasta que digiten 0 y determinar a cuanto es igual\n    el promedio entero de los n�mero primos le�dos.\n");
           printf ("33. Si 32768 es el tope superior para los n�meros entero cortos, determinar cu�l es el n�mero\n    primo m�s cercano por debajo de �l.\n");
           printf ("34. Generar los n�meros del 1 al 10 utilizando un ciclo que vaya de 10 a 1.\n");
           printf ("35. Leer dos n�meros enteros y determinar a cu�nto es igual el producto mutuo del primer d�gito\n   de cada uno\n");
           printf ("36. Mostrar en pantalla la tabla de multiplicar del n�mero 5.\n");
           printf ("37. Generar todas las tablas de multiplicar del 1 al 10.\n");
           printf ("38. Leer un n�mero entero y mostrar en pantalla su tabla de multiplicar.\n");
           printf ("39. Se define la serie de Fibonacci como la serie que comienza con los d�gitos 1 y 0 y va sumando\n    progresivamente los dos �ltimos elementos de la serie, as�:\n    0 1 1 2 3 5 8 13 21 34.......\n    Utilizando el concepto de ciclo generar la serie de Fibonacci hasta llegar o sobrepasas el n�mero\n    10000.\n");
           printf ("40. Leer un n�mero de dos d�gitos y determinar si pertenece a la serie de Fibonacci.\n");
           printf ("0. Regresar al men� principal.\n");
           break;
    case 5:        //del 41 al 50
           printf ("41. Determinar a cu�nto es igual la suma de los elementos de la serie de Fibonacci entre 0 y 100.\n");
           printf ("42. Determinar a cu�nto es igual el promedio entero de los elementos de la serie de Fibonacci\n    entre 0 y 1000.\n");
           printf ("43. Determinar cu�ntos elementos de la serie de Fibonacci se encuentran entre 1000 y 2000.\n");
           printf ("44. Leer un n�mero y calcularle su factorial.\n");
           printf ("45. Leer un n�mero y calcularle el factorial a todos los enteros comprendidos entre 1 y el n�mero\n    le�do.\n");
           printf ("46. Leer un n�mero entero y calcular el promedio entero de los factoriales de los enteros\n    comprendidos entre 1 y el n�mero le�do.\n");
           printf ("47. Leer un n�mero entero y calcular a cu�nto es igual la sumatoria de todos los factoriales de los\n    n�meros comprendidos entre 1 y el n�mero le�do.\n");
           printf ("48. Utilizando ciclos anidados generar las siguientes parejas de enteros\n    0 1\n    1 1\n    2 2\n    3 2\n    4 3\n    5 3\n    6 4\n    7 4\n    8 5\n    9 5\n");
           printf ("49. Utilizando ciclos anidados generar las siguientes ternas de n�meros\n    1 1 1\n    2 1 2\n    3 1 3\n    4 2 1\n    5 2 2\n    6 2 3\n    7 3 1\n    8 3 2\n    9 3 3\n");
           printf ("50. Utilizando ciclos anidados generar las siguientes parejas de n�meros\n    0 1\n    1 1\n    2 1\n    3 1\n    4 2\n    5 2\n    6 2\n");
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
        	           printf ("\nIngrese el entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       printf ("\nLos n�meros desde 1 hasta %d son : ", x);
					   funcdig (1, x);
	                   getch ();// usa la libreria conio.h
                       break;
	            case 2:
				       printf ("\nIngrese el primer n�mero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
		               mostrarpares (x, 1);
		               getch ();// usa la libreria conio.h
		               break;
		        case 3:
		        	   printf ("\nIngrese el primer n�mero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
		               divisores (x);
		        	   getch ();        // usa la libreria conio.h
		        	   break;
		        case 4:
		               printf ("\nIngrese el primer entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       printf ("\nIngrese el segundo entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&y);
                       if (x>y)
                       funcdig (y, x);
                       else
                       funcdig (x, y);
				       getch ();	// usa la libreria conio.h
				       break;
				case 5:
                      printf ("\n Ingrese el primer n�mero :  "); // usa la libreria stdio.h
                      scanf ("%d",&x);                                   // usa la libreria stdio.h
                      printf ("\n Ingrese el primer n�mero :  "); // usa la libreria stdio.h
                      scanf ("%d",&y);
                      printf ("Los numeros terminados en 4 entre %d y %d son : \n", x, y);                                 // usa la libreria stdio.h
                      if (y>x)
                      contar1 (y, x);
                      else
                      contar1 (x, y);
                      getch ();                                        // usa la librer�a conio.h
                      break;
                case 6:
                       printf ("\nIngrese el entero : ");
                       scanf ("%d", &x);
                       if (cifras (x)==3)
                       mostrardigitos (x);
                       else
                       printf ("\nEl n�mero debe ser de tres cifras, porfavor berifique que asi sea.");
					   getch ();// usa la libreria conio.h
                       break;
				case 7:
                     funcdig (1, 100);
                     getch ();// usa la libreria conio.h
                       break;
				case 8:
					   mostrarpares (200, 20);
                       getch ();// usa la libreria conio.h
					   break;
				case 9:
                       mostrar6 (205);
					   getch ();// usa la libreria conio.h
					   break;
				case 10:
                       printf ("\nIngrese el entero : ");
                       scanf ("%d", &x);
                       printf ("\nLa suma de los naturales hasta %d es : %d", x, (sumanumero (x)));
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
                       printf ("\nIngrese el primer n�mero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);                                   // usa la libreria stdio.h
                       if (cifras (x)==2)
                       fun11 (x);
                       else
                       printf ("\nEl n�mero debe ser de dos cifras, porfavor berifique que asi sea.");
	                   getch ();// usa la libreria conio.h
                       break;
	            case 12:
                       printf ("\nIngrese el entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       if (cifras (x)==3)
		               digito1 (x);
		               else
                       printf ("\nEl n�mero debe ser de tres cifras, porfavor berifique que asi sea.");
		               getch ();// usa la libreria conio.h
		               break;
		        case 13:
		               printf ("\nIngrese el entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
		               multiplos5 (x);
		        	   getch ();        // usa la libreria conio.h
		        	   break;
		        case 14:
                       multiplos3 (20);
				       getch ();	// usa la libreria conio.h
				       break;
				case 15:
                       printf ("\nLa suma de los primeros 20 multiplos de 3 es : %d ", sumarmultiplos3 (20));
                       getch ();// usa la libreria conio.h
                       break;
                case 16:
                       printf ("\nIngrese el entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       printf ("\nEl promedio entero de los primeros %d m�ltiplos de 3 es : %d", x, (sumarmultiplos3 (x)/x));
					   getch (); // usa la libreria conio.h
                       break;
                case 17:
					   printf ("\nIngrese el primer entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       printf ("\nIngrese el segundo entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&y);
                       if (x>y)
				       fun (x, y);
				       else
				       fun (y, x);
					   getch ();// usa la libreria conio.h
					   break;
				case 18:
					   printf ("\nIngrese el primer entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       printf ("\nIngrese el segundo entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&y);
                       if (x>y)
					   fun17 (x, y);
					   else
					   fun17 (y, x);
                       getch ();// usa la libreria conio.h
                       break;
				case 19:
					   printf ("\nIngrese el entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
					   if (primo (x)==1)
					   printf ("\nEl n�mero es primo.");
					   else
					   printf ("\nEl n�mero no es primo.");
                       getch ();// usa la libreria conio.h
					   break;
				case 20:
					   printf ("\nIngrese el entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       printf ("\nEl n�mero de d�gitos es : %d", cifras (x));
					   getch ();// usa la libreria conio.h
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
               	       printf ("\nIngrese el entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
        	           printf ("\nLa suma de los digitos del n�mero %d es : %d", x, sumadigitos (x));
	                   getch ();// usa la libreria conio.h
                       break;
	            case 22:
	            	   printf ("\nIngrese el entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
		               printf ("\nEl d�gito 1 se repite %d veces", veces1 (x));
		               getch ();// usa la libreria conio.h
		               break;
		        case 23:
		               printf ("\nIngrese el entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       if ((primo (sumadigitos (x)))==1)
                       printf  ("\nLa suma de los digitos es un n�mero primo");
                       else
                       printf  ("\nLa suma de los digitos no es un n�mero primo");
		        	   getch ();        // usa la libreria conio.h
		        	   break;
		        case 24:
		               printf ("\nIngrese el entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       printf ("\nla suma de los d�gitos pares es : %d ", sumapares (x)); // usa la libreria stdio.h
				       getch ();	// usa la libreria conio.h
				       break;
				case 25:
                       printf ("\nIngrese el entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       printf ("\nEl promedio entero entre sus d�gitos es : %d", (sumadigitos (x)/cifras (x)));
                       getch ();// usa la libreria conio.h
                       break;
                case 26:
                	   printf ("\nIngrese el entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       printf ("\nEl mayor de los d�gitos es : %d", mayordigito (x));
					   getch ();// usa la libreria conio.h
                       break;
				case 27:
					   printf ("\nIngrese el primer entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       printf ("\nIngrese el segundo entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&y);
                       if ((cifras (y))==(cifras (x)))
                       printf ("\nTienen igual n�mero de d�gitos");
                       else {
                       	if ((cifras (y))>(cifras (x)))
                       	printf ("\n %d tiene mas d�gitos que %d", y, x);
                       	else
                       	printf ("\n %d tiene mas d�gitos que %d", x, y);
					   }
                       getch ();// usa la libreria conio.h
                       break;
				case 28:
				       printf ("\nIngrese el primer entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       printf ("\nIngrese el segundo entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&y);
                       if (contarprimo (x)==contarprimo (y))
                       printf ("\nTienen igual n�mero de d�gitos primos");
                       else {
                       	if (contarprimo (x)>contarprimo (y))
                        printf ("\n%d tiene mas d�gitos primos que %d", x, y);
                        else
                        printf ("\n%d tiene mas d�gitos primos que %d", y, x);
					   }
                       getch ();// usa la libreria conio.h
					   break;
				case 29:
				       printf ("\nIngrese el primer entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       printf ("\nEl primero de sus d�gitos es : %d", primerdigito (x) );
					   getch ();// usa la libreria conio.h
					   break;
				case 30:
					   printf ("\nIngrese el primer entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       printf ("\nLos componentes de %d son : ", x);
                       divisores (x);
					   getch ();// usa la libreria conio.h
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
        	           fun31 ();
	                   getch ();// usa la libreria conio.h
                       break;
	            case 32:
		               fun32 ();
		               getch ();// usa la libreria conio.h
		               break;
		        case 33:
		        	   printf ("\nEl n�mero primo por debajo de 32768 es : %d", fun33 ());
		        	   getch ();        // usa la libreria conio.h
		        	   break;
		        case 34:
		               fun34 ();
				       getch ();	// usa la libreria conio.h
				       break;
				case 35:
                       printf ("\nIngrese el primer entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       printf ("\nIngrese el segundo entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&y);
                       printf ("\nEl producto mutuo de los primero digitos de los n�meros %d y %d es : \n%d", x, y, (primerdigito (x)*primerdigito (y)));
                       getch ();// usa la libreria conio.h
                       break;
                case 36:
                       tablamultiplicar (5);
					   getch ();// usa la libreria conio.h
                       break;
				case 37:
					   tablas (10);
                       getch ();// usa la libreria conio.h
                       break;
				case 38:
					   printf ("\nIngrese de qu� n�mero desea ver la tabla de multiplicar :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       tablamultiplicar (x);
                       getch ();// usa la libreria conio.h
					   break;
				case 39:
				       fun39 ();
					   getch ();// usa la libreria conio.h
					   break;
				case 40:
					   printf ("\nIngrese el entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       if (fun40 (x)==0)
                       printf ("\nEl n�mero no pertenece a la serie fibonacci.");
                       else
                       printf ("\nEl n�mero pertenece a la serie fibonacci.");
					   getch ();// usa la libreria conio.h
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
        	           fun41 ();
	                   getch ();// usa la libreria conio.h
                       break;
	            case 42:
		               fun42 ();
		               getch ();// usa la libreria conio.h
		               break;
		        case 43:
                       fun43 (1000, 2000);
		        	   getch ();        // usa la libreria conio.h
		        	   break;
		        case 44:
                       printf ("\nIngrese el entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       printf ("\nEl factorial de %d es : %d", x, factorial (x));
				       getch ();	// usa la libreria conio.h
				       break;
				case 45:
                       printf ("\nIngrese el entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       fun45 (x);
                       getch ();// usa la libreria conio.h
                       break;
                case 46:
                       printf ("\nIngrese el entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       printf ("\nEl promedio de los %d primeros factoriales es : %d", x,fun46 (x)/x);
					   getch ();// usa la libreria conio.h
                       break;
				case 47:
                       printf ("\nIngrese el entero :  "); // usa la libreria stdio.h
                       scanf ("%d",&x);
                       printf ("\nLa suma de los factoriales comprendidos entre 1 y %d es : %d", x,fun46 (x));
                       getch ();// usa la libreria conio.h
                       break;
				case 48:
					   printf ("\nLas parejas son : \n");
                       fun48 ();
                       getch ();// usa la libreria conio.h
					   break;
				case 49:
					   printf ("\nLas ternas son : \n");
                       fun49 ();
					   getch ();// usa la libreria conio.h
					   break;
				case 50:
					   printf ("\nLas parejas son : \n");
                       fun50 ();
					   getch ();// usa la libreria conio.h
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
