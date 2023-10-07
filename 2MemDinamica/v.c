#include <stdio.h>
#include <stdlib.h>
#include "v.h"

int * reservaV(int n){
	int *v;
	
	if((v=(int*)malloc(n*sizeof(int)))==NULL){
		printf("Error");
		exit(-1);

	}

	return(v);
}