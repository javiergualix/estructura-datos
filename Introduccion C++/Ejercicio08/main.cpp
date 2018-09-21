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
		cout << endl;
	}
	
	return;
	
}

void vervector (int* v)
{
	for (int i = 0; i < 10; i++)
	{
		cout << v[i];
		cout << endl;
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

int maximo (int* v)
{
	int max = v[0];
	
	for (int i = 0; i < 10; i++)
	{
		if (v[i] > max)
		{
			max = v[i];
		}
	}
	
	return max;
}

int minimo (int* v)
{
	int min = v[0];
	
	for (int i = 0; i < 10; i++)
	{
		if (v[i] < min)
		{
			min = v[i];
		}
	}
	
	return min;
}

void insercionDirecta (int A[])
{
	
	int j, v;
	
	for (int i = 1; i < 10; i++)
	{
		v = A[i];
		j = i - 1;
		while (j >= 0 && A[j] > v)
		{
			A[j + 1] = A[j];
			j--;
		}
		
		A[j + 1] = v;
	}
	
	return;
}

int main( )
{
	int x[10];
	vector(x);
	
	vervector(x);
	vectorpuntero(x);
	
	int m = maximo(x);
	cout << "El valor maximo es " << m << endl;
	
	int n = minimo(x);
	cout << "El valor minimo es " << n << endl;
	
	insercionDirecta(x);
	vervector(x);
	
	return 0;
}
