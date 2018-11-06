#ifndef NODO_H
#define NODO_H
#include <iostream>
#include <conio.h>
#include <stdio.h>

class Nodo
{
public:
	Nodo(int v, Nodo *sig); //No incluir el NULL que viene en las diapositivas
	~Nodo();
	
private:
	int valor;
	Nodo *siguiente;
	
friend class Cola;

};

typedef Nodo *pNodo;

#endif // NODO_H
