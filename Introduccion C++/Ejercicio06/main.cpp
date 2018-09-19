// Escribir un programa que escriba en pantalla la tabla de mulitplicar de un entero entre 1 y 10 leído de teclado

#include <stdio.h>
#include <iostream>

using namespace std;

int multiplicar (int n)
{
	for (int i = 0; i <= 10; i++)
	{
		cout << n << " x " << i << " = " << n * i << endl;
	}
	
	return 0;
}

int main( )
{
	int n;
	
	cout << "Introduce la tabla de multiplicar: ";
	cin >> n;
	
	multiplicar(n);
	
	return 0;
}
