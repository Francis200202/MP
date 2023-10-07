#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

struct str **reservarEstructura(int nf, int nc){

	struct str **p;

	if((p=(struct str**)malloc(nf*sizeof (struct str*)))==NULL){

		printf("Error");
		exit(-1);

	}

	for(int i=0; i<nf; i++){

		if((p[i]=(struct str*)malloc(nc*sizeof (struct str)))==NULL){

			printf("Error");
			exit(-1);
		}
	}

	return(p);

}

void liberarst(struct str **p, int nf){

	for(int i=0;i<nf;i++){

		free(p[i]);
	}
	free(p);
}