#ifndef stru
#define stru

struct str {
	int x;

};

struct str **reservarEstructura(int nf, int nc);

void liberarst(struct str **p, int nf);

#endif