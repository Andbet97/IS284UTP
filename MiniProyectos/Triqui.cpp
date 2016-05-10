/*Mini Juego (Mini Proyecto) Triqui*/
/*Proyecto creado por Andrés Felipe Betancurt Rivera*/
/*librerias*/

#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*variables globales*/

int X_Ascii[9]={92,0,47,
                0,88,0,
				47,0,92};   /*valor númerico de los caracteres '\'-->92, '(espacio)'-->0, '/'-->47 y 'X'-->88*/

int O_Ascii[9]={0,79,0,
                79,79,79,
				0,79,0};   /*valor númerico de los caracteres 'o'-->79 y '(espacio)'-->0*/

int Tablero[121]={32,32,32,179,32,32,32,179,32,32,32,    
                  32,49,32,179,32,50,32,179,32,51,32,
				  32,32,32,179,32,32,32,179,32,32,32,
				  196,196,196,197,196,196,196,197,196,196,196,
				  32,32,32,179,32,32,32,179,32,32,32,
				  32,52,32,179,32,53,32,179,32,54,32,
				  32,32,32,179,32,32,32,179,32,32,32,
				  196,196,196,197,196,196,196,197,196,196,196,
				  32,32,32,179,32,32,32,179,32,32,32,
				  32,55,32,179,32,56,32,179,32,57,32,
				  32,32,32,179,32,32,32,179,32,32,32};   /*valor númerico de los caracteres '|'-->179, '(espacio)'-->32, '+'-->197 y '-'-->196*/
/*En el tablero las posiciones */
int v1[9]={0,1,2,11,12,13,22,23,24}; /*corresponden a la primera casilla del truqui,*/
/*las posiciones*/int v2[9]={4,5,6,15,16,17,26,27,28}; /*a la segunda casilla,*/
int v3[9]={8,9,10,19,20,21,30,31,32}; /*a la tercera casilla,*/
int v4[9]={44,45,46,55,56,57,66,67,68};/* a la cuarta casilla,*/
int v5[9]={48,49,50,59,60,61,70,71,72}; /*a la quinta casilla,*/
int v6[9]={52,53,54,63,64,65,74,75,76}; /*a la sexta casilla,*/
int v7[9]={88,89,90,99,100,101,110,111,112}; /*a la septima casilla,*/
int v8[9]={92,93,94,103,104,105,114,115,116}; /*a la octava casilla,*/
int v9[9]={96,97,98,107,108,109,118,119,120}; /*a la novena casilla.*/
int Vc[9]={12,16,20,56,60,64,100,104,108};/*son los centros de las casillas*/

/*funciones prototipo*/

void imprimir (int *x)    /*Se encarga de imprimir el tablero de juego*/
{
	int i=0;
    while (i<121){
        if ((i%11==0)&&(i != 0))
       	{printf ("\n");}
       	printf ("%c", x[i]);
       	i++;
       }	
}

int det_ganador (int *v)  /*Función que detemina el ganador. *v es Tablero*/
{
	if (((v[12]==88)&&(v[60]==88)&&(v[108]==88))||((v[16]==88)&&(v[60]==88)&&(v[104]==88))||((v[20]==88)&&(v[60]==88)&&(v[100]==88))||((v[56]==88)&&(v[60]==88)&&(v[64]==88))||
	   ((v[12]==88)&&(v[56]==88)&&(v[100]==88))||((v[12]==88)&&(v[16]==88)&&(v[20]==88))||((v[20]==88)&&(v[64]==88)&&(v[108]==88))||((v[100]==88)&&(v[104]==88)&&(v[108]==88)))
	   return 1; /*Gna el jugador 1*/
	if (((v[12]==79)&&(v[60]==79)&&(v[108]==79))||((v[16]==79)&&(v[60]==79)&&(v[104]==79))||((v[20]==79)&&(v[60]==79)&&(v[100]==79))||((v[56]==79)&&(v[60]==79)&&(v[64]==79))||
	   ((v[12]==79)&&(v[56]==79)&&(v[100]==79))||((v[12]==79)&&(v[16]==79)&&(v[20]==79))||((v[20]==79)&&(v[64]==79)&&(v[108]==79))||((v[100]==79)&&(v[104]==79)&&(v[108]==79)))
	   return 2; /*Gana el jugador 2 o la maquina*/
	else 
	return -1; /*No gana nadie hasta el momento*/
}

void mod_tablero (int *v, int x, int turno)
{
	/*x es el número de casilla escogido. *v es Tablero. turno es el jugador actual*/
	if (turno == 1){
		switch (x){
			case 1:{
				for (int i=0; i<10; i++){
				    v[v1[i]]=X_Ascii [i];}
				break;
			}
			case 2:{
				for (int i=0; i<10; i++){
				    v[v2[i]]=X_Ascii [i];}
				break;
			}
			case 3:{
				for (int i=0; i<10; i++){
				    v[v3[i]]=X_Ascii [i];}
				break;
			}
			case 4:{
				for (int i=0; i<10; i++){
				    v[v4[i]]=X_Ascii [i];}
				break;
			}
			case 5:{
				for (int i=0; i<10; i++){
				    v[v5[i]]=X_Ascii [i];}
				break;
			}
			case 6:{
				for (int i=0; i<10; i++){
				    v[v6[i]]=X_Ascii [i];}
				break;
			}
			case 7:{
				for (int i=0; i<10; i++){
				    v[v7[i]]=X_Ascii [i];}
				break;
			}
			case 8:{
				for (int i=0; i<10; i++){
				    v[v8[i]]=X_Ascii [i];}
				break;
			}
			case 9:{
				for (int i=0; i<10; i++){
				    v[v9[i]]=X_Ascii [i];}
				break;
			}
		 }
		}
		else{
		   switch (x){
			case 1:{
				for (int i=0; i<10; i++){
				    v[v1[i]]=O_Ascii [i];}
				break;
			}
			case 2:{
				for (int i=0; i<10; i++){
				    v[v2[i]]=O_Ascii [i];}
				break;
			}
			case 3:{
				for (int i=0; i<10; i++){
				    v[v3[i]]=O_Ascii [i];}
				break;
			}
			case 4:{
				for (int i=0; i<10; i++){
				    v[v4[i]]=O_Ascii [i];}
				break;
			}
			case 5:{
				for (int i=0; i<10; i++){
				    v[v5[i]]=O_Ascii [i];}
				break;
			}
			case 6:{
				for (int i=0; i<10; i++){
				    v[v6[i]]=O_Ascii [i];}
				break;
			}
			case 7:{
				for (int i=0; i<10; i++){
				    v[v7[i]]=O_Ascii [i];}
				break;
			}
			case 8:{
				for (int i=0; i<10; i++){
				    v[v8[i]]=O_Ascii [i];}
				break;
			}
			case 9:{
				for (int i=0; i<10; i++){
				    v[v9[i]]=O_Ascii [i];}
				break;
			}
		}	
	}
}	

void ganador (int x)
{
	if (x==1){
		printf ("\nEl ganador es el jugador 1.");
	}
	else{
		if (x==2){
			printf ("\nEl ganador es el jugador 2.");
		}
		else{
			printf ("\nNo hay ganador, es un empate.");
		}
	}
}

void fun1 ()
{
	int i=0; /*i es el turno (los pares corresponden al jugador 2 y los impares al jugador 1)*/
	int x=0; /*x es la casilla del tabñero a seleccionar*/
	while (i<10){
		system ("cls");
		imprimir (Tablero);
		if ((det_ganador (Tablero)==1)||(det_ganador (Tablero)==2)){
				break;
			}
		else{
			printf ("\n\n\nIngrese la casilla que desea :   ");
		    scanf ("%d", &x);
		    {
			if ((x>10)||(x<1)){
			printf ("\nIngrese una opción válida.");
			getch ();
	    	}
			else{
				if ((Tablero[Vc[x-1]]==88)||(Tablero[Vc[x-1]]==79)){
					printf ("\nLa casilla seleccionada ya ha sido escogida.");
					getch ();
				}
		    	else{
			        if (i%2==0){
				       mod_tablero (Tablero, x, 1);
				       i++;
			        }
			        else{
				       mod_tablero (Tablero, x, 2);
				       i++;
			        }
			    }
	        }
	        }
		}
		if (i==9)
		i++;
	}
	system ("cls");
	imprimir (Tablero);
	ganador (det_ganador (Tablero));
}

void fun2 ()
{
	int i=0; /*i es el turno (los pares corresponden al jugador 2 y los impares al jugador 1)*/
	int x=0; /*x es la casilla del tabñero a seleccionar*/
	while (i<10){
		system ("cls");
		imprimir (Tablero);
		if ((det_ganador (Tablero)==1)||(det_ganador (Tablero)==2)){
				break;
			}
		else{
			if (i%2==0){
				printf ("\n\n\nIngrese la casilla que desea :   ");
		        scanf ("%d", &x);
			    if ((x>10)||(x<1)){
			    printf ("\nIngrese una opción válida.");
			    getch ();
	    	    } 
	    	    else{
	    	    	if ((Tablero[Vc[x-1]]==88)||(Tablero[Vc[x-1]]==79)){
	    	    		printf ("\nLa casilla seleccionada ya ha sido escogida.");
	    	    		getch ();
					}
				    else{
					    mod_tablero (Tablero, x, 1);
				        i++;}
				}
			}
			else{
				x=1+(rand()%9);
				if ((Tablero[Vc[x-1]]==88)||(Tablero[Vc[x-1]]==79)){
	    	    		printf ("\nLa casilla seleccionada ya ha sido escogida.");
	    	    		getch ();
					} 
				else {
				     mod_tablero (Tablero, x, 2);
				     i++;
				}
			}
	     
		}
		if (i==9)
		i++;
	}
	system ("cls");
	imprimir (Tablero);
	ganador (det_ganador (Tablero));
}

void limpiar_tablero (int *t)
{
	for (int i=0; i<10; i++){
		Tablero [v1[i]]=32;
		Tablero [v2[i]]=32;
		Tablero [v3[i]]=32;
		Tablero [v4[i]]=32;
		Tablero [v5[i]]=32;
		Tablero [v6[i]]=32;
		Tablero [v7[i]]=32;
		Tablero [v8[i]]=32;
		Tablero [v9[i]]=32;
	}
	for (int i=0; i<10; i++){
		Tablero [Vc[i]]=49+i;
	}
}
/*----------------------------------------------------------------------------------------------------------------------------*/
/*---------------------------------------MENU PRINCIPAL Y SUBMENU MODO DE JUEGO-----------------------------------------------*/
/*----------------------------------------------------------------------------------------------------------------------------*/

void menu_principal ()
{
	printf ("  TRIQUI\n\n");
	printf ("1. Jugar.");
	printf ("\n0. Salir.");
	printf ("\n\nIngrese la opción seleccionada:  ");
}

void submenu ()
{
	printf (" MODO DE JUEGO\n\n");
	printf ("1. P1vsP2.");
	printf ("\n2. P1vsCOM.");
	printf ("\n0. Retroceder.");
	printf ("\n\nIngrese la opción seleccionada:  ");
}


/*funcion principal*/

int main ()
{
	int opc=-1;
	int opc2=-1;
	do {
		system ("cls");
		menu_principal ();
		scanf ("%d", &opc);
	switch (opc){
		case 1:{
			system ("cls");
			submenu ();
			scanf ("%d", &opc2);
				switch (opc2){
					case 1:{
						fun1 ();
						getch ();
						limpiar_tablero (Tablero);
						break;
					}
					case 2:{
						fun2 ();
						getch ();
						limpiar_tablero (Tablero);
						break;
					}
					case 0:{
					   system ("cls");
                       opc=-1;
                       break;
					}
				}
		
			break;
		}
		case 0:{
			break;
		}
	  }
	}while (opc !=0);	
	//getch ();
}
