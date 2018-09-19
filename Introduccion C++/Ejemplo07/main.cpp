#include <stdio.h>
#include <iostream>
#include <windows.h>

using namespace std;

int main( )
{
	char c;
	bool test;
	
	cout << "Pulse teclas numericas. Acabe pulsando ESC\n";
	do
	{ // para una única instrucción no hacen falta {}
		do
		{
			c = getchar();
			test = ((c >= '0') && (c <= '9'));
			if (test)
			{
				cout << c << " pulsado.\n";
			}
		} while (test);
	} while (VK_ESCAPE);
		
	return 0;
}
