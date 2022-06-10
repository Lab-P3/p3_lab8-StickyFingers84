#ifndef factura_h
#define factura_h
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Factura
{
	string cliente;
	double total;
	vector<string> productos;
	public:
		Factura();
		Factura(string cli, double to);
		Factura(string cli, double to, vector<string> productos);
		string getCliente();
		double getTotal();
		vector<string> getProductos();
		void setCliente(string cli);
		void setTotal(double to);
		void setProductos(vector<string> pro);
};

#endif

