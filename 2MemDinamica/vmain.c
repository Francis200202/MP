#include <stdio.h>
#include <stdlib.h>
#include "v.h"

int main(){
	

	int *v, n=5;

	v=reservaV(n);

	free(v);
}