#include <stdio.h>
#include <stdlib.h>
#include <strint.h>

int main(){

	FILE *f, *fp;

	f=fopen("actualizar.txt", "a");
	fp=fopen("acprov.txt", "w");

	char hola[50];

	for(int i=0;i<10; i++){
		scanf("%s", hola);
		fputs(hola, f);

	}

	while(fgets(cadena, 50, f)!=EOF){

		if(cadena[strlen(cadena-1)]=='\n'){
			cadena[strlen(cadena-1)]=='\0';
		}
		fputs(cadena, fp);


	}
	fclose(f);
	fclose(fp);

	remove("actualizar.txt");
	rename("acprov.txt", "actualizar.txt" )


}