#include <stdio.h>
#include <iostream>

using namespace std;

int *vector( )
{
	int v[10];

	
	for (int i = 0; i < 10; i++)
	{
		cout << "Introduce un entero: " << endl;
		int n;
		cin >> n;
		v[i] = n;
		cout << v[i] << endl;
	}
	
	return v;
	
}

void vervector (int v[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << v[i];
	}
}

int main( )
{
	int* v[10];
	v[10] = vector();
	
	vervector(v);
	
	return 0;
}
