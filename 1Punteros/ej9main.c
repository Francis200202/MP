/**************************************************************************
Un monomio (5x3) puede codificarse en C mediante una estructura con 
dos campos enteros coeficiente y grado (ej. coeficiente=5, grado=3).  
Por su parte, un polinomio es una sucesión de monomios de diferente grado 
(5x3 + 7x2 + 4x5).

a)Implementa una función denominada leerMonomio, que 
reciba una estructura pasada porreferencia y permita leer los datos de un monomio.

b)Implementa una función denominada  imprimirMonomio, que reciba una estructura 
porvalor y muestre el coeficiente y el grado del monomio.

c)Utilizando las funciones anteriores, en el programa principal lee y escribe 
un polinomio(vector de monomios). 

d)Crea una función que, usando paso de parámetros por referencia, devuelva el monomio 
demayor grado y el de menor grado. Utilízala en tu programa.

e)Crea un función que evalúe un polinomio en un punto X. Utilízala en tu programa.
**************************************************************************/

#include <stdio.h>
#include "ej9.h"


int main(){

struct Monomio monomio, pol[10];

int n;

leerMonomio(&monomio);
imprimirMonomio(monomio);

printf("De cuantos monomios quiere que sea el polinomio(max 10)");
scanf("%i",&n);

for(int i=0;i<n;i++){

	leerMonomio(&monomio);
	pol[i].coef=monomio.coef;
	pol[i].grado=monomio.grado;

}

maymen(pol, n);


}