#ifndef COLA_H
#define COLA_H
#include "Nodo.h"

class Cola
{
public:
	Cola();
	~Cola();
	bool esVacia();
	void encolar(int v);
	void desencolar();
	int verPrimero();
private:
	pNodo inicio, fin;

};

#endif // COLA_H
