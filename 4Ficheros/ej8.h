#ifndef _ej8_
#define _ej8_

struct stock{

	char t[50];
	char a[50];
	float p;
	int u;

};

int numlibros(char *nombre);

struct stock *reservavector(int n);

int buscarlibro(char *titulo, struct stock *v, int x);

void introducirlibro(char *nombre, struct stock *v, int *n);

void actualizarf(char *nombre, char *fprov, struct stock *v);

void liberarv(struct stock *v);



#endif