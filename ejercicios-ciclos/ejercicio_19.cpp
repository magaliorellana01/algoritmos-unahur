/*
 Dada una serie de números enteros terminada en cero, imprimir los tres
mayores.

*/


#include <iostream>
using namespace std;
int main() {
    int numero;

    int mayor1 = 0, mayor2 = 0, mayor3 = 0;

    cout << "Ingrese una serie de números enteros (termina con 0):" << endl;
    cin >> numero;

    while (numero != 0) {
        if(numero > mayor1){
            mayor3 = mayor2;
            mayor2 = mayor1;
            mayor1 = numero;
        } else if(numero > mayor2){
            mayor3 = mayor2;
            mayor2 = numero;
        } else if(numero > mayor3){
            mayor3 = numero;
        }
        cout << "Ingrese otro numero (ingrese 0 para terminar): ";
        cin >> numero;
    }
    cout << "El primer mayor es: " << mayor1 << endl;
    cout << "El segundo mayor es: " << mayor2 << endl;
    cout << "El tercer mayor es: " << mayor3 << endl;
    return 0;
}
