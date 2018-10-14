#ifndef ALFABETO_H
#define ALFABETO_H
#include <bits/stdc++.h> 
#include <iostream>
#include <conio.h>

using namespace std;

class Alfabeto
{
private:
	bool v[26];
	char abc[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
public:
	Alfabeto();
	~Alfabeto();
	void Imprimir();
	bool es_vacio();
	bool pertenece(char c);
	void insertar(char c);
	void eliminar (char c);

};

#endif // ALFABETO_H
