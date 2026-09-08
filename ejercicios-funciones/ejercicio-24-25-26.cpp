/*
Hacer una función que, dado los coeficientes de un polinomio de segundo grado
(3 números reales), indique si tiene o no raíces reales, devolviendo un valor
booleano.
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

// EJERCICIO 25 
/*
Hacer una función que devuelva las raíces reales de un polinomio de segundo
grado y además indique si tiene o no raíces reales. Nota: utilizar la función
realizada en el ejercicio 24. Si no tuviera raíces reales, devolverá 0 en ambas.
*/
bool calcularRaices(float a, float b, float c, float &r1, float &r2) {
    bool existen = tieneRaicesReales(a, b, c);

    if(existen == true) {
        float discriminante = (b*b) - (4 * a * c);
        r1 = (-b + sqrt(discriminante)) / (2 * a);
        r2 = (-b - sqrt(discriminante)) / (2 * a);

        return true;
    }
    else {
        r1 = 0;
        r2 = 0;
        return false;
    }
}

// EJERCICIO 26
/*
Hacer un programa principal en donde se pida al usuario ingresar los coeficientes
de la cuadrática, e indicar si tiene o no raíces, y cuáles son en caso de tener,
utilizando la función definida.
*/

int main() {
    float coefA, coefB, coefC;
    float raiz1, raiz2;
    bool resultado;

    cout << "Ingrese A: ";
    cin >> coefA;

    if(coefA == 0){
        cout << "Error: 'A' no puede ser 0" << endl;
        return 0;
    }
    cout << "Ingrese B";
    cin >> coefB;
    cout << "Ingrese C";
    cin >> coefC;

    resultado = calcularRaices(coefA, coefB, coefC, raiz1, raiz2);

    if (resultado == true){
        cout << "Las raices son: R1 = " << raiz1 << " y R2 = " << raiz2 << endl;
    }
    else {
        cout << "El polinomio no tiene raices reales" << endl;
    }
    return 0;
}