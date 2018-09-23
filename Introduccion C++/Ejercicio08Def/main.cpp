//Escribir un programa que utilice funciones para...

#include <stdio.h>
#include <iostream>

using namespace std;

void creavector (int cant,int n[]) //Leer un vector de 10 enteros
{
    int i;
	
    for(i = 0; i < cant; i++)
    {
        cout << "Ingresa numero " << i+1 <<": ";
        cin >> n[i];
    }
     
}

void muestravector(int cant,int n[]) //Visualizar en pantalla el vector leído utilizando una variable entera
{
    int i;
	
    for (i = 0; i < cant; i++)
    {
        cout << n[i] << endl;
    }
	
}

void vectorpuntero (int* v) //Visualizar en pantalla el vector leído utilizando una variable de tipo puntero
{
	
	for (int i = 0; i < 10; i++)
	{
		cout << *v;
		v++;
	}
	cout << endl;
	
	return;
	 
}

int maximo (int* v) //Ver el máximo del vector
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

int minimo (int* v) //Ver el mínimo del vector
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

void insercionDirecta (int A[]) //Visualizar los datos del vector en orden usando ordenación por inserción directa
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
	
	creavector(10, x);
	muestravector(10, x);
	
	int m = maximo(x);
	cout << "El valor maximo es " << m << endl;
	
	int n = minimo(x);
	cout << "El valor minimo es " << n << endl;
	
	insercionDirecta(x);
	
	return 0;
}



