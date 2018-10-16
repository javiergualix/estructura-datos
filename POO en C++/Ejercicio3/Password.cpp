#include "Password.h"
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

Password::Password()
{
	int low = 33;
	int high = 126;
	int random;
	srand((unsigned)time(0));
	
	for (int i = 0; i < (sizeof(pass)); i++)
	{
		random = (rand() % (high - low + 1) + low);
		pass[i] = (char) random;
	}
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

