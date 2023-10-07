#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ej5.h"

void copyfmayus(char *nombreF){

	FILE *f, *mayus;

	char cadena[100];
	char nombreFmayus[]="mayusculas-";
	strcat(nombreFmayus, nombreF);

	f=fopen(nombreF, "r");
	if(f==NULL){
		fprintf(stderr, "\nError: no pudo abrirse el fichero<%s>", nombreF);
		exit(-1);
	}

	mayus=fopen(nombreFmayus, "w");
	if(mayus==NULL){
		fprintf(stderr,"\nError: no pudo abrirse el fichero<%s>", nombreFmayus);
		exit(-1);
	}

	while(fgets(cadena, 100, f)!=NULL){

		if(cadena[strlen(cadena)-1]=='\n'){
			cadena[strlen(cadena)-1]='\0';
		}

		for(int i=0; i<strlen(cadena);i++){
			cadena[i]=toupper(cadena[i]);
		}

		fputs(cadena, mayus);
		fputs("\n", mayus);


	}
	printf("\n--CONVERTIDO CON EXITO A MAYUSCULAS--\n\n");

	fclose(f);
	fclose(mayus);
}