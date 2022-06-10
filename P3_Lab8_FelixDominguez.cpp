
#include <iostream>
#include <vector>
#include "Producto.h"
#include "Item.h"
#include "Comida.h"

using namespace std;

vector <Producto*> productos;

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

