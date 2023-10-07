#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ej7.h"

int main(int argc, char **argv){

	if(argc!=2){
		printf("Error: no se ha introducido el nombre del fichero o se ha introducido mas de un nombre");
		exit(-1);
	}

	char *nombre=argv[1];


	calcmediaf(nombre);


}