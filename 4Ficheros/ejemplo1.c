#include <stdio.h>
#include <stdlib.h>
#include "ejemplo1.h"



void leeVersion1(char* nombreF){

	FILE* fich;

	char cadena[30];
	int edad;
	float saldo;

	fich=fopen(nombreF, "r");

	while(fgets(cadena, 30, fich)!=NULL){
		int x= strlen(cadena)-2;

		printf("Cadena-1= %d", x);
		printf("Cadena-1= %d", cadena[strlen(cadena)-2]);

	    if(cadena[strlen(cadena)-1]=='\n'){

	     	cadena[strlen(cadena)-1]='\0';
	     }

	     printf("\nNombre y apellidos: <%s>", cadena);

	     fgets(cadena, 30, fich);
	     sscanf(cadena, "%i", &edad);
	     printf("\n\tEdad: <%i>\n", edad);

	     fgets(cadena, 30, fich);
	     sscanf(cadena, "%f", &saldo);
	     printf("\tSaldo: <%4.2f>\n\n", saldo);

	    
	}

	fputs("AntonioM Sanchez Camargo\n", fich);
	fputs("18\n", fich);
	fputs("35\n", fich);

	fclose(fich);

}