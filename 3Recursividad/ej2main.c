#include <stdio.h>
#include "ej2.h"

int main(){
	
	int a, b, resultado=0;
	printf("Escribe dos numeros para calcular su division\n");
	printf("Num1= ");
	scanf("%i", &a);
	printf("Num2= ");
	scanf("%i", &b);

	resultado=dividir(a, b, resultado);

	printf("%i/%i= %i\n\n", a, b, resultado);

}