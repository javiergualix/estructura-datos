// Escribir un programa que lea letras del alfabeto castellano, y termine cuando se hayan leído 10 válidas:

#include <stdio.h>
#include <iostream>

using namespace std;

int main( )
{
	char c;
	int d;
	int contador = 0;
	
	
	while (contador < 10)
	{
		cout << "Introduce una letra del alfabeto castellano: ";
		cin >> c;
		
		d = c;
		
		if ((d >= 65 && d < 123) || (d >= -92 && d < -90)) {
			contador++;
			cout << "Ha pulsado la tecla " << c << " y es un caracter VALIDO" << endl;
			cout << "El codigo ASCII es " << d << endl;
			cout << "Lleva " << contador << " caracteres validos \n";
		}
		else
		{
		cout << "Ha pulsado la tecla " << c << " y es un caracter INVALIDO" << endl;
		cout << "El codigo ASCII es " << d << endl;
		}
	}
	
	return 0;
}