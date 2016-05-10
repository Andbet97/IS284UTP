/*Mini Proyecto (Biblioteca)*/
/*Proyecto hecho por Andrés Felipe Betancurt Rivera*/
/*librerias*/

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

/*variables globales*/

typedef struct fecha{
	int dia;
	int mes;
	int anio;
};

struct libro{
    char isbn[13];     
    char Titulo[50];
	char Autor[50];
	char Genero[50];
	char Editorial[50];
	fecha N;
	fecha M;
};

typedef struct libro datos_libro;   
datos_libro Vlibro;                 
FILE *arcLibro;                     

/*Funciones prototipo*/

int contarLibros (FILE *arcLibro) 
{      //funcion que cuenta los registros en el archivo de libros
       int cont=0;
        arcLibro = fopen("Biblioteca.dat","r+b");
       fseek(arcLibro,0,0);     // posiciona el puntero de archivo en el registro 0
       while(!(feof(arcLibro)))
       {fread (&Vlibro,sizeof(libro),1,arcLibro);
                 cont++;
       }        
       fclose(arcLibro);
       return cont;
}

void agregarLibro(FILE *arcLibro, datos_libro libroReg)
{
   char  isbn[13], resp=' ';
   int   encontrado=0; //variable logica para verificar si un libro existe o no
  
   do{
      system("CLS");
      printf ( "\nIndique el ISBN del libro: ");
      scanf ("%s",isbn);
      //gets(isbn);  
      encontrado=0;
      arcLibro = fopen("Biblioteca.dat","r+b");  
      fseek(arcLibro,0,0);                  
      while(!(feof(arcLibro)))   
       {fread (&Vlibro,sizeof(libro),1,arcLibro);  
          if(strcmp(Vlibro.isbn,isbn)==0){   //verifico que el codigo del producto no exista
             encontrado=1;     
          }   
       }        
       fclose(arcLibro);
       
       if (encontrado!=1){  //sino existe lo creo
           strcpy(Vlibro.isbn,isbn);
           fflush(stdin);                        
           printf("\nTítulo      : ");
           gets(Vlibro.Titulo);
           fflush(stdin);
           printf("\nAutor       : ");
           gets(Vlibro.Autor);
           fflush(stdin);
           printf("\nFecha de nacimiento del Autor: ");
           printf ("\nDia: ");
           scanf ("%d",&Vlibro.N.dia);
           fflush(stdin);
           printf ("\nMes: ");
           scanf ("%d",&Vlibro.N.mes);
           fflush(stdin);
           printf ("\nAño: ");
           scanf ("%d",&Vlibro.N.anio);
           fflush(stdin);
           printf("\nFecha de defuncion del Autor: ");
           printf ("\nDia: ");
           scanf ("%d",&Vlibro.M.dia);
           fflush(stdin);
           printf ("\nMes: ");
           scanf ("%d",&Vlibro.M.mes);
           fflush(stdin);
           printf ("\nAño: ");
           scanf ("%d",&Vlibro.M.anio);
           fflush(stdin);
           printf("\nEditorial   : ");
           gets(Vlibro.Editorial);
           fflush(stdin);
           printf("\nGénero      : ");
           gets(Vlibro.Genero);
           fflush(stdin);
           // el siguiente código graba los datos en el archivo
           arcLibro = fopen("Biblioteca.dat","r+b");       //abrir archivo de Libros
           fseek (arcLibro,0,SEEK_END);                //Puntero en la ultima posicion
           fwrite(&Vlibro, sizeof(libro),1,arcLibro); //Escribir  en la posicion donde esta el puntero
           fclose(arcLibro);                           //Cerrar el archivo
           }
       else { 
          system("CLS");
          printf("Ya existe el libro\n");
          getch ();
      }
      printf("\n Desea agregar otro libro ?  (S/N) ");
      resp=getchar();
    } while((resp=='s')||(resp=='S'));

}

void listarLibros (FILE *arcLibro)                       
{
   datos_libro libroReg;
   int cont=1;
   int cantidad = contarLibros (arcLibro);                 //cuento los libros  que hay
   printf ("%d", cont);

   if (cantidad > 1) {
       system("CLS");
       printf( " \n\n Listado de libros existentes:  \n\n ");
       
       arcLibro = fopen("Biblioteca.dat","r+b");             //abrir el archivo fisico
       fseek(arcLibro,0,0);                              //ubicar el puntero en la primera posicion
       while((!(feof(arcLibro)))&&(cont<cantidad))       //mientras no sea fin de archivo hacer
       {fread (&Vlibro,sizeof(libro),1,arcLibro);        //lee el archivo registro por registro         
                       
          printf ("\n Libro  %d ",cont);
          printf ("\n ISBN      : %s ", Vlibro.isbn);
          printf ("\n Título    : %s ", Vlibro.Titulo);
          printf ("\n Autor     : %s ", Vlibro.Autor);
          printf ("\n Fecha de nacimiento del Autor: \n Día: %d   Mes: %d   Año: %d", Vlibro.N.dia, Vlibro.N.mes, Vlibro.N.anio);
          printf ("\n Fecha de la muerte del Autor: \n Día: %d   Mes: %d   Año: %d", Vlibro.M.dia, Vlibro.M.mes, Vlibro.M.anio);
          printf ("\n Editorial : %s ", Vlibro.Editorial);
          printf ("\n Género    : %s ", Vlibro.Genero);
          cont++;
          printf ("\n");
       }        
       fclose(arcLibro);
	   getch();                                 //cierro la conexion con el archivo    
   }
   else {
       system("CLS");
       printf( " \n\n No hay libros en existencia. \n\n ");
       getch();
   }    
}

void buscar (FILE *arcLibro, int x)
{
    int cont=1;
	char aux[50];
	arcLibro = fopen("Biblioteca.dat", "a+b");
	if (arcLibro==NULL){
                printf("\nError en el archivo");
                getch ();
            }
	else{			
	system ("cls");
	switch (x){
		case 1:{
			printf ("\nIngrese el ISBN: ");
			fflush (stdin);
        	gets(aux);
        	while (fread(&Vlibro, sizeof (libro), 1, arcLibro) == 1){
	    	if ((strstr(Vlibro.isbn, aux)!=NULL)&&(strlen(aux)==strlen(Vlibro.isbn))){  /*strstr (s1, s2) busca s1 en s2, siendo s1 y s2 cadenas de caracteres*/
		    	printf ("\n Libro  %d ", cont);                                         /*si s1 esta en s2 y si tienen el mismo tamaño se imprime*/
                printf ("\n ISBN      : %s ", Vlibro.isbn);                             /*esta condicion es debido a que s1 contiene a s2 esto implica que aveces no pueden ser la misma*/
                printf ("\n Título    : %s ", Vlibro.Titulo);                            
                printf ("\n Autor     : %s ", Vlibro.Autor);
                printf ("\n Fecha de nacimiento del Autor: \n Día: %d   Mes: %d   Año: %d", Vlibro.N.dia, Vlibro.N.mes, Vlibro.N.anio);
                printf ("\n Fecha de la muerte del Autor: \n Día: %d   Mes: %d   Año: %d", Vlibro.M.dia, Vlibro.M.mes, Vlibro.M.anio);
                printf ("\n Editorial : %s ", Vlibro.Editorial);
                printf ("\n Género    : %s ", Vlibro.Genero);
                cont++;
                printf ("\n");
	       	 }
	        }
	        fclose (arcLibro);
			break;
		}
		case 2:{
			printf ("\nIngrese el Titulo del libro: ");
			fflush (stdin);
        	gets(aux);
        	while (fread(&Vlibro, sizeof (libro), 1, arcLibro) == 1){
	        	if ((strstr(Vlibro.Titulo, aux)!=NULL)&&(strlen(aux)==strlen(Vlibro.Titulo))){
		    	printf ("\n Libro  %d ", cont);
                printf ("\n ISBN      : %s ", Vlibro.isbn);
                printf ("\n Título    : %s ", Vlibro.Titulo);
                printf ("\n Autor     : %s ", Vlibro.Autor);
                printf ("\n Fecha de nacimiento del Autor: \n Día: %d   Mes: %d   Año: %d", Vlibro.N.dia, Vlibro.N.mes, Vlibro.N.anio);
                printf ("\n Fecha de la muerte del Autor: \n Día: %d   Mes: %d   Año: %d", Vlibro.M.dia, Vlibro.M.mes, Vlibro.M.anio);
                printf ("\n Editorial : %s ", Vlibro.Editorial);
                printf ("\n Género    : %s ", Vlibro.Genero);
                cont++;
                printf ("\n");
	     	 }
	     }
	        fclose (arcLibro);
			break;
		}
		case 3:{
			printf ("\nIngrese el nombre del Autor: ");
			fflush (stdin);
        	gets(aux);
        	while (fread(&Vlibro, sizeof (libro), 1, arcLibro) == 1){
	    	if ((strstr(Vlibro.Autor, aux)!=NULL)&&(strlen(aux)==strlen(Vlibro.Autor))){
		    	printf ("\n Libro  %d ", cont);
                printf ("\n ISBN      : %s ", Vlibro.isbn);
                printf ("\n Título    : %s ", Vlibro.Titulo);
                printf ("\n Autor     : %s ", Vlibro.Autor);
                printf ("\n Fecha de nacimiento del Autor: \n Día: %d   Mes: %d   Año: %d", Vlibro.N.dia, Vlibro.N.mes, Vlibro.N.anio);
                printf ("\n Fecha de la muerte del Autor: \n Día: %d   Mes: %d   Año: %d", Vlibro.M.dia, Vlibro.M.mes, Vlibro.M.anio);
                printf ("\n Editorial : %s ", Vlibro.Editorial);
                printf ("\n Género    : %s ", Vlibro.Genero);
                cont++;
                printf ("\n");
	     	 }
	     }
	        fclose (arcLibro);
			break;
		}
		case 4:{
			printf ("\nIngrese el Género de los libros: ");
			fflush (stdin);
        	gets(aux);
        	while (fread(&Vlibro, sizeof (libro), 1, arcLibro) == 1){
	    	if ((strstr(Vlibro.Genero, aux)!=NULL)&&(strlen(aux)==strlen(Vlibro.Genero))){
		    	printf ("\n Libro  %d ", cont);
                printf ("\n ISBN      : %s ", Vlibro.isbn);
                printf ("\n Título    : %s ", Vlibro.Titulo);
                printf ("\n Autor     : %s ", Vlibro.Autor);
                printf ("\n Fecha de nacimiento del Autor: \n Día: %d   Mes: %d   Año: %d", Vlibro.N.dia, Vlibro.N.mes, Vlibro.N.anio);
                printf ("\n Fecha de la muerte del Autor: \n Día: %d   Mes: %d   Año: %d", Vlibro.M.dia, Vlibro.M.mes, Vlibro.M.anio);
                printf ("\n Editorial : %s ", Vlibro.Editorial);
                printf ("\n Género    : %s ", Vlibro.Genero);
                cont++;
                printf ("\n");
	     	 }
	     }
	        fclose (arcLibro);
			break;
		}
		case 5:{
			printf ("\nIngrese la Editorial de los libros: ");
			fflush (stdin);
        	gets(aux);
        	while (fread(&Vlibro, sizeof (libro), 1, arcLibro) == 1){
	    	if ((strstr(Vlibro.Editorial, aux)!=NULL)&&(strlen(aux)==strlen(Vlibro.Editorial))){
		    	printf ("\n Libro  %d ", cont);
                printf ("\n ISBN      : %s ", Vlibro.isbn);
                printf ("\n Título    : %s ", Vlibro.Titulo);
                printf ("\n Autor     : %s ", Vlibro.Autor);
                printf ("\n Fecha de nacimiento del Autor: \n Día: %d   Mes: %d   Año: %d", Vlibro.N.dia, Vlibro.N.mes, Vlibro.N.anio);
                printf ("\n Fecha de la muerte del Autor: \n Día: %d   Mes: %d   Año: %d", Vlibro.M.dia, Vlibro.M.mes, Vlibro.M.anio);
                printf ("\n Editorial : %s ", Vlibro.Editorial);
                printf ("\n Género    : %s ", Vlibro.Genero);
                cont++;
                printf ("\n");
	     	 }
	     }
	        fclose (arcLibro);
			break;
		}	
	}
	if (cont==1){
		printf ("\nNo se encontro ningún libro.");
	}
	fflush (stdin);
  } 
}

void metododebusqueda ()
{
	printf ("\n1) Buscar por ISBN.");
	printf ("\n2) Buscar por Titulo.");
	printf ("\n3) Buscar por Autor.");
	printf ("\n4) Buscar por Género.");
	printf ("\n5) Buscar por Editorial.\n");
}

void metododeborrado ()
{
	printf ("\n1) Borrar por ISBN.");
	printf ("\n2) Borrar por Titulo.");
	printf ("\n3) Borrar todos los libros de un Autor.");
	printf ("\n4) Borrar todos los libros de un Género.");
	printf ("\n5) Borrar todos los libros en existencia.");
	printf ("\n6) Borrar todos los libros de una Editorial.\n");
}

void borrar (FILE *arcLibro, int x)
{
	FILE *auxiliar;
	char aux[50];
	arcLibro = fopen("Biblioteca.dat", "r+b"); 
	auxiliar = fopen("Temporal.dat", "w+b");  /*crea un archivo temporal para copiar los archivos a conservar.*/
	if (arcLibro==NULL){
                printf("\n\n  Error en el archivo.");
                getch ();
            }
	else{
		system ("cls");
		switch (x){
			case 1:{
				printf ("\nIngrese el ISBN:   ");
			    fflush (stdin);
			    gets (aux);
			    while (fread(&Vlibro, sizeof(libro), 1, arcLibro) == 1){
			    	if ((strstr(Vlibro.isbn, aux)!=NULL)&&(strlen(aux)==strlen(Vlibro.isbn))){  /*si el isbn es exactamente igual no hace nada, es neceserio*/
					}                                                                           /*ya que pueden existir dos isbn tal que uno contenga al otro*/
					else{                                                                       /*ej: isbn:1234; isbn2:123456. si no existe esta condicion se eliminan los dos*/  
						fseek (auxiliar,0,SEEK_END);
			    		fwrite(&Vlibro, sizeof(libro),1,auxiliar);
					}
				}
				fclose (arcLibro);
				fclose (auxiliar);
				remove ("Biblioteca.dat");
				rename ("Temporal.dat", "Biblioteca.dat");
				printf ("\nHa sido eliminado con éxito.");
				break;
			}
			case 2:{
				printf ("\nIngrese el Titulo del libro:   ");
			    fflush (stdin);
			    gets (aux);
			    while (fread(&Vlibro, sizeof(libro), 1, arcLibro) == 1){
			    	if ((strstr(Vlibro.Titulo, aux)!=NULL)&&(strlen(aux)==strlen(Vlibro.Titulo))){
					}
					else{
						fseek (auxiliar,0,SEEK_END);
			    		fwrite(&Vlibro, sizeof(libro),1,auxiliar);
					}
				}
				fclose (arcLibro);
				fclose (auxiliar);
				remove ("Biblioteca.dat");
				rename ("Temporal.dat", "Biblioteca.dat");
				printf ("\nHa sido eliminado con éxito.");
				break;
			}
			case 3:{
				printf ("\nIngrese el Autor de los libros:   ");
			    fflush (stdin);
			    gets (aux);
			    while (fread(&Vlibro, sizeof(libro), 1, arcLibro) == 1){
			    	if ((strstr(Vlibro.Autor, aux)!=NULL)&&(strlen(aux)==strlen(Vlibro.Autor))){
					}
					else{
						fseek (auxiliar,0,SEEK_END);
			    		fwrite(&Vlibro, sizeof(libro),1,auxiliar);
					}
				}
				fclose (arcLibro);
				fclose (auxiliar);
				remove ("Biblioteca.dat");
				rename ("Temporal.dat", "Biblioteca.dat");
				printf ("\nHa sido eliminado con éxito.");
				break;
			}
			case 4:{
				printf ("\nIngrese el Género de los libros:   ");
			    fflush (stdin);
			    gets (aux);
			    while (fread(&Vlibro, sizeof(libro), 1, arcLibro) == 1){
			    	if ((strstr(Vlibro.Genero, aux)!=NULL)&&(strlen(aux)==strlen(Vlibro.Genero))){
					}
					else{
						fseek (auxiliar,0,SEEK_END);
			    		fwrite(&Vlibro, sizeof(libro),1,auxiliar);
					}
				}
				fclose (arcLibro);
				fclose (auxiliar);
				remove ("Biblioteca.dat");
				rename ("Temporal.dat", "Biblioteca.dat");
				printf ("\nHa sido eliminado con éxito.");
				break;
			}
			case 5:{
				fclose (arcLibro);
				fclose (auxiliar);
				remove ("Biblioteca.dat");
				rename ("Temporal.dat", "Biblioteca.dat");
				printf ("\nSe han eliminado todos los libros en existencia.");
				break;
			}
			case 6:{
				printf ("\nIngrese la Editorial de los libros:   ");
			    fflush (stdin);
			    gets (aux);
			    while (fread(&Vlibro, sizeof(libro), 1, arcLibro) == 1){
			    	if ((strstr(Vlibro.Editorial, aux)!=NULL)&&(strlen(aux)==strlen(Vlibro.Editorial))){
					}
					else{
						fseek (auxiliar,0,SEEK_END);
			    		fwrite(&Vlibro, sizeof(libro),1,auxiliar);
					}
				}
				fclose (arcLibro);
				fclose (auxiliar);
				remove ("Biblioteca.dat");
				rename ("Temporal.dat", "Biblioteca.dat");
				printf ("\nHa sido eliminado con éxito.");
				break;
			}
		}
	}
	fflush (stdin);
}

void inicializar (datos_libro &Vlibro)//PROCEDIMIENTO INICIALIZAR
{
    strcpy(Vlibro.isbn,"");
    strcpy(Vlibro.Titulo,"");
    strcpy(Vlibro.Autor,"");
    strcpy(Vlibro.Genero,"");
}

/*funcion principal*/

int main (void)
{
	int i=0;
   char opc=' ';
   // En esta área se debe verficar si existe el archivo de lo contrario debe crearlo 
    if ((arcLibro = fopen("Biblioteca.dat","r+"))==NULL){       //Verifica  si existe el archivo de libros, si es asi se conecta
       printf("\n\n  Archivo no existe. Se creará  en la dirección por defecto \n");
       arcLibro  = fopen("Biblioteca.dat","w+");               //si no existe se crea el archivo
       getch ();
      }
      fclose(arcLibro);
    // esta área controla el menú del archivo Libro
    do {
       system("CLS");
       printf( " Biblioteca de Prueba   \n\n ");
       printf( "\n1) Agregar Libro");
       printf( "\n2) Buscar Libros.");
       printf( "\n3) Listar Libros.");
       printf( "\n4) Borrar.");
       printf( "\n0) Salir. \n");
       printf ("\nIngrese una opción:   ");
       opc=getchar();
       inicializar(Vlibro);
       switch (opc) {
        case '1': agregarLibro (arcLibro, Vlibro);
                  break;
        case '2': {
        	      system ("cls");
        	      metododebusqueda ();
        	      printf ("\nIngrese la opción de busqueda:  ");
        	      scanf ("%d", &i);
        	      buscar (arcLibro, i);
        	      getch ();
			      break;
		          }
        case '3': listarLibros(arcLibro);
                  break;
        case '4': {
        	      system ("cls");
        	      metododeborrado ();
        	      printf ("\nIngrese la opción de busqueda:  ");
        	      scanf ("%d", &i);
        	      borrar (arcLibro, i);
        	      getch ();
			      break;
		          }
        case '0':
                  break;
        default: printf( "Verifique la opción seleccionada.");//en caso de que se equivoque en el menu, le muestro este mensaje
                  break;
        } 
    } while (opc!='0');
    return 0;   
    
}
