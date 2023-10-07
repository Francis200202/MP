#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char *culo = "Andrea tiene";
	int ano=18;
	char hola[20];
	char Andrea[20];
	char tiene[20];
	int num;
	char year[20];
	
	FILE *f;

	if((f=fopen("fprintf.txt", "r"))==NULL){

		printf("\n--ERROR--\n");
		exit(-1);

	}

	fprintf(f, "Hola \n%s \n%i anos", culo, ano );

	while(fscanf(f,"%s\n%s%s\n%i%s", hola, Andrea, tiene, &num, year)==5){;

	printf("\nanos =%s %i %s\n", hola, num, year);

	}

	fclose(f);


}