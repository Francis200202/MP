#include <stdio.h>
#include <stdlib.h>
#include "mdinamica.h"
/*
int **reservam(int i, int j){
	int **m;
	

	if((m=(int**)malloc(i*sizeof(int*)))==NULL){
		printf("Error");
		exit(-1);

	}
	m=(int**)malloc(i*sizeof(int*));
	
	for(int x=0;x<i;x++){

		if((m[x]=(int*)malloc(j*sizeof(int)))==NULL){
			printf("Error");
			exit(-1);

		}

		m[i]=(int*)malloc(j*sizeof(int));

	}
	return(m);
}*/

void reservam(int ***m, int i, int j){

	if((*m=(int**)malloc(i*sizeof(int*)))==NULL){

		printf("Error");

	}
	*m=(int**)malloc(i*sizeof(int*));
	for(int x=0;x<i;x++){
		if(((*m)[x]=(int*)malloc(j*sizeof(int)))==NULL){
			printf("Error");
		}
		(*m)[x]=(int*)malloc(j*sizeof(int));
	}
}

void leerm(int ***m, int i, int j){

	printf("\nLeer matriz:\n");

	for(int x=0;x<i;x++){
		for(int y=0;y<j;y++){
			printf("M[%i][%i]= ", x, y);
			scanf("%i", &(*m)[x][y]);
		}

	}

}

void imprimirm(int ***m, int i, int j){

	printf("\nImprimir matriz:\n");

	for(int x=0;x<i;x++){
		for(int y=0;y<j;y++){
			printf("M[%i][%i]= %i\n", x, y, (*m)[x][y]);
			
		}

	}


}