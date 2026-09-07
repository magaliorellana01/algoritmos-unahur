/*
Escribir un algoritmo que lea una serie de números reales y verifique si están
ordenados en forma ascendente, descendente o si no están ordenados,
informando por pantalla
*/

#include <iostream>
using namespace std;

int main() {
    float numeroAnterior, numeroActual;
    bool ascendente = true;
    bool descendente = true;

    cout << "Ingrese el primer numero real (0 para cancelar todo): ";
    cin >> numeroAnterior;

    if (numeroAnterior != 0) {
        cout << "Ingrese el siguiente numero (0 para terminar): ";
        cin >> numeroActual;

        while (numeroActual != 0) {
            if (numeroActual > numeroAnterior){
                descendente = false;
            }
            if (numeroActual < numeroAnterior) {
                ascendente = false;
            }

            numeroAnterior = numeroActual;

            cout << "Ingrese el siguiente numero = 0 para terminar): ";
            cin >> numeroActual;
        }

        cout << "--- RESULTADO FINAL ---" << endl;
        if(ascendente == true && descendente == false) cout << "ASCENDENTE" << endl;
        else if (descendente == true && ascendente == false) cout << "DESCENDENTE" << endl;
        else if (ascendente == true && descendente == true) cout << "IGUALES" << endl;
        else cout << "DESORDENADOS" << endl;
    }
    else {
        cout << "No se ingrsaron numeros validos para comparar" << endl;
    }
    return 0;
}