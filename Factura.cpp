#include "Factura.h"
#include "Producto.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Factura::Factura() {

}

Factura::Factura(string cli, int to) {
	cliente = cli;
	total = to;

}

Factura::Factura(string cli, int to, vector<string> prod) {
	cliente = cli;
	total = to;
	productos = prod;
}

void Factura::toString() {
	cout << "Nombre del Cliente: " << cliente << ", Total: " << total << ", Productos Comprados: ";
	for (int i = 0; i < productos.size(); i++) {
		cout << productos[i] << " , ";
	}
	cout << endl;
}

string Factura::fileFormat() {
	string file;
	file = file + cliente + ' ' + to_string(total) + ' ' + "\n";
	return file;
}

string Factura::fileFormatProducto() {
	string file;
	for (int i = 0; i < productos.size(); i++) {
		file = file + productos[i] + ' ';
	}
	file = file + "\n";
	return file;
}

string Factura::getCliente() {
	return cliente;
}

double Factura::getTotal() {
	return total;
}

vector<string> Factura::getProductos() {
	return productos;
}

void Factura::setCliente(string cli) {
	cliente = cli;
}

void Factura::setTotal(int to) {
	total = to;
}

void Factura::setProductos(vector<string> pro) {
	productos = pro;
}