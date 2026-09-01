/*
Formar un menú de 4 opciones y, al elegir una de ellas, saldrá un cartel diciendo
qué opción se eligió o si fue una opción incorrecta.
*/

#include <iostream>
using namespace std;

int main() {
    char opcion;
    cout << "Menu de opciones: " << endl;
    cout << "a) Opcion 1" << endl;
    cout << "b) Opcion 2" << endl;
    cout << "c) Opcion 3" << endl;
    cout << "d) Opcion 4" << endl;
    cout << "Ingrese la opcion elegida (a, b, c, d): ";
    cin >> opcion;

    switch(opcion) {
        case 'a':
            cout << "Se eligio la opcion 1" << endl;
            break;
        case 'b':
            cout << "Se eligio la opcion 2" << endl;
            break;
        case 'c':
            cout << "Se eligio la opcion 3" << endl;
            break;
        case 'd':
            cout << "Se eligio la opcion 4" << endl;
            break;
        default:
            cout << "Opcion incorrecta" << endl;
    }
    return 0;
}