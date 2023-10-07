#include <stdio.h>
#include "ej1.h"

int main(){

	int x, y, resultado;

	printf("Escribe 2 numeros (num1>=num2)\n");
	printf("Num1= ");
	scanf("%i", &x);
	printf("\nNum2= ");
	scanf("%i", &y);

	if(x>=y){

		resultado=mcd(x,y);
		printf("\nEl maximo comun divisor es %i\n\n", resultado);

	}
	else{

		printf("\nERROR, num2 no puede ser menor a num1\n\n");
	}

}