#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int main(){

	int nf=3, nc=3;
	
	struct str **p;

	p=reservarEstructura(nf, nc);

	liberarst(p, nf);



}