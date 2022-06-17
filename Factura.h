#ifndef factura_h
#define factura_h
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Factura
{
	string cliente;
	int total;
	vector<string> productos;
	public:
		Factura();
		Factura(string cli, int to);
		Factura(string cli, int to, vector<string> prod);
		void toString();
		string fileFormat();
		string fileFormatProducto();
		string getCliente();
		double getTotal();
		vector<string> getProductos();
		void setCliente(string cli);
		void setTotal(int to);
		void setProductos(vector<string> pro);
};

#endif

