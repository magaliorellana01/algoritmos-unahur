/*
 Escribir un algoritmo que determine si un número M es divisible por N.
*/

#include <iostream>
using namespace std;

int main() {
    int M, N;
    cout << "Ingrese un numero: ";
    cin >> M;
    cout << "Ingrese otro numero: ";
    cin >> N;

    if (M % N == 0) {
        cout << "M es divisible por N" << endl;
    }
    else {
        cout << "M no es divisible por N" << endl;
    }
    return 0;
}