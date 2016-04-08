/*Librerias*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*variables globales*/


/*funciones prototipo*/

int arreglo_fun1 (int *n, int a)
{
	int c=0;
	int d=0;
	while (a>0){
		printf ("\nIngrese el elemnto %d : ", c);
		scanf ("%d", &d);
		n[c]=d;
		c++;
		a--;
	}
	return 0;
}

int mostrar_vector_fun1 (int *n, int b)
{
    for (int c=0; c<b; c++){
	    printf ("%d ", n[c]);
	}
    return 0;
}

int mayor_elemento (int *n, int c)
{
	int m=0;
	int d;
	for (d=0; d<c; d++){
		if (n[d]>m)
		m=n[d];
	}
	return m;
}

int menor_elemento (int *n, int c)
{
	int m=mayor_elemento (n, c);
	int d;
	for (d=0; d<c; d++){
		if (n[d]<m)
		m=n[d];
	}
	return m;
}

int suma_vector (int *s, int *a, int *v, int A, int V)
{
	int c=0;
	if (A>V){
	    while (V>0){
		      s[c]=a[c]+v[c];
		      V--;
		      c++;
	     }
	    while (A>c){
	    	s[c]=a[c];
	    	c++;
		}
	  }
	else{
	    while (A>0){
		      s[c]=a[c]+v[c];
		      A--;
		      c++;
	     }
	    while (V>c){
	    	s[c]=v[c];
	    	c++;
		}
	  }
	return 0;
}

int multiplicacion_vector (int *a, int *v, int A, int V)
{
	int c=0;
	int d=0;
	if (A>V){
	    while (V>0){
		      d+=a[c]*v[c];
		      V--;
		      c++;
	     }
	  }
	else{
	    while (A>0){
		      d+=a[c]*v[c];
		      A--;
		      c++;
	     }
	  }
	return d;
}

int mayor_menor_vector (int *v, int x)
{
    int i;
    int c=0;
    for (i=0; i<x; i++){
        for (int j=i+1; j<x; j++){
                if (v[i]<v[j]){
                c=v[i];
                v[i]=v[j];
                v[j]=c;}
        }
    }
    return 0;
}

int promedio_vector (int *v, int a)
{
    int r=0;
    for (int c=0; c<a; c++){
        r+=v[c];
    }
    return r/a;
}

/*--------------------------------------------------------------------------------*/
/*----------------------------------MENU------------------------------------------*/
/*--------------------------------------------------------------------------------*/

int opciones (void)
{
     printf ("                        M E N U     P R I N C I P A L   \n\n" );
     printf ("1) Escribir una función que recibe un vector, sus elementos se leen desde el teclado, \n   se verifica que sean numéricos.   \n");
     printf ("2) Dado un vector de números encontrar el mayor.  \n");
     printf ("3) Dado un vector de números encontrar el menor.  \n");
     printf ("4) Hacer una función que reciba dos vectores y retorne un tercer vector con su suma.   \n");
     printf ("5) Hacer una función que reciba dos vectores y retorne un tercer vector con su multiplicación.   \n");
     printf ("6) Hacer una función que reciba un vector y retorne el vector con sus elementos ordenados de mayor\n   a menor.   \n");
     printf ("7) Hacer una función que reciba un vector de datos numéricos y retorne el promedio de los datos\n   contenidos en el vector.   \n");
     printf ("8) Hacer una función que reciba un valor numérico entero y retorne un vector de ese tamaño, con sus\n   elementos leídos por teclado con datos de tipo carácter o cadena.   \n");
     printf ("  \n");
     printf ("  \n");
     printf ("  \n");
     printf ("  \n");
     printf ("  \n");
     printf ("  \n");
     printf ("  \n");
     printf ("  \n");
     printf ("  \n");
     printf ("  \n");
     printf ("  \n");
     printf ("  \n");
     printf ("0. Salir   \n");
}

/*funcion primcipal*/

int main (void)
{
    int opc=-1;
	int x=0;
	int y=0;
    do {
        system ("cls");
        opciones ();
        printf ("\nIngrese la opción seleccionada:  "); // usa la libreria stdio.h
        scanf ("%d",&opc);                                   // usa la libreria stdio.h
        switch (opc) {
        case 1:
                 printf ("\n¿De cuantos elementos desea el vector?    ");
                 scanf ("%d", &x);
                 {
				 int V[x];
                 arreglo_fun1 (V, x);
                 printf ("\nEl vector es : \n");
                 mostrar_vector_fun1 (V, x);
				 }
                 getch();                                          // usa la librería conio.h
                 break;
        case 2:
                 printf ("\n¿De cuantos elementos desea el vector?    ");
                 scanf ("%d", &x);
                 {
				 int V[x];
                 arreglo_fun1 (V, x);
                 printf ("\nEl vector es : \n");
                 mostrar_vector_fun1 (V, x);
                 printf ("\nEl mayor elemento es : \n%d", mayor_elemento (V, x));
				 }
                 getch();
                 break;
		case 3:
                 printf ("\n¿De cuantos elementos desea el vector?    ");
                 scanf ("%d", &x);
                 {
				 int V[x];
                 arreglo_fun1 (V, x);
                 printf ("\nEl vector es : \n");
                 mostrar_vector_fun1 (V, x);
                 printf ("\nEl menor elemento es : \n%d", menor_elemento (V, x));
				 }
                 getch();                                          // usa la librería conio.h
                 break;
		case 4:
                 printf ("\n¿De cuantos elementos desea el primer vector?    ");
                 scanf ("%d", &x);
                 {
				 int V[x];
                 arreglo_fun1 (V, x);
				 printf ("\n\n¿De cuantos elementos desea el segundo vector?    ");
                 scanf ("%d", &y);
				 int A[y];
                 arreglo_fun1 (A, y);
				 printf ("\nEl primer vector es : \n");
				 mostrar_vector_fun1 (V, x);
				 printf ("\nEl segundo vector es : \n");
				 mostrar_vector_fun1 (A, y);
				 if (x>y){
				 int S[x];
				 printf ("\nLos suma de los vectores es : \n");
				 suma_vector (S, V, A, x, y);
				 mostrar_vector_fun1 (S, x);}
				 else {
				 int S[y];
				 printf ("\nLos suma de los vectores es : \n");
				 suma_vector (S, V, A, x, y);
				 mostrar_vector_fun1 (S, y);}
				 }
                 getch();                                          // usa la librería conio.h
                 break;
		case 5:
                 printf ("\n¿De cuantos elementos desea el primer vector?    ");
                 scanf ("%d", &x);
                 {
				 int V[x];
                 arreglo_fun1 (V, x);
				 printf ("\n\n¿De cuantos elementos desea el segundo vector?    ");
                 scanf ("%d", &y);
				 int A[y];
                 arreglo_fun1 (A, y);
				 printf ("\nEl primer vector es : \n");
				 mostrar_vector_fun1 (V, x);
				 printf ("\nEl segundo vector es : \n");
				 mostrar_vector_fun1 (A, y);
				 if (x>y){
				 printf ("\nLos multiplicación de los vectores es : \n", multiplicacion_vector (V, A, x, y)); /*PRODUCTO PUNTO*/
		         }
				 else {
				 printf ("\nLos multiplicación de los vectores es : %d", multiplicacion_vector (V, A, x, y));
				 }
			     }
                 getch();                                          // usa la librería conio.h
                 break;
		case 6:
                 printf ("\n¿De cuantos elementos desea el vector?    ");
                 scanf ("%d", &x);
                 {
				 int V[x];
                 arreglo_fun1 (V, x);
                 printf ("\nEl vector ordenado de mayor a menor es : \n");
                 mayor_menor_vector (V, x);
                 mostrar_vector_fun1 (V, x);
				 }
                 getch();                                          // usa la librería conio.h
                 break;
		case 7:
                 printf ("\n¿De cuantos elementos desea el vector?    ");
                 scanf ("%d", &x);
                 {
                 int V[x];
                 arreglo_fun1 (V, x);
                 printf ("El promedio de los datos es : %d", promedio_vector (V, x));
                 }
                 getch();                                          // usa la librería conio.h
                 break;
		case 8:
                 printf ("\n¿De cuantos elementos desea el vector?    ");
                 scanf ("%d", &x);
                 {
                 char V[x];
                 }
                 getch();                                          // usa la librería conio.h
                 break;
		case 9:
                 printf ("\n¿De cuantos elementos desea el vector?    ");
                 scanf ("%d", &x);
                 {
                 int V[x];
                 }
                 getch();                                          // usa la librería conio.h
                 break;
		case 10:

                 getch();                                          // usa la librería conio.h
                 break;
		case 11:

                 getch();                                          // usa la librería conio.h
                 break;
		case 12:

                 getch();                                          // usa la librería conio.h
                 break;
		case 13:

                 getch();                                          // usa la librería conio.h
                 break;
		case 14:

                 getch();                                          // usa la librería conio.h
                 break;
		case 15:

                 getch();                                          // usa la librería conio.h
                 break;
		case 16:

                 getch();                                          // usa la librería conio.h
                 break;
		case 17:

                 getch();                                          // usa la librería conio.h
                 break;
		case 18:

                 getch();                                          // usa la librería conio.h
                 break;
		case 19:

                 getch();                                          // usa la librería conio.h
                 break;
		case 20:

                 getch();                                          // usa la librería conio.h
                 break;
        }
    } while (opc != 0);
    printf ("\nGracias por utilizar nuestro sistemas, Adios  "); // usa la libreria stdio.h
    getch();                                           // usa la librería conio.h
}
