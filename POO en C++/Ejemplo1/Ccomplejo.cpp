#include "Ccomplejo.h"

CComplejo::CComplejo() //implementación
{
	real = 1;
	imag = 0;
}

CComplejo::~CComplejo()
{ //destruir el número complejo
}

void CComplejo::asigna_real (double r) //HAY QUE ESPECIFICAR EL TIPO
{
	real = r;
}

void CComplejo::suma (const CComplejo& a, const CComplejo& b)
{
	real = a.real + b.real;
	imag = a.imag + b.imag;
}

