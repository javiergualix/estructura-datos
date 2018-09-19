#include <stdio.h>
#include <iostream>

int main( )
{
	int x;
	std::cout << "Escribe un numero: ";
	std::cin >> x;
	std::cout << "Tu numero es " << x << "\n";
	std::cout << "Muchas gracias. Escriba algo para terminar." << std::endl;
	std::cin >> x;
	
	return 0;
}
