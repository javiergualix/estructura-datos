#include <stdio.h>
#include <iostream>

using namespace std;

const int minimo = 0, maximo = 10;

int main( )
{
	int n;
	cout << "Introduzca un numero entre " << minimo << " y " << maximo << "." << endl;
	cin >> n;
	
	if ((n < minimo) || (n > maximo))
	{
		cout << "El valor " << n << " esta fuera del rango." << endl;
	}
	else{
		switch (n)
		{
			case 0: cout << "No existe definicion de primo en este caso" << endl;
			break;
			case 2: case 3: case 5: case 7: cout << "Es primo" << endl;
			break;
			default: cout << "No es primo" << endl;
			break;
		}
	}
	
	return 0;
	
}