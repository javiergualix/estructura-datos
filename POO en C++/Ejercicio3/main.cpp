#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Password.h"

int main(int argc, char **argv)
{
	srand((unsigned)time(0));
	
	Password pass;
	pass.ver_Password();
	//delete pass;
	
	Password pass2;
	pass2.ver_Password();
	
	Password pass3;
	pass3.ver_Password();
	
	return 0;
}
