#include <stdio.h>
#include "ej9.h"


void leerMonomio(struct Monomio* monomio){

	printf("Coeficiente del monomio= ");
	scanf("%i", &(*monomio).coef);
	printf("\nGrado del monomio= ");
	scanf("%i", &(*monomio).grado);

}

void imprimirMonomio(struct Monomio monomio){

	printf("\nMonomio= %ix^%i\n\n", monomio.coef, monomio.grado);

}

void maymen(struct Monomio pol[], int n){
	int menor=pol[0].grado, mayor=pol[0].grado, x, y;

	for(int i=0;i<n;i++){

		if(pol[i].grado<menor){

			menor=pol[i].grado;
			x=i;

		}
		if(pol[i].grado>mayor){

			mayor=pol[i].grado;
			y=i;

		}


	}

	printf("El monomio mayor es %ix%i y el menor %ix%i", pol[y].coef, pol[y].grado, pol[x].coef, pol[x].grado );


}