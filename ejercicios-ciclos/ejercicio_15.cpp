/*
Leer una serie de números reales, terminando la serie con un cero. Imprimir los
datos a medida que se los ingresa junto con la suma parcial de los mismos.
*/

#include <iostream>
using namespace std;

int main() {
    float numero;
    float sumaParcial = 0;

    cout << "Ingrese un numero";
    cin >> numero;

    while (numero != 0) {
        sumaParcial = sumaParcial + numero;

        cout << "Dato ingresado: " << numero << " | Suma parcial: " << sumaParcial << endl;

        cout << "Ingrese otro numero: ";
        cin >> numero;
    }

    cout << "El ciclo termino, suma total final: " << sumaParcial << endl;
    return 0;
}