#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <bits/stdc++.h> 
#include "Punto.h"



int main(int argc, char **argv)
{
	double dist;
	
	Punto c1 (5,2), c2 (2,3);
	dist = c1.distancia(c2);
	std::cout << "La distancia es " << dist << std::endl;
	return 0;
}
