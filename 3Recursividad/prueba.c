#include <stdio.h>
#include "prueba.h"

int factorial(int n)
{
	int resultado;
	if(n==0){
		resultado=1;
	}
	else{
		resultado=n*factorial(n-1);
	}
	return resultado;
}