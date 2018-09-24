#include <stdio.h>
#include <iostream>

using namespace std;

void creavector (int cant,string n[]) //Leer un vector de 10 enteros
{
	
    for(int i = 0; i < cant; i++)
    {
        cout << "Ingresa palabra " << i+1 <<": ";
        cin >> n[i];
    }
     
}

void muestravector(int cant,string n[]) //Visualizar en pantalla el vector leído utilizando una variable entera
{
	
    for (int i = 0; i < cant; i++)
    {
        cout << n[i] << endl;
    }
	
}

void vectorinverso(int cant,string n[]) //Visualizar en pantalla el vector leído de forma inversa
{
	
    for (int i = (cant - 1); i >= 0; i--)
    {
        cout << n[i] << endl;
    }
	
}

int main(int argc, char **argv)
{
	int n;
	
	cout << "Introduce la cantidad de palabras a leer: " << endl;
	cin >> n;
	
	string palabras[n];
	
	creavector(n,palabras);
	cout << "Las palabras introducidas han sido... " << endl;
	
	muestravector(n,palabras);
	vectorinverso(n,palabras);
	
}
