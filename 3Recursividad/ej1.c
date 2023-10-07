#include <stdio.h>
#include "ej1.h"

int mcd(int x, int y){
	int mod;
	if(y==0){

	return x;

	}
	else{
		mod=x%y;

		mcd(y,mod);

	}

}