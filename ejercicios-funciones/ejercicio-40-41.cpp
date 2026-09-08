/*
) Definir un struct Persona, donde se pueda almacenar su nombre, y el número de
teléfono.
*/

#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    string numeroTelefono;
};

/*
Definir un vector Agenda, en donde se pueda guardar los datos de, a lo sumo, 50
personas (definidas en el ej. anterior) y permita:
a. Cargar los datos en la Agenda.
b. Poder buscar el teléfono de una persona indicando su nombre.
c. Poder buscar el nombre de una persona indicando su teléfono.
d. Poder modificar el número de teléfono de alguna persona.
e. Poder agregar un nuevo contacto.
f. Poder dar de baja a un contacto.
*/

int main() {
    const int maximo =50;
    Persona agenda[maximo];

    int totalPersonas = 0; //esto es para la cantidad de personas guardadas
    int opcion;
    string nombreIngresado;
    string telefonoIngresado;

    do {
        // se muestra el menu de opciones

        cout << "menu de opciones" << endl;
        cout << "1. Cargar datos en la agenda" << endl;
        cout << "2. Buscar telefono por nombre" << endl;
        cout << "3. Buscar nombre por telefono" << endl;
        cout << "4. Modificar el numero de telefono" << endl;
        cout << "5. Agregar un nuevo contacto" << endl;
        cout << "6. Dar de baja un contacto" << endl;
        cout << "0. Salir"<< endl;
        cin >> opcion;
        cout << endl;

        switch(opcion){
            // caso 1, agregar datos en la agenda
            case 1:{
                int cantidad;
                cout << "Cuantos contactos va a ingresar?";
                cin >> cantidad;

                if((totalPersonas + cantidad) <= maximo){
                    for (int i = 0; i < cantidad; i = i + 1){
                        cout << "nombre: ";
                        cin >> agenda[totalPersonas].nombre;
                        cout << "telefono: ";
                        cin >> agenda[totalPersonas].numeroTelefono;
                        totalPersonas = totalPersonas + 1;
                    }
                    cout << "cargados correctamente" << endl;
                } else {
                    cout << "No hay espacio suficiente en la agenda" << endl;
                }
                break;
            }
            // buscar por nombre
            case 2:{
                cout << "Ingrese el nombre a buscar: ";
                cin >> nombreIngresado;

                bool encontrado = false;

                for (int i = 0; i < totalPersonas; i = i + 1){
                    if(agenda[i].nombre == nombreIngresado){
                        cout << "El numero de telefono es: "<< agenda[i].numeroTelefono << endl;
                        encontrado = true;
                    }
                }
                if(encontrado == false){
                    cout << "No existe esa persona en la agenda" << endl;

                }
                break;
            }

            // buscar por numero de telefono
            case 3: {
                cout << "Ingrese el numero de telefono: ";
                cin >> telefonoIngresado;

                bool encontrado = false;

                for (int i = 0; i < totalPersonas; i = i + 1){
                    if(agenda[i].numeroTelefono == telefonoIngresado){
                        cout << "El numero es de: " << agenda[i].nombre << endl;
                        encontrado = true;
                    }
                }
                if (encontrado == false){
                    cout << "El numero ingresado no existe en la agenda"<< endl;

                }
                break;
            }

            // modificar el numero de telefono de una persona
            case 4: {
                cout << "Ingrese el nombre de la persona a modificar: ";
                cin >> nombreIngresado;

                bool encontrado = false;

                for (int i = 0; i < totalPersonas; i = i + 1 ){
                    if(agenda[i].nombre == nombreIngresado){
                        cout << "Ingrese el nuevo telefono: ";
                        cin >> agenda[i].numeroTelefono;
                        cout << "Telefono modificado" << endl;
                        encontrado = true;
                    }
                }
                if (encontrado = false){
                    cout << "No existe la persona en la agenda"<< endl;
                }
                break;
            }

            // agregar un nuevo contacto
            case 5:{
                if(totalPersonas < maximo){
                    cout << "Ingrese el nombre del nuevo contacto: ";
                    cin >> agenda[totalPersonas].nombre;
                    cout << "Ingrese el numero de telefono: ";
                    cin >> agenda[totalPersonas].numeroTelefono;
                    totalPersonas = totalPersonas + 1;
                    cout << "Agregado" << endl;
                }
                else {
                    cout << "No hay mas espacio" << endl;
                }
                break;
            }

            // dar de baja un contacto
            case 6: {
                cout << "Ingrese el nombre a borrar: ";
                cin >> nombreIngresado;

                bool encontrado = false;

                for (int i = 0; i < totalPersonas; i = i + 1 ){
                    if(agenda[i].nombre == nombreIngresado){
                        encontrado = true;
                        for(int j = i; j < totalPersonas - 1; j = j + 1){
                            agenda[j] = agenda[j + 1];
                        }
                        totalPersonas = totalPersonas - 1;
                        cout << "Persona borrada" << endl; 
                    }
                }
                if(encontrado == false){
                    cout << "No existe esa persona" << endl;
                }
                break;

            }
            case 0: {
                cout << "Saliendo del programa... " << endl;
                break;
            }
            // si el usuario ingrea un numero que no esta entre el 0 y el 6:
            default: {
                cout << "opcion incorrecta"<< endl;
                break;
            }
        }
        cout << endl;
    }  while(opcion != 0);
    return 0;
} 