#include <stdio.h>
#include <conio.h>
#include "Punto.h"
#include <iostream>
#include <bits/stdc++.h> 

Punto::Punto(float a, float b)
{
	x = a;
	y = b;
}

Punto::~Punto()
{
}

float Punto::distancia (Punto p)
{
	float d;
	d = sqrt(p.x - x) + sqrt(p.y - y);
	return d;
}

