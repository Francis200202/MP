#include <stdio.h>
#include <stdlib.h>
#define MAX 256

int main(){
	
	FILE* f;
	char nombreF[]="clientes.txt";
	char nombre[50], apell1[50], apell2[50];
	int num;
	float interes;
	int total;

	if((f=fopen(nombreF, "r"))==NULL){
		fprintf(stderr, "\nError: no pudo abrirse el fichero<%s>", nombreF);
		exit(-1);
	}

	while(fscanf(f, "%s%s%s%i%f%i", nombre, apell1, apell2, &num, &interes, &total)==6){

		printf("\nCliente Num. %3i: %s %s, %s", num, apell1, apell2, nombre);
		printf("\n\tDeuda total= %7i. Interes=%4.2f\n", total, interes);
	}

	fclose(f);
	return(0);

}