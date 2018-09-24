#include <stdio.h>
#include <iostream>
#include <cstdlib> //Necesario para rand
#include <ctime>

using namespace std;

void creavector (int cant,int n[]) //Crea un vector de N enteros con números aleatorios entre 0 y 100
{
	srand((unsigned)time(0));
	
    for(int i = 0; i < cant; i++)
    {
		
        n[i] = ((rand() % 100) + 1);
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

void insercionDirecta (int cant, int n[]) //Visualizar los datos del vector en orden usando ordenación por inserción directa
{
	
	int j, v;
	
	for (int i = 1; i < cant; i++)
	{
		v = n[i];
		j = i - 1;
		while (j >= 0 && n[j] > v)
		{
			n[j + 1] = n[j];
			j--;
		}
		
		n[j + 1] = v;
	}
	
	return;
}

int main(int argc, char **argv)
{
	int n;
	
	cout << "Cantidad de enteros a generar: " << endl;
	cin >> n;
	cout << " \n";
	
	int arr[n];
	
	creavector(n,arr);
	muestravector(n,arr);
	cout << " \n";
	
	insercionDirecta(n,arr);
	cout << "El vector ordenado queda de la siguiente manera \n \n";
	muestravector(n,arr);
	
	return 0;
}
