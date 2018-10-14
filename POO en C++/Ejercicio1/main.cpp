#include <stdio.h>
#include "Alfabeto.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char **argv)
{
	Alfabeto a;
	bool b;
	char c = 'D';
	char d = 'E';
	char e = 'F';
	//Alfabeto* a;
	
	//a = new Alfabeto;
	//a -> Imprimir(a);
	a.Imprimir();
	b = a.pertenece(c);
	cout << "¿Pertenece la letra D al conjunto? " << b << endl;
	
	a.insertar(c);
	b = a.pertenece(c);
	cout << "¿Pertenece la letra D al conjunto? " << b << endl;
	
	a.eliminar(c);
	b = a.pertenece(c);
	cout << "¿Pertenece la letra D al conjunto? " << b << endl;
	
	a.insertar(d);
	a.insertar(e);
	a.Imprimir();
}
