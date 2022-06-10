#ifndef comida_h
#define comida_h
#include "Producto.h"
#include <iostream>

using namespace std;

class Comida:public Producto
{
	protected:
		bool estaPodrida;
	public:
		Comida();
		Comida(bool eP);
		void toString();
		void fileFormat();
};

#endif

