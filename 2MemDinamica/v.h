/**
	@file v.h
	@brief Ejemplo de como reservar un vector
	@author Francis Jurado Erencia
	@date 18/04/2021
	@version 1.0

	Lo siguiente son las funciones que he utilizado, en este caso solo 1
	@li reservaV
*/

#ifndef vec
#define vec

/**
	@fn int * reservaV(int n)
	@brief Funcion que reserva memoria para un vector dinamico

	@param n Es el numero de bytes que se reservan
	@return Retorna la memoria reservada sin inicializar
*/

int * reservaV(int n);

#endif