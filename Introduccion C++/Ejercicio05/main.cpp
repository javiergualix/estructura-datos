// Escribir un programa que escriba en pantalla todas las tablas de multiplicar

#include <stdio.h>
#include <iostream>

using namespace std;

int main( )
{
	for (int n = 0; n <= 10; n++)
	{
		for (int i = 0; i <= 10; i++)
		{
		cout << n << " x " << i << " = " << n * i << endl;
		}
		cout << "\n";
	}
	
	return 0;
}