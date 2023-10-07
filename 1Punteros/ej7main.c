#include <stdio.h>
#include <math.h>
#include "ej7.h"

int main(){
	
	int n;
	float media=0, varianza=0, dtipica=0;
	printf("Escribe el tamano del vector\n");
	scanf("%i", &n);
	int v[n];

	leerVector(v,n);

	estadisticasVector(v, n, &media, &varianza, &dtipica);

	printf("\nMedia= %f\nVarianza= %f\nDesviacion tipica= %f\n\n", media, varianza, dtipica);

}