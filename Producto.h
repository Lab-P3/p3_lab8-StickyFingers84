#ifndef producto_h
#define producto_h

#include <iostream>

using namespace std;


class Producto
{
	public:
		string nombre;
		int precio;
		Producto() {}
		Producto(string nom, int pre);
		virtual void toString();
		virtual void fileFormat();
};

#endif

