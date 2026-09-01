/*
Leer un número real y decir si es mayor, menor o igual a cero.

*/

#include <iostream>
using namespace std;

int main() {
    float num;
    cout << "Ingrese un numero real: ";
    cin >> num;

    if (num == 0 ) cout << "El numero es igual a 0" << endl;
    else if (num > 0) cout << "El numero es mayor a 0" << endl;
    else cout << "El numero es menor a 0" << endl;
    return 0;
}

