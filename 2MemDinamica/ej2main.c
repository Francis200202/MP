#include <stdio.h>
#include <stdlib.h>
#include "ej2.h"

int main(){
	
	int *v, n=10;

	v=reservarVector(n);

	/*if((v=(int*)malloc(n*sizeof(int)))==NULL){

		printf("Error: no pudo asignarse memoria");
		exit(-1);

	}*/

	for(int i=0;i<n;i++){

		printf("v[%i]= ", i);
		scanf("%i", &v[i]);

	}
	imprimeV(v);

	free(v);
}