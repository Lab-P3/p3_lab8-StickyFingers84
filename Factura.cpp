#include "Factura.h"
#include "Producto.h"
#include <iostream>
#include <vector>

using namespace std;

Factura::Factura() {

}

Factura::Factura(string cli, double to) {
	cliente = cli;

}

Factura::Factura(string cli, double to, vector<string> productos) {

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

void Factura::setTotal(double to) {
	total = to;
}

void Factura::setProductos(vector<string> pro) {
	productos = pro;
}