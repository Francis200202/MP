#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ej6.h"

void rellenarFichero(char *nombre, int n, int *sup, int *inf){

	FILE* f;

	f=fopen(nombre, "a");

	srand(time(NULL));

	int v[n];
	

	for(int i=0;i<n;i++){

		v[i]=rand()%((*sup)-(*inf)+1)+(*inf);


		
		fprintf(f, "%i\n",v[i]);

	}
fclose(f);

}