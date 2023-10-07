all: saludo ej5.exe clean

.PHONY: saludo
saludo:
	@echo Ejecutando makefile de Francis

ej5.exe: ej5main.o ej5.o
	gcc -o ej5.exe ej5main.o ej5.o

ej5main.o: ej5main.c ej5.h
		gcc -c ej5main.c


ej5.o: ej5.c ej5.h
		gcc -c ej5.c

.PHONY: clean
clean:
	@echo Borrado listo
	@rm *.o