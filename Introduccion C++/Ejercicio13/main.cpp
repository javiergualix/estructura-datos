#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

struct alumno
{
	string nombre;
	string apellidos;
	string dni;
	float nota;
};

alumno CrearAlumno ()
{
	string nom;
	string ape;
	string dni;
	alumno aux;
	
	cout << "Nombre del alumno: " << endl;
	cin >> nom;
	//char *cstr = new char[nom.length() + 1];
	//strcpy(cstr,nom.c_str());
	
	cout << "Apellidos del alumno: " << endl;
	cin >> ape;
	//char *cstra = new char[ape.length() + 1];
	//strcpy(cstra,ape.c_str());
	
	cout << "DNI del alumno: " << endl;
	cin >> dni;
	
	//strcpy(aux.nombre,*cstr); // La cadena nom se copia en aux.nombre
	aux.nombre = nom;
	//strcpy(aux.nombre,*cstra); // La cadena n se copia en aux.apellido
	aux.apellidos = ape;
	aux.dni = dni;
	aux.nota = 0;
	
	return aux;
}

vector<alumno> CrearVector()
{
	
	vector<alumno> x;
	
	while (true)
	{
		alumno al = CrearAlumno();
		if (al.nombre == "0")
		{
			break;
		}
		x.push_back(al);
	}
	
	return x;
}

void leerNotas (vector<alumno> a)
{
	float notaalumno;
	
	for(int i = 0; i < a.size(); i++)
	{
		cout << "La nota del alumno " << a[i].nombre << " es: " << endl;
		cin >> notaalumno;
		a[i].nota = notaalumno;
		cout << "El alumno " << a[i].nombre << a[i].apellidos << " con DNI " << a[i].dni << " tiene una calificacion de " << a[i].nota << endl;
	}
}

int main(int argc, char **argv)
{
	
	vector<alumno> al = CrearVector();
	leerNotas(al);
	return 0;
}
