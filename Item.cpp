#include "Item.h"
#include "Producto.h"
#include <iostream>

using namespace std;

Item::Item() {

}

Item::Item(string nom, int pre, string i, int can) {
	nombre = nom;
	pre = precio;
	id = i;
	cantidad = can;
}

void Item::toString() {
	cout << "Nombre: " << nombre << " , Precio: " << precio << " , ID: " << id << " , Cantidad: " << cantidad << endl;
}

void Item::fileFormat() {

}
