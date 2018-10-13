#include <stdio.h>
#include <iostream>
#include <conio.h>
#include "Ccomplejo.h"

int main(int argc, char **argv)
{
	CComplejo a, b, s;
	CComplejo v[10];
	CComplejo* pc;
	
	pc = new CComplejo;
	pc -> asigna_real(3);
	pc -> asigna_imag(6);
	
	delete pc;

	pc = new CComplejo(1,3);
	pc -> asigna_real(3);
	pc -> asigna_imag(6);
	
	delete pc;
	
}
