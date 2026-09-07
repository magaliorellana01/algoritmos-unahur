/*
Hacer una función que, dado los coeficientes de un polinomio de segundo grado
(3 números reales), indique si tiene o no raíces reales, devolviendo un valor
booleano.
*/

#include <iostream>
using namespace std;

bool tieneRaicesReales(float a, float b, float c) {
    float discriminante = (b * b) - ( 4 * a * c);

    if (discriminante >= 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    float coefA, coefB, coefC;
    bool resultado;

    cout << "Ingrese el coeficiente A: ";
    cin >> coefA;
    cout << "Ingrese el coeficiente B: ";
    cin >> coefB;
    cout << "Ingrese el coeficiente C: ";
    cin >> coefC;

    resultado = tieneRaicesReales(coefA, coefB, coefC);
    if(resultado == true) {
        cout << "El polinomio si tiene raices reales" << endl;
    }
    else {
        cout << "El polinomio ni tiene raices reales" << endl;
    }

    return 0;
}