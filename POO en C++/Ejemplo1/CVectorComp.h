#ifndef CVECTORCOMP_H
#define CVECTORCOMP_H
#include "Ccomplejo.h"

class CVectorComp
{
private:
	CComplejo v[3]; //Usa objetos de CComplejo
	
public:
	CVectorComp();
	~CVectorComp();
	
	void asignar (int i, const CComplejo& c);
	CComplejo acceder (int i);
	void suma (const CVectorComp& a, const CVectorComp& b);

};

#endif // CVECTORCOMP_H
