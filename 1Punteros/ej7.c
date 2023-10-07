#include <stdio.h>
#include <math.h>
#include "ej7.h"

void leerVector(int v[], int n){
	
	printf("Escribe los datos del vector\n");
	for(int i=0;i<n;i++){

		printf("\nV[%i]->", i);
		scanf("%i", &v[i]);

	}
}

void estadisticasVector(int v[], int n, float *media, float *varianza, float *dtipica){

	for(int i=0;i<n;i++){

		*media=*media+v[i];

	}
	*media=*media/n;

	for(int i=0;i<n;i++){

		*varianza= *varianza + ((v[i] - *media) * (v[i] - *media));

	}
	*varianza=*varianza/n;

	*dtipica= sqrt(*varianza);

}

