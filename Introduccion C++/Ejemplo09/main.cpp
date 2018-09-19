#include <stdio.h>
#include <iostream>

using namespace std;

void machaca1 (int x, int* y) //int* indica que la variable es un puntero
{
	*y = x; // como "y" es un puntero, debo acceder al valor al que apunta
	return;
}

void machaca2 (int x, int& y) // asocio la dirección de "y" a la dirección del parámetro de entrada
{
	y = x; // este cambio altera el valor del original
}

int main( )
{
	int a, b;
	cout << "Escribe dos datos enteros: ";
	cin >> a >> b;
	int copia = b;
	
	cout << "Antes de machaca1: " << a << " y " << b << endl;
	machaca1(a,&b); //como quiero pasar un puntero, saco la dirección de b
	cout << "Despues de machaca1: " << a << " y " << b << endl << endl;
	b = copia; //restauramos b para probar el segundo método
	
	cout << "Antes de machaca2: " << a << " y " << b << endl;
	machaca2(a,b); //como se pasa por referencia no hace falta la dirección
	cout << "Despues de machaca2: " << a << " y " << b << endl;
	
	return 0;
}
