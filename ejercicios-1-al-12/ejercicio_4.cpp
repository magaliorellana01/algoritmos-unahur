/*
Dado el radio R de una esfera que se solicita por teclado, calcular e imprimir su
superficie y su volumen
*/

#include <iostream>
using namespace std;

int main() {
    float r;
    cout << "Ingrese el radio de la esfera: ";
    cin >> r;
    cout << "Superficie: " << 4 * 3.1416 * r * r << endl;
    cout << "Volumen: " << (4.0 / 3.0) * 3.1416 * r * r * r << endl;
    return 0;

}

