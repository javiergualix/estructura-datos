#include "Alfabeto.h"
#include <conio.h>
#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

Alfabeto::Alfabeto()
{	
	
	for (int i= 0; i < 26; i++)
	{
		v[i] = true;
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
	
	cout << sizeof(v);
}

