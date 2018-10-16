#ifndef NODO_H
#define NODO_H
#include <iostream>
#include <conio.h>
#include <stdio.h>

class Nodo
{
private:
	int valor;
	Nodo *siguiente;
	
public:
	Nodo(int v, Nodo *sig); //No incluir el NULL que viene en las diapositivas
	~Nodo();
	
friend class Pila; //Así puede acceder a la clase sin un método público (Hay que ponerlo fuera del private y el public)

};

typedef Nodo *pNodo;

#endif // NODO_H
