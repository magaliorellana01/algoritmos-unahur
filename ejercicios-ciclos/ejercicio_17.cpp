/*
Leer un valor N y luego N números enteros. Se pide imprimir el mayor y el menor
y las veces que aparece cada uno.
*/

#include <iostream>
using namespace std;

int main() {
    int n, numero, maximo, minimo;
    int contMax = 0, contMin = 0;

    cout << "Ingrese la cantidad N de numeros a leer: ";
    cin >> n;

    if (n > 0) {
        for (int i = 1; i <= n; i = i + 1) {
            cout << "Ingrese el numero " << i << ": ";
            cin >> numero;

            if (i == 1) { 
                maximo = numero;
                minimo = numero;
                contMax = 1;
                contMin = 1;
            } else {
                // evalo el maximo
                if (numero > maximo) {
                    maximo = numero;
                    contMax = 1; 
                } else if (numero == maximo) {
                    contMax = contMax + 1; 
                }

                // evaluo el minimo
                if (numero < minimo) {
                    minimo = numero;
                    contMin = 1; 
                } else if (numero == minimo) {
                    contMin = contMin + 1;
                }
            }
        }
        cout << "Mayor: " << maximo << " (Aparecio " << contMax << " veces)" << endl;
        cout << "Menor: " << minimo << " (Aparecio " << contMin << " veces)" << endl;
    } else {
        cout << "N debe ser un numero mayor a 0." << endl;
    }
    
    return 0;
}