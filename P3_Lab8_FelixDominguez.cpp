
#include <iostream>
#include <vector>
#include "Producto.h"
#include "Item.h"
#include "Comida.h"

using namespace std;

vector <Producto*> productos;

int opciones() {
    int ciclo = 1;
    while (ciclo == 1) {
        cout << "1. Cerrar Sesion" << endl;
        cout << "2. Ingresar Item" << endl;
        cout << "3. Ingresar Comida" << endl;
        cout << "4. Listar Productos" << endl;
        cout << "5. Modificar Producto" << endl;
        cout << "6. Generar Factura" << endl;
        cout << "7. Listar Factura" << endl;
        cout << endl;
        cout << "Ingrese el numero de la opcion que desea realizar: ";
        int opcion;
        cin >> opcion;
        cout << endl;
        switch (opcion) {
            case 1: {
                ciclo = 0;
                break;
            }
            case 2: {
                cout << "Ingrese el nombre del producto: ";
                string nombre;
                cin >> nombre;
                cout << "Ingrese el precio del Item: ";
                int precio;
                cin >> precio;
                cout << "Ingrese el id del producto: ";
                string id;
                cin >> id;
                cout << "Ingrese la cantidad del producto: ";
                int cantidad;
                cin >> cantidad;
                productos.push_back(new Item(nombre, precio, id, cantidad)); 
                break;
            }
            case 3:{
                cout << "Ingrese el nombre del producto: ";
                string nombre;
                cin >> nombre;
                cout << "Ingrese el precio del Item: ";
                int precio;
                cin >> precio;
                cout << "Esta podrida la comida? (1. Si / 2. No): ";
                int podrido;
                cin >> podrido;
                bool estaPodrida = false;
                if (podrido == 1) {
                    estaPodrida == true;
                }
                else {
                    estaPodrida == false;
                }
                productos.push_back(new Comida(nombre, precio, estaPodrida));
                break;
            }
            case 4: {
                break;
            }
            case 5: {
                break;
            }
            case 6: {
                break;
            }
            case 7: {
                break;
            }
        }
    }
}

int main()
{
    int ciclo = 1;
    while (ciclo == 1) {
        cout << "1. Login" << endl;
        cout << "2. Salir" << endl;
        cout << endl;
        cout << "Ingrese el numero de la opcion que desea realizar: ";
        int opcion;
        cin >> opcion;
        cout << endl;
        switch (opcion) {
            case 1: {
                cout << "Ingrese el nombre de usuario: ";
                string nombre;
                cin >> nombre;
                cout << "Ingrese la contrasenia: ";
                string contrasenia;
                cin >> contrasenia;
                cout << endl;
                if (nombre == "admin" && contrasenia == "perfectMarket") {
                    cout << "Entrastes" << endl;
                }
                else {
                    cout << "No ingreso el nombre o contrasenia correctos" << endl;
                }
                cout << endl;
                break;
            }
            case 2: {
                ciclo = 0;
                break;
            }
        }
    }
}

