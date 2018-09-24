#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

struct fecha
{
	int dia;
	int mes;
	int anyo;
};

fecha *CrearFecha ( )
{
	
	int d;
	int m;
	int a;
	
	cout << "Introduce el día " << endl;
	cin >> d;
	cout << "Introduce el mes " << endl;
	cin >> m;
	cout << "Introduce el anyo " << endl;
	cin >> a;
	
	fecha *aux;
	aux = new fecha;
	aux->dia = d; 
	aux->mes = m;
	aux->anyo = a;
	
	return aux;
}

fecha VerFecha(fecha f)
{
	cout << f.dia <<"/" << f.mes << "/" << f.anyo << endl;
}

int main(int argc, char **argv)
{
	fecha* fecha1 = CrearFecha();
	VerFecha(*fecha1);
}
