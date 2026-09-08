/*
Escribir un algoritmo que halle una matriz C como suma de dos matrices A y B. La
dimensión de las matrices de M × N se lee como dato (suponer un MAX para fila y
columna).
*/

#include <iostream>
using namespace std;

const int limite_filas = 20;
const int limite_columnas = 20;

// ejecuta la suma matricial

void calcularMatrizSuma(float matrizOrigenA[][limite_columnas], float matrizOrigenB[][limite_columnas], float matrizDestinoC[][limite_columnas],int totalFilas, int totalColumnas){
    for (int indiceFila=0; indiceFila < totalFilas; indiceFila = indiceFila + 1){
        for (int indiceColumna = 0; indiceColumna < totalColumnas; indiceColumna = indiceColumna + 1){
            matrizDestinoC[indiceFila][indiceColumna] = matrizOrigenA[indiceFila][indiceColumna] + matrizOrigenB[indiceFila][indiceColumna];
        }
    }
}

int main() {
    int filasReales;
    int columnasReales;

    float tablaA[limite_filas][limite_columnas];
    float tablaB[limite_filas][limite_columnas];
    float tablaResultado[limite_filas][limite_columnas];

    //dimensiones
    cout << "Defina la cantidad de filas de las matrices: ";
    cin >> filasReales;
    cout << "Defina la cantidad de columnas de las matrices: ";
    cin >> columnasReales;

    // manejo de errores
    if(filasReales > limite_filas || columnasReales > limite_columnas || filasReales <= 0 || columnasReales <= 0){
        cout << "Error: dimensiones invalidas";
        return 0;
    }

    // estructura A:
    for (int indiceFila = 0; indiceFila < filasReales; indiceFila = indiceFila + 1){
        for(int indiceColumna = 0; indiceColumna < columnasReales; indiceColumna = indiceColumna + 1){
            cout << "Valor celda [" << indiceFila << "]" << indiceColumna << "]: ";
            cin >> tablaA[indiceFila][indiceColumna];
        }
    }

    // estructura B:
    for (int indiceFila = 0; indiceFila < filasReales; indiceFila = indiceFila + 1) {
        for (int indiceColumna = 0; indiceColumna < columnasReales; indiceColumna = indiceColumna + 1) {
            
            cout << "Valor celda [" << indiceFila << "][" << indiceColumna << "]: ";
            cin >> tablaB[indiceFila][indiceColumna];
        }
    }

    calcularMatrizSuma(tablaA, tablaB, tablaResultado, filasReales, columnasReales);

    cout << "--- Matriz resultante de A + B---" << endl;

    for (int indiceFila = 0; indiceFila < filasReales; indiceFila = indiceFila + 1 ){
        for (int indiceColumna = 0; indiceColumna < columnasReales; indiceColumna = indiceColumna + 1){
            cout << tablaResultado[indiceFila][indiceColumna] <<"\t";

        }
        cout << endl;

    }
    return 0;


}