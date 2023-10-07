#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ej8.h"



int main(){
	
	int opcion=0, n;
	char nombre[]="ej8.txt";
	char fprov[]="ej8prov.txt";

	struct stock *v;

	n=numlibros(nombre);

	while(opcion!=7){

		
		v=reservavector(n);

		printf("1.-Comprobar libro\n");
		printf("2.-Introducir libro\n");
		printf("3.-Contar libros\n");
		printf("4.-Listar libros\n");
		printf("5.-Vender libros\n");
		printf("6.-Borrar libros agotados\n");
		printf("7.-SALIR\n\n");
		printf("Elige una opcion= ");
		scanf("%i", &opcion);

		switch(opcion){
			case 1:
				printf("Prueba\n\n");
				break;

			case 2:

				introducirlibro(nombre, v, &n);

				break;

			case 3:
				printf("Prueba\n\n");
				break;

			case 4:
				printf("Prueba\n\n");
				break;

			case 5:
				printf("Prueba\n\n");
				break;

			case 6:
				printf("Prueba\n\n");
				break;

			default:
				opcion=7;


		break;
		}


	};
actualizarf(nombre, fprov, v);

liberarv(v);
	


}