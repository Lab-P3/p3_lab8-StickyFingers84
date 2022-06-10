#ifndef factura_h
#define factura_h
#include "Producto.h"
#include <iostream>
#include <vector>

using namespace std;

class Factura
{
	string nombre;
	double total;
	vector<Producto*> productos;
	public:
		Factura();
		Factura(string nom, double to);
		Factura(string nom, double to, vector<Producto*> productos);
		string getNombre();
		double getTotal();
		vector<Producto*> getProductos();
		void setNombre(string )
};

#endif

