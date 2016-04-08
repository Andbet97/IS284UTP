//TALLER 1 ITERATIVAS
//Menú con todos los puntos del taler 

//librerias 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
 
 //variables globales
 
#define pi 3.1415926535897932384626

//funciones prototipo
 
float areacirculo (float n)     //funcion area de un circulo de radio r
{
	if (n>0)
	return (pi*n*n);
	return -1;
 } 
 
 int areacuadrado (int a)     //funcion area de un cuadredo de lado l
 {
 	return (a*a);	
 }
 
 int volcubo (int a)          //funcion volumen de un cubo de lado l
 {
 	return (a*a*a);	
 }

float volesfera (float n)     //funcion volumen de una esfera de radio r
{
	if (n<0)
	return -1;
	return ((4*pi*n*n*n)/3);
}

int arearesidual (int b, int h, int m)     //funcion área residual de un rectangulo de base b , altura h, que tiene inscrito un cuadro de lado m con m<b y m<h
{
	if ((m<b)&&(m<h))
	return ((b*h)-(m*m));
	return -1;
}

double volresidual (float n, int a)   //funcion volumen residual de un cubo de lado L, que tiene inscrita una esfera de R con R < L/2.
{
	if ((n>(a/2))||(n<0))
	return -1;
	return ((a*a*a)-((4*pi*n*n*n)/3));
}

float areatrapecio (int a, int b, int h)     //funcion área de un trapecio con base mayor B, base menor b y altura h.
{
	if (a<b)
	return -1;
	return (((a+b)*h)/2);
}

float velocidad (int a, int b)     //funcion velocidad constante de un cuerpo igual a distancia/tiempo.
{
	if (b<0)
	return -1;
	return (a/b);
}

float posicion (int t, float v, float a)     //funcion distancia de un tiro parabólico que es igual a  ½ aceleración * tiempo2 + velocidad inicial * tiempo.
{
	if (t == 0)
	return -1;
	if (t<0)
	return 0;
	return (((a/2)*t*t)+(v*t));
}

float cuadratica1 (float a, float b, float c)       //funcion raíces reales de un polinomio ax2 + bx + c.
{
	if (((b*b)-(4*a*c))<0)
	return -1;
	return ((-b+sqrt((b*b)-(4*a*c)))/(2*a));                      //utiliza la libreria math.h
}

float cuadratica2 (float a, float b, float c)       //funcion raíces reales de un polinomio ax2 + bx + c.
{
	if (((b*b)-(4*a*c))<0)
	return -1;
	return ((-b-sqrt((b*b)-(4*a*c)))/(2*a));
}

int opciones (void)
{
     printf ("   M E N U     P R I N C I P A L   \n\n\n" );
     printf ("1.  Área de un círculo. \n");
     printf ("2.  Área de un cuadrado. \n");
     printf ("3.  Volumen de un cubo de lado L. \n");
     printf ("4.  Volumen de una esfera de radio R. \n");
     printf ("5.  Área residual de un rectángulo de base b, altura h, \n    que tiene inscrito un cuadrado de lado m con m<b y m<h. \n");
     printf ("6.  Volumen residual de un cubo de lado L, que tiene inscrita \n    una esfera de R con R < L/2. \n");
     printf ("7.  Área de un trapecio con base mayor B, base menor b y altura h. \n");
     printf ("8.  Velocidad constante de un cuerpo igual a distancia/tiempo.  \n");
     printf ("9.  Distancia de un tiro parabólico que es igual a \n    ½ aceleración * tiempo2 + velocidad inicial * tiempo.  \n");
     printf ("10. Raíces reales de un polinomio ax2 + bx + c  \n");
     printf ("0.  Salir   \n");
}
 
//funcion principal 
 
int main (void)
{
    int opc=-1, x=0, y=0, z=0;
    float radio=0, s=0, r=0;
    do {
        system ("cls");  // se utiliza la librería stdlib.h, sirve para limpiar la pantalla
         
        opciones ();                                   
        printf ("\n\nIngrese la opción seleccionada:  "); // usa la libreria stdio.h 
        scanf ("%d",&opc);                                   // usa la libreria stdio.h 
        switch (opc) {
        case 1: 
                 printf ("\nIngrese el valor del radio del circulo :  "); // usa la libreria stdio.h 
                 scanf ("%f",&radio);       // usa la libreria stdio.h 
				 if (areacirculo (radio) == -1)   
				 printf ("\nEl radio debe ser un entero positivo, por favor digite bien el radio.  ");  
				 if (areacirculo (radio) > -1)                         
                 printf ("\nEl área del circulo es : %f", areacirculo (radio));
                 getch();                                          // usa la librería conio.h 
                 break;                      
        case 2: 
                 printf ("\nIngrese el valor del lado del cuadrado :  "); // usa la libreria stdio.h 
                 scanf ("%d",&x);  // usa la libreria stdio.h                                  
                 printf ("\nEl área del cuadrado es %d", areacuadrado (x));
                 getch();
                 break;   
		case 3: 
                 printf ("\nIngrese el valor del lado del cubo :  "); // usa la libreria stdio.h 
                 scanf ("%d",&x);                                   // usa la libreria stdio.h 
                 printf ("\nEl volumen del cubo es : %d", volcubo (x));
                 getch();
                 break;   
	    case 4: 
                 printf ("\nIngrese el valor del radio de la esfera :  "); // usa la libreria stdio.h 
                 scanf ("%f",&radio);                                   // usa la libreria stdio.h 
                 if (volesfera (radio) == -1)
                 printf ("\nEl radio debe ser positivo, por favor digite bien el radio. ");
                 if (volesfera (radio) > -1)
                 printf ("\nEl volumen de la esfera es : %f", volesfera (radio));
                 getch();
                 break;   
        case 5: 
                 printf ("\nIngrese el valor de la base del rectangulo :  "); // usa la libreria stdio.h 
                 scanf ("%d",&x);  
				 printf ("\nIngrese el valor de la altura del rectangulo :  "); 
                 scanf ("%d",&y); 
				 printf ("\nIngrese el valor del lado del cuadrado :  "); 
                 scanf ("%d",&z);                                  // usa la libreria stdio.h 
                 if (arearesidual (x, y, z) == -1)
                 printf ("\nEl cuadrado estar dentro del rectangulo, por favor asegurese de que asi sea. ");
                 if (arearesidual (x, y, z) > -1)
                 printf ("\nEl área residual es : %d", arearesidual (x, y, z));
                 getch();
                 break; 
		case 6: 
                 printf ("\nIngrese el valor del lado del cubo :  "); // usa la libreria stdio.h 
                 scanf ("%d",&x); 
				 printf ("\nIngrese el valor del radio :  ");
				 scanf ("%f", &radio);                                // usa la libreria stdio.h 
                 if (volresidual (radio, x) == -1)
                 printf ("\nEl radio debe ser positivo y a la vez debe ser menor que l/2, \npor favor verifique si cumple las condiciones. ");
                 if (volresidual (radio, x) > -1)
                 printf ("\nEl volumen residual es : %f", volresidual (radio, x));
                 getch();
                 break;
		case 7: 
                 printf ("\nIngrese el valor del la altura :  "); // usa la libreria stdio.h 
                 scanf ("%d",&x); 
				 printf ("\nIngrese el valor de la base mayor :  ");
				 scanf ("%d", &y); 
				 printf ("\nIngrese el valor de la base menor :   ");
				 scanf ("%d", &z);                               // usa la libreria stdio.h 
                 if (areatrapecio (y, z, x) == -1)
                 printf ("\nLa base mayor es menor que la base menor, por favor verifique los datos. ");
                 if (areatrapecio (y, z, x) > -1)
                 printf ("\nEl área del trapecio es : %f", volresidual (radio, x));
                 getch();
                 break; 
		case 8: 
                 printf ("\nIngrese el tiempo tramscurrido en segundos :  "); // usa la libreria stdio.h 
                 scanf ("%d",&x); 
				 printf ("\nIngrese la distancia transcurrida en %ds :  ", x);
				 scanf ("%d", &y);                                // usa la libreria stdio.h 
                 if (velocidad (y, x) == -1)
                 printf ("\nEl tiempo debe ser mayor que cero y ser positivo, por favor verifique el valor del tiempo. ");
                 if (velocidad (y, x) > -1)
                 printf ("\nLa velocidad constante es : %fm/s", volresidual (radio, x));
                 getch();
                 break; 
		case 9: 
                 printf ("\nIngrese el tiempo tramscurrido en segundos :  "); // usa la libreria stdio.h 
                 scanf ("%d",&x); 
				 printf ("\nIngrese la velocidad inicial en m/s :  ");
				 scanf ("%f", &radio);                                // usa la libreria stdio.h 
				 printf ("\nIngrese la aceleracion en m/(s*s) :  ");
				 scanf ("%f", &s); 
                 if (posicion (x, radio, s) == -1)
                 printf ("\nEl cuerpo esta en la posición 0. ");
                 if (posicion (x, radio, s) == 0)
                 printf ("\nEl tiempo debe ser positivo, por favor verifique el valor del tiempo. ");
                 if (posicion (x, radio, s) > 0)
                 printf ("\nLa posición del cuerpo es : %fm ", posicion (x, radio, s) );
                 getch();
                 break; 
		case 10: 
                 printf ("\nIngrese el valor de a :  "); // usa la libreria stdio.h 
                 scanf ("%f",&radio); 
				 printf ("\nIngrese el valor de b :  ");
				 scanf ("%f", &s);                                // usa la libreria stdio.h 
				 printf ("\nIngrese el valor de c :  ");
				 scanf ("%f", &r); 
                 if ((cuadratica1 (radio, s, r) == -1)&&(cuadratica2 (radio, s, r) == -1))
                 printf ("\nEl sistema no tiene solución. ");
                 if ((cuadratica1 (radio, s, r) > -1)&&(cuadratica2 (radio, s, r) > -1))
                 printf ("\nLas soluciones son : \n x1= %f \n x2= %f ", cuadratica1 (radio, s, r), cuadratica2 (radio, s, r));
                 getch();
                 break; 		 		 	 		   
        case 0: 
                 //getch();
                 break;      
 
        }
    } while (opc != 0);
     
    printf ("\nGracias por utilizar nuestro sistemas, Adios  "); // usa la libreria stdio.h 
     
    getch();                                           // usa la librería conio.h
}
