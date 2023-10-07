#ifndef __EJ9__
#define __EJ9__


struct Monomio{

	int coef, grado;

};

void leerMonomio(struct Monomio* monomio);

void imprimirMonomio(struct Monomio monomio);

void maymen(struct Monomio pol[], int n);

#endif