#ifndef PUNTO_H
#define PUNTO_H

class Punto
{
private:
	float x;
	float y;
public:
	Punto(float a, float b);
	~Punto();
	
	void visualizar ();
	float distancia (Punto p);

};

#endif // PUNTO_H
