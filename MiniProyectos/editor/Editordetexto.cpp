/*Mini Proyect (Editor de Texto)*/
/*Proyecto hecho por Andrés Felipe Betancurt Rivera*/
/*librerias*/

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

/*variables globales*/

FILE *archivo;

/*funciones prototipo*/

void crear (FILE *archivo)
{
	char aux[100];
	char caracter;
	archivo = fopen ("temporal.txt", "w+b");
	if (archivo==NULL){
                printf("\n\n  Archivo no exixtente o no coincide con la ruta especificada.");
            }
            else {
 	        printf("\nIntroduzca el texto\n ");
 	        fflush (stdin);
        	while((caracter = getchar()) != '\n'){
 	    	fputc(caracter, archivo);
			 }
           }
    fclose (archivo);
	printf ("\nDonde desea guardar el archivo.\n");
    fflush (stdin);
    gets (aux);
    rename ("temporal.txt", aux);
    archivo=fopen ("temporal.txt", "r");
    if (archivo==NULL){
    	printf ("\nGuardado con éxito.");
	}
	else{
		fclose (archivo);
		remove ("temporal.txt"); 
		printf ("\nGuardado con éxito.");
	}
}

void mayusculas (FILE *archivo)
{
	FILE *auxiliar;
	char aux[100];
	char c;
	printf ("Indique la direccion del archivo a modificar:  \n");
	fflush (stdin);
	gets (aux);
	archivo = fopen (aux, "r+b");
	if (archivo == NULL){
		printf ("\nHubo un error al intentar abrir el archivo.");
	}
	else{
		auxiliar=fopen ("temporal.txt", "w+b");
		while (fread (&c, sizeof (char), 1, archivo)==1){
			if ((c>=97)&&(c<=122)){
				c-=32;
			}
			fputc (c, auxiliar);
		}
		fclose (archivo);
		fclose (auxiliar);
		remove (aux);
		rename ("temporal.txt", aux);
	}
	archivo = fopen ("temporal.txt", "r+b");
	if (archivo == NULL){
		printf ("\nLa operació fue un éxito.");
	}
	else{
		fclose (archivo);
		remove ("temporal.txt");
		printf ("\nLa operació fue un éxito.");
	}
}

void minusculas (FILE *archivo)
{
	FILE *auxiliar;
	char aux[100];
	char c;
	printf ("Indique la direccion del archivo a modificar:  \n");
	fflush (stdin);
	gets (aux);
	archivo = fopen (aux, "r+b");
	if (archivo == NULL){
		printf ("\nHubo un error al intentar abrir el archivo.");
	}
	else{
		auxiliar=fopen ("temporal.txt", "w+b");
		while (fread (&c, sizeof (char), 1, archivo)==1){
			if ((c>=65)&&(c<=90)){
				c+=32;
			}
			fputc (c, auxiliar);
		}
		fclose (archivo);
		fclose (auxiliar);
		remove (aux);
		rename ("temporal.txt", aux);
	}
	archivo = fopen ("temporal.txt", "r+b");
	if (archivo == NULL){
		printf ("\nLa operació fue un éxito.");
	}
	else{
		fclose (archivo);
		remove ("temporal.txt");
		printf ("\nLa operació fue un éxito.");
	}
}
/*-----------------------------------------------------------------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------MENU PRINCIPAL------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------------------------------------------------------------------------------*/
void menu ()
{
	printf ("     Bienvenido a su EDITOR\n\n\n");
	printf ("1. Crear archivo.");
	printf ("\n2. Pasar todo a mayusculas.");
	printf ("\n3. Pasar todo a minusculas.");
	printf ("\n0. Salir.");
}

/*funcion principal*/

int main ()
{
	int opc=-1;
	do{
		system ("cls");
		menu ();
	    printf ("\n\nIngrese una opción:  ");
	    scanf ("%d", &opc);
	    switch (opc){
	    	case 1:{
	    		system ("cls");
	    		crear (archivo);
	    		getch ();
				break;
			}
			case 2:{
				system ("cls");
				mayusculas (archivo);
				getch ();
				break;
			}
			case 3:{
				system ("cls");
				minusculas (archivo);
				getch ();
				break;
			}
			case 0:{
				break;
			}
		}
	} while (opc != 0);
	printf ("\nGracias por usar nuestro editor.");
	//getch();
}
