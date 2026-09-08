/*
Hacer una función que indique si un número es primo o no.
*/

#include <iostream>
using namespace std;

bool esPrimo(int numero) {
    if(numero <= 1) {
        return false;
    }

    for (int divisor = 2; divisor < numero; divisor = divisor + 1){
        if  (numero % divisor == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int numUsuario;
    cout << "Ingrese un numero para saber si es primo: ";
    cin >> numUsuario;

    if(esPrimo(numUsuario) == true) {
        cout << "El numero " << numUsuario << " Es primo" << endl;
    }
    else {
        cout << "El numero " << numUsuario << " No es primo" << endl;
    }
    return 0;
}