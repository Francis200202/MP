#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "ej3.h"

void Nveces(char cad[], char x, int cont, int i){
printf("%i.",i);
	if(i>0){
		if(cad[i]==x){
			Nveces(cad, x, cont+1, i-1);
		}else{
			Nveces(cad, x, cont, i-1);
		}
	}else{

	printf("\nEl caracter '%c' aparece %i veces\n", x, cont);
	}	

}