#include "Pila.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Nodo.h"

using namespace std;

void Pila::apilar(int v)
{
	pNodo nuevo; //Var aux para manipular el nuevo nodo
	
	//Se crea un nuevo nodo
	nuevo = new Nodo(v,cima);
	
	//El comienzo de la pila es el nuevo nodo
	cima = nuevo;
}

void Pila::desapilar()
{
	pNodo nodo; //Var aux para manipular el nodo
	
	if (!cima)
	{
		cout << "No hay nodos en la pila" << endl; //Si no hay nodos en la pila se devuelve 0
	}
	
	//Nodo apunta al primer elemento de la pila
	nodo = cima;
	
	//Se asigna a pila toda la pila menos el primer elemento
	cima = nodo -> siguiente;
	
	//Se borra el nodo
	delete nodo;
}

Pila::~Pila()
{
	while (cima) desapilar();
}

