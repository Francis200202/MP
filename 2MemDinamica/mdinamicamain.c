#include <stdio.h>
#include <stdlib.h>
#include "mdinamica.h"

int main(){
	
	int i, j;
	int **m;
	printf("Filas de la matriz= ");
	scanf("%i", &i);
	printf("Columnas de la matriz= ");
	scanf("%i", &j);

	/*m=reservam(i, j);*/

	reservam(&m, i, j);

	leerm(&m, i, j);

	imprimirm(&m, i, j);

	
free(m);


}