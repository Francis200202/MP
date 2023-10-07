#include <stdio.h>
#include "ej6.h"

int main(){
	
	int num1, num2, min, resultado;

	printf("Numero 1= ");
	scanf("%i",&num1);

	printf("\nNumero 2= ");
	scanf("%i",&num2);

	min = minimo(num1, num2);

	minimo_referencia(num1, num2, &resultado);

	printf("\n\nMinimo= %i", min);
	printf("\nResultado= %i\n", resultado);

	return 0;
}