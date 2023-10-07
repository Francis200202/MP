#include <stdio.h>
#include "ej2.h"

int dividir(int a, int b, int n){
	
	if(a>=b){
		n++;
		a=a-b;
		dividir(a, b, n);
	}
	else{

		return n;

	}

}