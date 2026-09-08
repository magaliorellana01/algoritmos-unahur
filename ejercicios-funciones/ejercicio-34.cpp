/*
Si los números de un vector representan los coeficientes de un polinomio (de
grado
no mayor a 10), escribir un algoritmo que calcule la especialización de ese polinomio
con un número que elige el usuario.
*/

#include <iostream>
#include <cmath>
using namespace std;

float evaluarPolinomio(float coeficientes[], int grado, float x){
    float resultadoTotal = 0;

    for (int i=0; i<= grado; i = i + 1){
        float terminoActual = coeficientes[i] * pow(x, i);
        resultadoTotal = resultadoTotal + terminoActual;
    }
    return resultadoTotal;
}

int main() {
    int grado;
    float coeficientes[11];
    float valorX;
    float resultadoFinal;

    cout << "Evaluador" << endl;
    cout << "Ingrese el grado del polinomio(maximo 10): ";
    cin >> grado;

    if (grado < 0 || grado > 10){
        cout << "Error: el grado debe estar entre 0 y 10" << endl;
        return 0;
    }

    // cargo los coeficientes en el vector
    for (int i = 0; i <= grado; i = i + 1){
        cout << "Ingrese el coeficiente para X " << i << ": ";
        cin >> coeficientes[i];
    }

    // pido el valor d e X para la especializacion
    cout << "Ingrese el valor de X para especializar el polinomio: ";
    cin >> valorX;

    // llamo a la funcion y muestro el resultado
    resultadoFinal = evaluarPolinomio(coeficientes, grado, valorX);
    cout << "El resultado de P (" << valorX << ") es: " <<resultadoFinal << endl;

    return 0;
}