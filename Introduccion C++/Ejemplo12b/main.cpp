#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

struct persona
{
	char nombre[30];
	int edad;
	long telefono;
};

void Escribir (persona p) // Paso por valor
{
	cout << p.nombre << " tiene " << p.edad << " anyos y su telefono es " << p.telefono;
	cout << endl;
}

void EscribirPuntero (persona* p) // Mediante puntero
{
	cout << p->nombre << " tiene " << p->edad << " anyos y su telefono es " << p->telefono;
	cout << endl;
}

persona *CrearPersona (char n[4], int e, long t)
{
	persona *aux;
	aux = new persona;
	strcpy(aux->nombre,n); // La cadena n se copia en aux.nombre
	aux->edad = e;
	aux->telefono = t;
	
	return aux;
}

int main(int argc, char **argv)
{
	persona	*pp = CrearPersona("pepe\0", 30, 612345678);
	Escribir(*pp);
	EscribirPuntero(pp);
}