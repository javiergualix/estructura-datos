#include "Nodo.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>


Nodo::Nodo(int v, Nodo *sig)
{
	valor = v;
	siguiente = sig;
}

Nodo::~Nodo()
{
}

