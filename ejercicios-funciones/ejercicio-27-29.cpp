/*
Hacer una función que indique si un número es primo o no.
*/
// ejercicio 27
#include <iostream>
using namespace std;

bool esPrimo(int numero) {
    if(numero <= 1) {
        return false;
    }

    for (int divisor = 2; divisor < numero; divisor = divisor + 1){
        if  (numero % divisor == 0){
            return false;
        }
    }
    return true;
}

// ejercicio 29
/*
Desarrollar una función que devuelva en un vector los números primos entre 2 y
200. Reutilizar lo que ya se escribió y probó.
*/

void llenarVectorPrimos(int vector[], int &cantidadLlenos){
    cantidadLlenos = 0;

    for (int i = 2; i <= 200; i = i + 1){
        if(esPrimo(i) == true){
            vector[cantidadLlenos] = i;
            cantidadLlenos = cantidadLlenos + 1;
        }
    }
}

int main () {
    int misPrimos[100];
    int totalPrimosEncontrados;

    llenarVectorPrimos(misPrimos, totalPrimosEncontrados);
        cout << "Se encontraron " << totalPrimosEncontrados << " numeros primos entre 2 y 200: " << endl;

        for (int vagon = 0; vagon < totalPrimosEncontrados; vagon = vagon + 1){
            cout << misPrimos[vagon] << " - ";
        }

        return 0;
    }
