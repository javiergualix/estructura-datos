#include "Password.h"
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

Password::Password()
{
	int low = 33;
	int high = 123;
	int random;
	srand((unsigned)time(0));
	
	for (int i = 0; i < (sizeof(pass)); i++)
	{
		random = (rand() % (high - low + 1) + low);
		pass[i] = (char) random;
	}
}

Password::Password(int n)
{
	int low = 33;
	int high = 123;
	int random;
	srand((unsigned)time(0));
	
	for (int i = 0; i < n; i++)
	{
		random = (rand() % (high - low + 1) + low);
		pass[i] = (char) random;
	}
}

bool Password::es_Password()
{
	int caracter;
	
	for (int i = 0; i < (sizeof(pass)); i++)
	{
		caracter = (int) pass[i];
		cout << caracter << endl;
		if (0 < caracter < 48)
		{
			return false;
		}
		
		if (57 < caracter < 65)
		{
			return false;
		}
		
		if (90 < caracter < 97)
		{
			return false;
		}
		
		if (caracter > 122)
		{
			return false;
		}
	}
	
	return true;
}

bool Password::es_Fuerte()
{
	int mayus = 0;
	int minus = 0;
	int size = sizeof(pass);
	int caracter;
	
	for (int i = 0; i < sizeof(pass); i++)
	{
		caracter = (int) pass[i];
		if (64 < caracter < 91)
		{
			mayus += 1;
		}
		
		if (96 < caracter < 123)
		{
			minus += 1;
		}
	}
	
	if ((size >= 3) && (mayus >= 2) && (minus >= 1))
	{
		return true;
	}
	else{
		return false;
	}
}

void Password::cifrar_Password()
{
	int caracter;
	
	for (int i = 0; i < sizeof(pass); i++)
	{
		caracter = (int) pass[i];
		if (64 < caracter < 91)
		{
			pass[i] = (char) caracter + 3;
		}
		
		if (96 < caracter < 123)
		{
			pass[i] = (char) caracter + 3;
		}
	}
}

bool Password::es_Correcta(char a[8])
{
	int caracter;
	
	for (int i = 0; i < (sizeof(a)); i++)
	{
		if ((pass[i] - 3) != a[i])
		{
			return false;
		}
	}
	return true;
}

void Password::ver_Password()
{
	for (int i = 0; i < (sizeof(pass)); i++)
	{
		cout << pass[i];
	}
	
	cout << "\n" << endl;
	
}

Password::~Password()
{
}

