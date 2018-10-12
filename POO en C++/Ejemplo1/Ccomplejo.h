#ifndef CCOMPLEJO_H
#define CCOMPLEJO_H

class Ccomplejo
{
private:
	double real, imag;
public:
	Ccomplejo(); //constructor
	Ccomplejo(double r, double i); //constructor
	
	~Ccomplejo(); //destructor
	
void asigna_real (double r);
void asigna_imag (double i);
double parte_real();
double parte_imag();
void suma(const Ccomplejo& a, const Ccomplejo& b);

};

#endif // CCOMPLEJO_H
