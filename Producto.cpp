#include "Producto.h"
#include <iostream>

using namespace std;

Producto::Producto() {

}

Producto::Producto(string nom, int pre) {
	nombre = nom;
	precio = pre;
}

void Producto::toString() {

}
string Producto::fileFormat() {
	return "";
}