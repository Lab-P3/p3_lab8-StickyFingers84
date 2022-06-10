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
		void fileFormat();
};

#endif