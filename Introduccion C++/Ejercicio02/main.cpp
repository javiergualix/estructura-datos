//Escribir un programa que lee enteros de teclado hasta que el usuario pulse -99 o hasta que haya leído 10 enteros

#include <stdio.h>
#include <iostream>

using namespace std;

int main( )
{
	int suma, dato, contador = 0;

	
	while (contador < 10)
	{		
		cout << "Introduzca un dato. Escriba -99 para salir: " << endl;
		cin >> dato;
		if (dato == -99)
		{
			break;
		}
		
		suma += dato;
		contador++;
	}
	
	cout << "La media de los " << contador << " numeros es " << (suma / contador) << endl;
	
	return 0;
}
