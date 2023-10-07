#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "ej6.h"

int main(){
	
	int n, sup, inf;
	char nombre[30];

	printf("Nombre del fichero\n");
	scanf("%s", nombre);

	printf("Escribe el numero de elementos que va a tener el fichero\n");
	scanf("%i", &n);

	printf("Extremo superior del intervalo\n");
	scanf("%i", &sup);

	printf("Extremo inferior del intervalo\n");
	scanf("%i", &inf);

	rellenarFichero(nombre, n, &sup, &inf);


}