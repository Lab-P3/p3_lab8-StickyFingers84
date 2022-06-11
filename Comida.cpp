#include "Comida.h"
#include "Producto.h"
#include <iostream>
#include <string>

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

string Comida::fileFormat() {
	string file;
	file = file + nombre + ';' + to_string(precio) + ';' + to_string(estaPodrida) + ';';
	return file;
}

string Comida::getNombre(){
	return nombre;
}

int Comida::getPrecio() {
	return precio;
}

bool Comida::estaPodrido() {
	return estaPodrida;
}

void Comida::setNombre(string nom) {
	nombre = nom;
}

void Comida::setPrecio(int pre) {
	precio = pre;
}

void Comida::setPodrido(bool ep) {
	estaPodrida = ep;
}
