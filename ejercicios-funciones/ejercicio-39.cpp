/*
 Escribir un algoritmo que construya un vector con los valores mínimos de cada una
de las filas de una matriz.
*/

#include <iostream>
using namespace std;

const int maximo = 20;

//funcion para buscar el minimo de cada fila

void extraerMinimoPorFila(float matriz[][maximo], float vectorMinimos[], int totalFilas, int totalColumnas ){
    for (int fila = 0; fila < totalFilas; fila = fila + 1){
        float numeroMasChico = matriz[fila][0];
        
        for(int columna = 1; columna < totalColumnas; columna = columna + 1){
            if(matriz[fila][columna] < numeroMasChico){
                numeroMasChico = matriz[fila][columna];
            }
        }
        vectorMinimos[fila] = numeroMasChico;
    }
}

int main() {
    int cantidadFilas;
    int cantidadColumnas;

    float matrizNumeros[maximo][maximo];
    float minimosEncontrados[maximo];

    cout << "Ingrese la cantidad de filas: ";
    cin >> cantidadFilas;
    cout << "Ingrese la cantidad de columnas: ";
    cin >> cantidadColumnas;

    cout << endl;

    cout << "--- Cargo la matriz ---" << endl;

    for (int fila = 0; fila < cantidadFilas; fila = fila + 1){
        for(int columna= 0; columna < cantidadColumnas; columna = columna + 1){
            cout << "Ingrese valor para la fila: "<< fila << " y columna " << columna << ": ";
            cin >> matrizNumeros[fila][columna];
            }
    }

    // llamo a la funcion
    extraerMinimoPorFila(matrizNumeros, minimosEncontrados, cantidadFilas, cantidadColumnas);
    cout << endl;

    cout << "--- Resultado final: "<< endl;

    for(int fila = 0; fila < cantidadFilas; fila = fila +1){
        cout << "el valor minimo de la fila " << fila << " es: " << minimosEncontrados[fila] << endl; 
    }
    return 0;
}