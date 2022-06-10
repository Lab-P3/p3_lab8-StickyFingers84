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
		Comida(string nom, int pre, bool eP);
		void toString();
		void fileFormat();
		string getNombre();
		int getPrecio();
		bool estaPodrido();
		void setNombre(string nom);
		void setPrecio(int pre);
		void setPodrido(bool ep);
};

#endif

