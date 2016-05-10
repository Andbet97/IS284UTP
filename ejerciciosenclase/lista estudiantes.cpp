/*librerias*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

/*variables globales*/

#define M 10

/*funciones prototipo*/



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
	char V[M*5]; 
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
