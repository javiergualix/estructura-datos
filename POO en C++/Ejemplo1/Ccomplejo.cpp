#include "Ccomplejo.h"

Ccomplejo::Ccomplejo()
{
	real = 1;
	imag = 0;
}

Ccomplejo::~Ccomplejo()
{
}

Ccomplejo::asigna_real (double r)
{
	real = r;
}

void Ccomplejo::suma (const Ccomplejo& a, const Ccomplejo& b)
{
	real = a.real + b.real;
	imag = a.imag + b.imag;
}

