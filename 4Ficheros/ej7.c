#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ej7.h"

void calcmediaf(char *nombre){

	FILE* f;

	int aux, cont=0;
	float media=0;

	if((f=fopen(nombre, "r"))==NULL){
		fprintf(stdout, "Error: no se ha encotrado el fichero <%s>", nombre);
	}

	while(fscanf(f, "%i", &aux)!=EOF){

		if(aux%2==0){
			media=media+aux;
			cont++;

		}

	}
	media=media/cont;

	printf("\nMedia= %4.2f\n\n", media);

	fclose(f);

}