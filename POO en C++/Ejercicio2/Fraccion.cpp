#include "Fraccion.h"

Fraccion::Fraccion()
{
	numerador = 1;
	denominador = 0;
}

Fraccion::Fraccion(int n, int d)
{
	numerador = n;
	denominador = d;
}

Fraccion::~Fraccion()
{
}

void Fraccion::setNumerador (int n)
{
	numerador = n;
}

void Fraccion::setDenominador (int d)
{
	denominador = d;
}

int Fraccion::getNumerador()
{
	return numerador;
}

int Fraccion::getDenominador()
{
	return denominador;
}

Fraccion Fraccion::multiplicacion (Fraccion a, Fraccion b)
{
	return Fraccion((a.getNumerador()*b.getNumerador()),a.getDenominador()*b.getDenominador());
}

Fraccion Fraccion::suma (Fraccion a, Fraccion b)
{
	int den = a.getDenominador() * b.getDenominador();
	int num = (a.getNumerador() * b.getDenominador()) + (a.getDenominador() * b.getNumerador());
	Fraccion s(num, den);
	return s;
}


