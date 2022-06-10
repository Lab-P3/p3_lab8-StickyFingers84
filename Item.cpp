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

string Item::getNombre() {
	return nombre;
}

int Item::getPrecio() {
	return precio;
}

string Item::getId() {
	return id;
}

int Item::getCantidad() {
	return cantidad;
}

void Item::setNombre(string nom) {
	nombre = nom;
}

void Item::setPrecio(int pre) {
	precio = pre;
}

void Item::setId(string i) {
	id = i;
}

void Item::setCantidad(int can) {
	cantidad = can;
}

