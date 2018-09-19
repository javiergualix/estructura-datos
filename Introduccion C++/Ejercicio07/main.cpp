// Escribir un programa que lee 2 enteros y llama a las funciones: produto, potencia y cuadrado

#include <stdio.h>
#include <iostream>

using namespace std;

int potencia (int x, int y)
{
	int resultado = x;
	
	for (int i = 1; i < y; i++)
	{
		resultado *= x;
	}
	
	return resultado;
}

int producto (int x, int y)
{
	int resultado = x;
	
	for (int i = 1; i < y; i++)
	{
		resultado += x;
	}
	
	return resultado;
}

int cuadrado (int x)
{
	return x*x;
}

int main(int argc, char **argv)
{
	int e1, e2;
	
	cout << "Introduce el primer termino: ";
	cin >> e1;
	cout << "Introduce el segundo termino: ";
	cin >> e2;
	
	cout << " " << endl;
	cout << "El resultado de multiplicar " << e1 << " por " << e2 << " es " << producto(e1,e2) <<endl;
	cout << "El resultado de elevar " << e1 << " a " << e2 << " es " << potencia(e1,e2) << endl;
	cout << "El cuadrado de " << e1 << " es " << cuadrado(e1) << endl;
	cout << "El cuadrado de " << e2 << " es " << cuadrado(e2) << endl;
	return 0;
}
