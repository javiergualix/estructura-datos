#ifndef PILA_H
#define PILA_H
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Nodo.h"


class Pila
{
private:
	pNodo cima;
public:
	Pila() : cima(NULL) {}
	~Pila();
	void apilar(int v);
	void desapilar();

};

#endif // PILA_H
