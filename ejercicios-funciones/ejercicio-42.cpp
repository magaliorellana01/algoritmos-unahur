/*
Definir un vector Gondola en donde puedan almacenar datos de a lo sumo 50
productos del supermercado. Cada producto se define por su nombre, código de
barras, precio y un indicador si está en oferta o no (si estuviera en oferta al precio
se le debe descontar un 10%).
La aplicación debe permitir mediante un menú de opciones:
a. Cargar productos en el vector.
b. Buscar un producto indicando su nombre.
c. Buscar un producto por código de barra.
d. Poder modificar el precio de algún producto.
e. Quitar un producto que esté en el vector.
f. Indicar la cantidad de productos en oferta.
g. Cargar productos de Gondola en un nuevo vector Chango, indicando
luego: monto a abonar y ahorro total teniendo en cuenta los productos
en oferta.
*/

#include <iostream>
#include <string>
using namespace std;

struct Producto {
    string nombre;
    string codigoDeBarras;
    float precio;
    char oferta; 
};

int main() {
    const int maximo = 50;

    Producto gondola[maximo];
    int totalGondola = 0;
    int opcion;
    string buscarTexto; 

    do{
        cout << "1. Cargar productos en la gondola" << endl;
        cout << "2. Buscar producto por nombre" << endl;
        cout << "3. Buscar producto por codigo de barras"<< endl;
        cout << "4. Modificar el precio de un producto" << endl;
        cout << "5. Quitar un producto de la gondola"<<  endl;
        cout << "6. Indicar cantidad de productos que hay en oferta"<< endl;
        cout << "7. Armar changuito y cobrar"<< endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: "<< endl;
        cin >> opcion;
        cout << endl;

        switch(opcion){
            // cargar productos en el vector
            case 1: {
                int cantidad;
                cout << "Cuantos productos va a cargar?: ";
                cin >> cantidad;
                if((totalGondola + cantidad) <= maximo){
                    for(int i = 0; i < cantidad; i = i + 1){
                        cout << "Nombre del producto: ";
                        cin >> gondola[totalGondola].nombre;

                        cout <<"Codigo de barras: ";
                        cin >> gondola[totalGondola].codigoDeBarras;

                        cout << "Precio: ";
                        cin >> gondola[totalGondola].precio;

                        cout << "Esta en oferta? (s/n): ";
                        cin >> gondola[totalGondola].oferta;

                        totalGondola = totalGondola + 1;
                    }
                    cout << "Productos cargados correctamente" << endl;

                }
                else{
                    cout << "No hay espacio suficiente en la gondola" << endl;
                }
                break;
            }
            // buscar un producto por nombre
            case 2: {
                cout << "Ingrese el nombre: ";
                cin >> buscarTexto;

                bool encontrado = false;
                for(int i = 0; i < totalGondola; i = i + 1){
                    if(gondola[i].nombre == buscarTexto){
                        cout << "Producto: " << gondola[i].nombre << "| Codigo: " << gondola[i].codigoDeBarras << " | Precio: $" << gondola[i].precio << endl;
                        encontrado = true;
                    }
                }
                if (encontrado == false){
                    cout << "No se encontro el producto"<< endl;
                }
                break;
            }
            // buscar un producto por codigo de barra
            case 3: {
                cout << "Ingrese el codigo de barras a buscar: ";
                cin >> buscarTexto;
                bool encontrado = false;
                for (int i = 0; i < totalGondola; i = i + 1) {
                    if (gondola[i].codigoDeBarras == buscarTexto) {
                        cout << "Producto: " << gondola[i].nombre << " | Precio: $" << gondola[i].precio << endl;
                        encontrado = true;
                    }
                }
                if (encontrado == false) {
                    cout << "No se encontro el codigo." << endl;
                }
                break;
            }

            // poder modificar el precio de algun producto
            case 4: {
                cout << "Ingrese el nombre del producto a modificar: ";
                cin >> buscarTexto;
                
                bool encontrado = false;
                for (int i = 0; i < totalGondola; i = i + 1) {
                    if (gondola[i].nombre == buscarTexto) {
                        cout << "Precio actual: $" << gondola[i].precio << endl;
                        cout << "Ingrese el nuevo precio: $";
                        cin >> gondola[i].precio;
                        cout << "Precio actualizado." << endl;
                        encontrado = true;
                    }
                }
                
                if (encontrado == false) {
                    cout << "No existe ese producto." << endl;
                }
                break;
            }

            // quitar un producto que este en el vector
            case 5: {
                cout << "Ingrese el nombre del producto a quitar: ";
                cin >> buscarTexto;
                
                bool encontrado = false;
                for (int i = 0; i < totalGondola; i = i + 1) {
                    if (gondola[i].nombre == buscarTexto) {
                        encontrado = true;
                        
                        for (int j = i; j < totalGondola - 1; j = j + 1) {
                            gondola[j] = gondola[j + 1];
                        }
                        
                        totalGondola = totalGondola - 1;
                        cout << "Producto eliminado de la gondola." << endl;
                    }
                }
                
                if (encontrado == false) {
                    cout << "No existe ese producto." << endl;
                }
                break;
            }

            // idnicar la cantidad de productos en oferta
            case 6: {
                int contadorOfertas = 0;
                
                for (int i = 0; i < totalGondola; i = i + 1) {
                    if (gondola[i].oferta == 's' || gondola[i].oferta == 'S') {
                        contadorOfertas = contadorOfertas + 1;
                    }
                }
                cout << "Hay " << contadorOfertas << " productos en oferta actualmente." << endl;
                break;
            }

            // cargar productos en el changuito y cobrar
            case 7: {
                Producto chango[maximo];
                int totalChango = 0;
                int cantidadComprar;
                
                cout << "Cuantos productos va a llevar?: ";
                cin >> cantidadComprar;
                
                if (cantidadComprar <= maximo) {
                    
                    // busqueda y carga del changuito
                    for (int i = 0; i < cantidadComprar; i = i + 1) {
                        cout << "Ingrese el nombre del producto " << i + 1 << " que quiere llevar: ";
                        cin >> buscarTexto;
                        
                        bool productoAgregado = false;
                        for (int j = 0; j < totalGondola; j = j + 1) {
                            if (gondola[j].nombre == buscarTexto) {
                                chango[totalChango] = gondola[j];
                                totalChango = totalChango + 1;
                                productoAgregado = true;
                                cout << "Agregado al chango." << endl;
                            }
                        }
                        if (productoAgregado == false) {
                            cout << "Ese producto no esta en la gondola." << endl;
                        }
                    }
                    
                    float montoAAbonar = 0;
                    float ahorroTotal = 0;
                    
                    for (int i = 0; i < totalChango; i = i + 1) {
                        if (chango[i].oferta == 's' || chango[i].oferta == 'S') {
                            float descuento = chango[i].precio * 0.10;
                            
                            montoAAbonar = montoAAbonar + (chango[i].precio - descuento);
                            ahorroTotal = ahorroTotal + descuento;
                            
                        } else {
                            montoAAbonar = montoAAbonar + chango[i].precio;
                        }
                    }
                    
                    cout << endl;
                    cout << "---TICKET DE COMPRA---" << endl;
                    cout << "Monto a abonar: $" << montoAAbonar << endl;
                    cout << "Ahorro por ofertas: $" << ahorroTotal << endl;
            
                    
                } else {
                    cout << "El changuito no tiene tanto espacio." << endl;
                }
                break;
            }
            case 0: {
                cout << "Cerrando el supermercado..." << endl;
                break;
            }
            default: {
                cout << "Opcion incorrecta." << endl;
                break;
            }
        }
        cout << endl; 
        
    } while (opcion != 0);
    return 0;
}
