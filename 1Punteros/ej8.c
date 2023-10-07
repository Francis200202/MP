#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "ej8.h"

void estadisticasCadena(char cad[], int *numdig, int *mayus, int *minus, int *espacios){

*numdig=strlen(cad)-1;

	for(int i=0;i<=*numdig;i++){

		if(isupper(cad[i])!=0){

			*mayus=*mayus+1;
		}

		if(islower(cad[i])!=0){

			*minus=*minus+1;
		}

		if(cad[i]==32){

			*espacios=*espacios+1;
		}

	}

}