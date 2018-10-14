#include "Alfabeto.h"
#include <conio.h>
#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

Alfabeto::Alfabeto()
{	
	
	for (int i= 0; i < 26; i++)
	{
		v[i] = false;
	}

}

Alfabeto::~Alfabeto()
{
}

void Alfabeto::Imprimir()
{
	for (int j= 0; j < 26; j++)
	{
		cout << v[j] << endl;
	}
	
	//cout << sizeof(v) << endl;
}

bool Alfabeto::es_vacio()
{
	int i = 0;
	
	while ((i < sizeof(v)) && (!v[i]))
	{
		if (!v[i])
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

bool Alfabeto::pertenece(char c)
{
	int pos;
	
	for (int i = 0; i < sizeof(abc); i++)
	{
		if (abc[i] == c)
		{
			pos = i;
		}
	}
	
	if (v[pos] == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Alfabeto::insertar(char c)
{
	int pos;
	
	if (pertenece(c))
	{
		cout << "El caracter ya existe en el conjunto" << endl;
	}
	else
	{
		for (int i = 0; i < sizeof(abc); i++)
		{
			if (abc[i] == c)
			{
				pos = i;
			}
		}
		
		v[pos] = true;
		
	}
}

void Alfabeto::eliminar(char c)
{
	int pos;
	
	if (!pertenece(c))
	{
		cout << "El caracter no existe en el conjunto" << endl;
	}
	else
	{
		for (int i = 0; i < sizeof(abc); i++)
		{
			if (abc[i] == c)
			{
				pos = i;
			}
		}
		
		v[pos] = false;
		
	}
}

