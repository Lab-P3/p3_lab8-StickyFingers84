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
	string podrida = "";
	if (estaPodrida == true) {
		podrida = "Si";
	}
	else {
		podrida = "No";
	}
	cout << "Nombre: "<< nombre << " , Precio: "<< precio << " , Esta Podrida?: "<< podrida<< endl;
}

void Comida::fileFormat() {

}
