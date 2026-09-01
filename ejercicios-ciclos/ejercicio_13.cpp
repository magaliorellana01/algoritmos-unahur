/*
Imprimir por pantalla una lista de 20 números consecutivos, los cuales
comienzan con un número ingresado por teclado.

*/

#include <iostream>
using namespace std;

int main() {
    int numeroInicial;
    cout << "Ingrese un numero: ";
    cin >> numeroInicial;

    for (int i = 0; i < 20; i ++){
        cout << numeroInicial + i << endl;
    }

    return 0;

}