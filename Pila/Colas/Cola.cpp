#include "Cola.h"

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

Cola::Cola()
{
	fin = NULL;
	inicio = NULL;
}

Cola::~Cola()
{
	while (inicio)
	{
	 desencolar();
	}
}

bool Cola::esVacia()
{
	return inicio == NULL;
}

void Cola::encolar (int v)
{
	pNodo nuevo;
	nuevo = new Nodo(v,inicio);
	// Si cola no vacía, se añade el nuevo a continuación del último
	if (fin)
	{
		fin -> siguiente = nuevo;
	}
	
	fin = nuevo;
	//si 1º es NULL, la cola vacía, 1º apunta al nuevo nodo
	
	if (esVacia())
	{
		inicio = nuevo;
	}
}

void Cola::desencolar()
{
	if (esVacia())
	{
		cout << "Cola vacía" << endl;
	}
	else
	{
		pNodo nodo; //Var aux para manipular nodo
		nodo = inicio; //Nodo apunta al primer elemento de la cola
		inicio = nodo -> siguiente; //Se asigna a la 1ª dirección del segundo nodo
		nodo -> siguiente = NULL;
		delete nodo; //Se borra el nodo
		//Si cola vacía, el último debe ser NULL también
		if (esVacia())
		{
			fin = NULL;
		}
	}
}

int Cola::verPrimero()
{
	if (esVacia())
	{
		cout << "Cola vacía" << endl;
	}
	
	else
	{
		return inicio -> valor;
	}
}

