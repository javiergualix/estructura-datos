#ifndef FRACCION_H
#define FRACCION_H

class Fraccion
{
private:
	int numerador, denominador;
public:
	Fraccion();
	Fraccion(int n, int d);

	~Fraccion();
	
	void setNumerador (int n);
	void setDenominador (int d);
	int getNumerador ();
	int getDenominador ();
	Fraccion suma (Fraccion a, Fraccion b);
	Fraccion multiplicacion (Fraccion a, Fraccion b);
	
};

#endif // FRACCION_H
