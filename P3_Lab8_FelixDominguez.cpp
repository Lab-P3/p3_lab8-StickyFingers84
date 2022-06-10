
#include <iostream>
#include <vector>
#include "Producto.h"
#include "Item.h"
#include "Comida.h"

using namespace std;

vector <Producto*> productos;

int listar() {
    cout << "--------------Productos---------------" << endl;
    cout << endl;
    for (int i = 0; i < productos.size(); i++) {
        int j = i + 1;
        cout << j << " ";
        productos[i]->toString();
        cout << endl;
    }
    cout << "--------------------------------------" << endl;
    cout << endl;
    return 0;
}

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
                cout << "Ingrese el nombre del Item: ";
                string nombre;
                cin >> nombre;
                cout << "Ingrese el precio del Item: ";
                int precio;
                cin >> precio;
                cout << "Ingrese el id del Item: ";
                string id;
                cin >> id;
                cout << "Ingrese la cantidad del Item: ";
                int cantidad;
                cin >> cantidad;
                productos.push_back(new Item(nombre, precio, id, cantidad)); 
                cout << endl;
                break;
            }
            case 3:{
                cout << "Ingrese el nombre de la Comida: ";
                string nombre;
                cin >> nombre;
                cout << "Ingrese el precio de la Comida: ";
                int precio;
                cin >> precio;
                cout << "Esta podrida la comida? (1. Si / 2. No): ";
                int podrido;
                cin >> podrido;
                bool estaPodrida = false;
                if (podrido == 1) {
                    estaPodrida = true;
                }
                else {
                    estaPodrida = false;
                }
                productos.push_back(new Comida(nombre, precio, estaPodrida));
                cout << endl;
                break;
            }
            case 4: {
                listar();
                break;
            }
            case 5: { 
                listar();
                cout << "Elija el numero del producto a modificar: ";
                int numpro;
                cin >> numpro;
                numpro--;
                cout << endl;
                Producto* produ = productos[numpro];
                Item* it = dynamic_cast<Item*>(produ);
                Comida* co = dynamic_cast<Comida*>(produ);
                if (it) {
                    cout << "1. Nombre" << endl;
                    cout << "2. Precio" << endl;
                    cout << "3. ID" << endl;
                    cout << "4. Cantidad" << endl;
                    cout << "Ingrese el numero del atributo a modificar: ";
                    int atri;
                    cin >> atri;
                    switch (atri) {
                        case 1: {
                            cout << "Ingrese el nuevo nombre: ";
                            string nombre;
                            cin >> nombre;
                            it->setNombre(nombre);
                            break;
                        }
                        case 2: {
                            cout << "Ingrese el nuevo Precio: ";
                            int precio;
                            cin >> precio;
                            it->setPrecio(precio);
                            break;
                        }
                        case 3: {
                            cout << "Ingrese el nuevo ID: ";
                            string id;
                            cin >> id;
                            it->setId(id);
                            break;
                        }
                        case 4: {
                            cout << "Ingrese la nueva Cantidad: ";
                            int cantidad;
                            cin >> cantidad;
                            it->setCantidad(cantidad);
                            break;
                        }
                    }
                }
                else {
                    cout << "1. Nombre" << endl;
                    cout << "2. Precio" << endl;
                    cout << "3. Esta Podrida?" << endl;
                    cout << "Ingrese el numero del atributo a modificar: " << endl;
                    int atri;
                    cin >> atri;
                    switch (atri) {
                        case 1: {
                            cout << "Ingrese el nuevo nombre: ";
                            string nombre;
                            cin >> nombre;
                            co->setNombre(nombre);
                            break;
                        }
                        case 2: {
                            cout << "Ingrese el nuevo Precio: ";
                            int precio;
                            cin >> precio;
                            co->setPrecio(precio);
                            break;
                        }
                        case 3: {
                            cout << "Ingrese si esta podrido o no: 1. Si / 2. No: ";
                            int podrido;
                            cin >> podrido;
                            bool estaPodrida;
                            if (podrido == 1) {
                                estaPodrida = true;
                            }
                            else {
                                estaPodrida = false;
                            }
                            co->setPodrido(estaPodrida);
                            break;
                        }
                    }
                }
                cout << endl;
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
    return 0;
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
                    opciones();
                }
                else {
                    cout << "No ingreso el nombre o contrasenia correctos" << endl;
                }
                cout << endl;
                break;
            }
            case 2: {
                Producto* prod = productos[0];
                ciclo = 0;
                break;
            }
        }
    }
}

