#include <stdio.h>
#include <iostream>

using namespace std;

void vector(int* v)
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Introduce un entero: " << endl;
		int n;
		cin >> n;
		v[i] = n;
		cout << v[i] << endl;
	}
	
	return;
	
}

void vervector (int* v)
{
	for (int i = 0; i < 10; i++)
	{
		cout << v[i];
	}
	cout << endl;
	
	return;
	
}

void vectorpuntero (int* v)
{
	
	for (int i = 0; i < 10; i++)
	{
		cout << *v;
		v++;
	}
	cout << endl;
	
	return;
	 
}

int main( )
{
	int x[10];
	vector(x);
	
	vervector(x);
	vectorpuntero(x);
	
	return 0;
}
