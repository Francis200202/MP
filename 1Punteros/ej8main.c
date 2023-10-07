#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "ej8.h"

int main(){
	
	char cad[100];
	int numdig=0, mayus=0, minus=0, espacios=0;
	printf("Escribe algo:");
	fgets(cad, 100, stdin);

	estadisticasCadena(cad, &numdig, &mayus, &minus, &espacios);

	printf("Numero de digitos-> %i \nNumero de mayusculas-> %i \nNumero de minusculas-> %i \nNumero de espacios-> %i\n\n", numdig, mayus, minus, espacios);

}