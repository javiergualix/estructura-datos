//Escribir un programa que utilice funciones para...

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

void creavector (int cant,int n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<"Ingresa numero "<<i+1<<": ";
        cin>>n[i];
    }
     
}

void muestravector(int cant,int n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<n[i]<<endl;
    }
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
	int y[10];
	vector(x);
	
	vervector(x);
	vectorpuntero(x);
	
	int m = maximo(x);
	cout << "El valor maximo es " << m << endl;
	
	int n = minimo(x);
	cout << "El valor minimo es " << n << endl;
	
	insercionDirecta(x);
	vervector(x);
	
	creavector(10,y);
	muestravector(10,y);
	
	return 0;
}
