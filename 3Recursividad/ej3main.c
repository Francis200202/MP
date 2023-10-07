#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "ej3.h"


int main(){

	char cad[100], x;
	int cont=0, i;
	printf("Escribe una cadena: ");
	fgets(cad, 100, stdin);
	printf("¿Que caracter quieres buscar en la cadena?\n");
	scanf("%c",&x);
	i=strlen(cad)-1;
	Nveces(cad, x, cont, i);
	

	
}