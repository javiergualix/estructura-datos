#include <stdio.h>
#include <iostream>

using namespace std;

void sube (int* n) // con puntero
{
	(*n)++;
	return;
}

void mas (int& n) // por referencia
{
	n++;
	return;
}

int main( )
{
	int a;
	cout << "Escribe un dato entero: ";
	cin >> a;
	
	for (int i = 0; i < 10; i++)
	{
		cout << i << ": " << a << endl;
		sube(&a);
	}
	
	for (int i = 0; i < 10; i++)
	{
		cout << i << ": " << a << endl;
		mas(a);
	}
	
	cout << endl;
	
	return 0;
}
