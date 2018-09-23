//Función para pedir un entero de 1 a 12 al usuario y decirle a que mes corresponde dicho entero

#include <stdio.h>
#include <iostream>

using namespace std;

char *nombre_mes (int mm)
{
	static char* mes[] = {"Mes no correcto", "enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre" };
	return ((mm > 0 && mm <= 12) ? mes[mm] : mes[0]);
}

int main(int argc, char **argv)
{
	int x;
	char *mes;
	
	cout << "Introduce un numero para ver el mes: " << endl;
	cin >> x;
	
	mes = nombre_mes(x);
	cout << "El mes " << x << " se corresponde con " << mes << endl;;
}
