#include <stdio.h>
#include <stdlib.h>
#include "ej2.h"

int *reservarVector(int n){

	int *v;

	if((v=(int*)malloc(n*sizeof(int)))==NULL){

		printf("Error: no pudo asignarse memoria");
		exit(-1);

	}

	return(v);

}

void imprimeV(int v[]){

	for(int i=0;i<10;i++){
		printf("\n%i", v[i]);
	}
}