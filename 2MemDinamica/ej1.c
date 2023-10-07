#include <stdio.h>
#include <stdlib.h>
#include "ej1.h"

float** reservaMatrizDinamicaPorFilas(int nfil, int ncol){

	float **tabla;
	int i, j, error=0;
	tabla=(float**)malloc(nfil*sizeof(float*));
	for(i=0; i<nfil; i++){
		tabla[i]=(float*)malloc(ncol*sizeof(float));

	}
	return(tabla);

}

void imprimirmatriz(float **tabla){

	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){

			printf("tabla[%i][%i]= %f\n", i, j, tabla[i][j]);
		}
	}
}