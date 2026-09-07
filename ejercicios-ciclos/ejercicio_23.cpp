/*
Leer N y luego N lotes de números reales que terminan con un valor 0, y calcular
la media individual de cada lote, junto con la media total de todos los números
ingresados.
*/

#include <iostream>
using namespace std;

int main() {
    int nLotes;
    float sumaTotal = 0;
    int cantidadTotal = 0;

    cout << "Ingrese la cantidad de lotes a procesar: ";
    cin >> nLotes;

    for (int i = 1; i<= nLotes; i = i + 1) {
        cout << "--- Iniciando Lore " << i << endl;

        float sumaLote = 0;
        int cantidadLote = 0;
        float numero;

        cout << "Ingrese un numero real (0 para cerrar el lote): ";
        cin >> numero;

        while(numero != 0) {
            sumaLote = sumaLote + numero;
            cantidadLote = cantidadLote + 1;

            cout << "Ingrese otro numero (0 para cerrar): ";
            cin >> numero;
        }
        if (cantidadLote > 0) {
            cout << "La media del lote " << i << " es: " <<(sumaLote / cantidadLote) << endl;
        }
        else {
            cout << "El lote " << i << " estaba vacio" << endl;
        }

    }
    cout << "\n===================================" << endl;
    if (cantidadTotal > 0) {
        cout << "La media total de todos los lotes es: " << (sumaTotal / cantidadTotal) << endl;
    }
    else {
        cout << "No se ingresaron datos validos en ningun lote" << endl;
    }
    return 0;
}