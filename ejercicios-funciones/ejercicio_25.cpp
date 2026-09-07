/*
Hacer una función que devuelva las raíces reales de un polinomio de segundo
grado y además indique si tiene o no raíces reales. Nota: utilizar la función
realizada en el ejercicio 39. Si no tuviera raíces reales, devolverá 0 en ambas.
*/

#include <iostream>
#include <cmath>
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

bool calcularRaices(float a, float b, float c, float &r1, float &r2) {
    bool tieneRaices = tieneRaicesReales(a, b, c);

    if (tieneRaices == true) {
        float discriminante = (b * b) - ( 4 * a * c);

        r1 = (-b + sqrt(discriminante)) / (2 * a);
        r2 = (-b - sqrt(discriminante)) / (2 * a);

        return true;
    }
    else {
        r1 = 0;
        r2= 0;
        return false;
    }
}

int main() {
    float coefA, coefB, coefC;
    float raiz1, raiz2;
    bool existen;

    cout << "Calculadora de raices (ax^2 + bx + c)" << endl;
    cout << "Ingrese el coeficiente A: ";
    cin >> coefA;
    cout << "Ingrese el coeficiente B: ";
    cin >> coefB;
    cout << "Ingrese el coeficiente C: ";
    cin >> coefC;

    if (coefA == 0) {
        cout << "El coeficiente A no puede ser 0" << endl;
        return 0;
    }

    existen = calcularRaices(coefA, coefB, coefC, raiz1, raiz2);

    if(existen == true) {
        cout << "Las raices existen y son: " << endl;
        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;
    }
    else {
        cout << "El polinomio no tiene raices reales" << endl;
    }
    return 0;
}
