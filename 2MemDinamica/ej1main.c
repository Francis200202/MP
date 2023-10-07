#include <stdio.h>
#include <stdlib.h>
#include "ej1.h"

int main(){
	int nfil=2, ncol=3;
	float** tabla;

	tabla=reservaMatrizDinamicaPorFilas(nfil, ncol);
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){

			printf("\ntabla[%i][%i]= ", i, j);
			scanf("%f", &tabla[i][j]);
		}
	}

	imprimirmatriz(tabla);

free(tabla);


}