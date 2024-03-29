#ifndef item_h
#define item_h

#include "Producto.h"
#include <iostream>

using namespace std;

class Item:public Producto
{
	protected:
		string id;
		int cantidad;
	public:
		Item();
		Item(string nom, int pre, string i, int can);
		void toString();
		string fileFormat();
		string getNombre();
		int getPrecio();
		string getId();
		int getCantidad();
		void setNombre(string nom);
		void setPrecio(int pre);
		void setId(string i);
		void setCantidad(int can);
};

#endif