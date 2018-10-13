#include <stdio.h>
#include <iostream>
#include "Fraccion.h"

using namespace std;

int main(int argc, char **argv)
{
	Fraccion f1(3,4);
	Fraccion f2(1,4);
	Fraccion f3 = f3.suma(f1,f2);
	Fraccion f4 = f4.multiplicacion(f1,f2);
	
	cout << "El resultado de la suma es " << f3.getNumerador() << "/" << f3.getDenominador() << endl;
	cout << "El resultado de la multiplicacion es " << f4.getNumerador() << "/" << f4.getDenominador() << endl;
	return 0;
}
