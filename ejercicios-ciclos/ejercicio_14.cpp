/*
Leer un número N y calcular su factorial.

*/

#include <iostream>
using namespace std;

int main() {
    int numero;
    long long factorial = 1;

    cout << "Ingrese un numero N para calcular su factorial: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++){
        factorial = factorial * i;
    }

    cout << "El factorial es " << factorial << endl;
    return 0;
}