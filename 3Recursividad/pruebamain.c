#include <stdio.h>
#include "prueba.h"

int main(){

int n, resultado;
printf("Escribe un numero para calcular su factorial:\n");
scanf("%i",&n);

resultado=factorial(n);

printf("\n\n%i!= %i\n\n", n, resultado);

}