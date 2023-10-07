#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ej8.h"

int numlibros(char *nombre){
	int n=0;

	FILE *f;
	char cadena[50];

	f=fopen(nombre, "a");
	while(fgets(cadena, 50, f)!=NULL){
		fgets(cadena, 50, f);
		fgets(cadena, 50, f);
		n++;

	}
	fclose(f);
	return n+1;

}

struct stock *reservavector(int n){

	struct stock *v;

	if((v=(struct stock*)realloc(NULL, n+1*sizeof(struct stock)))==NULL){
		printf("Error al reservar memoria");
		exit(-1);

	}
	return(v);
}

int buscarlibro(char *titulo, struct stock *v, int x){

	for(int i=0;i<x;i++){

		if(v[i].t==titulo){
			return x;
		}
		
		
	}
	return -1;

}



void introducirlibro(char *nombre, struct stock *v, int *n){

	FILE* f;

	int pos;
	char titulo[50];

	f=fopen(nombre, "a");

	printf("Nombre del titulo\n");
	scanf("%s", titulo);
	int x=(*n)-1;

	pos=buscarlibro(titulo, v, x);
	if(pos!=-1){
		v[pos].u=v[pos].u+1;

	}
	else{
		strcpy(v[(*n)].t, titulo);
		printf("Autor del libro\n");
		scanf("%s", v[(*n)].a);
		printf("Precio del libro\n");
		scanf("%f", &v[(*n)].p);
		printf("Unidades: ");
		scanf("%i", &v[(*n)].u);
		fprintf(f, "%s\n%s\n%f  %i\n", v[(*n)].t, v[(*n)].a, v[(*n)].p, v[(*n)].u);
		(*n)++;

	}

fclose(f);
}

void actualizarf(char *nombre, char *fprov, struct stock *v){

	FILE *f, *fp;

	char cadena[50];

	f=fopen(nombre, "r");
	fp=fopen(fprov, "w");

	while(fscanf(f, "%s\n%s\n%f  %i\n", v->t, v->a, v->p, v->u)!=EOF){
		

		if(cadena[strlen(cadena-1)]=='\n'){

			cadena[strlen(cadena-1)]='\0';

			fprintf(fp, "%s", cadena);

		}
		
	}
	fclose(f);
	fclose(fp);

	remove(nombre);

	rename(fprov, nombre);
	

}

void liberarv(struct stock *v){

	free(v);
}