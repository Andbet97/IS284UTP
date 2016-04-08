/*librerias*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*variables globales*/

/*funciones prototipo*/

void alumno_nuevo (char *v, int n, char *a)
{
	int parada;
	int inicio=(n-1)*5;
	for (parada=n*5; inicio<parada; inicio++){
		for (int i=0; i<5; i++){
			a[i]=getchar();
			if (a[i]== '\0')
			break;
		}
		v[inicio]=a[inicio];
	}
}

void mostrar_vector (char *c, int n)
{
	int parada;
	int inicio=(n-1)*5;
	for (parada=n*5; inicio<parada; inicio++){
		printf ("%c", c[inicio]);
	}
}

/*-------------------------------------------------------------------------------------------------------------------*/
/*----------------------------------------------------MENU-----------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------*/

void opciones (void)
{
	printf ("         LISTA ESTUDIANTES\n           PROGRAMCION 2\n\n\n");
	printf ("¿Qué desea hacer?\n\n");
	printf ("1. Añadir estudiante.\n");
	printf ("2. Editar datos de estudiantes.\n");
	printf ("3. Borrar estudiante de la lista.\n");
	printf ("0. Salir.\n");
}

/*funcion principal*/

int main ()
{
	int opc=-1;
	int n=0; /*número de estudiantes*/
	char V[n*5]; 
	char aux[5];
	//mostrar_lista ()
	do {
		system ("cls");
        opciones ();
        printf ("\nIngrese la opción seleccionada:  "); // usa la libreria stdio.h
        scanf ("%d",&opc);                                   // usa la libreria stdio.h
        switch (opc) {
        	case 1:{
        		n++;
        		alumno_nuevo (V, n, aux);
        		mostrar_vector (aux, n);
        		getch ();
				break;
			}
        	case 2:{
        		//ss
				break;
			}
        	case 3:{
        		n--;
				break;
			}
		}
	}while (opc != 0);
    printf ("\nGracias por utilizar nuestro sistemas, Adios  "); 
    getch(); 
}
