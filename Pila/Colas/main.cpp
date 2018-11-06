#include <stdio.h>
#include <iostream>
#include <conio.h>
#include "Cola.h"

using namespace std;

int main(int argc, char **argv)
{
	Cola cola;
	cola.encolar(20);
	cout << "Anadir(20)" << endl;
	cola.encolar(10);
	cout << "Anadir(10)" << endl;
	cout << "El primero es: " << cola.verPrimero() << endl;
	cola.encolar(30);
	cout << "Anadir(30)" << endl;
	cout << "El primero es: " << cola.verPrimero() << endl;
	cout << "Desencolar" << endl;
	cola.desencolar();
	cout << "El primero es: " << cola.verPrimero() << endl;
	return 0;
	
}
