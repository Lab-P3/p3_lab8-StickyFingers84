#include "Comida.h"
#include "Producto.h"
#include <iostream>

using namespace std;

Comida::Comida() {

}

Comida::Comida(string nom, int pre, bool eP) {
	nombre = nom;
	precio = pre;
	estaPodrida = eP;
}

void Comida::toString() {

}

void Comida::fileFormat() {

}
