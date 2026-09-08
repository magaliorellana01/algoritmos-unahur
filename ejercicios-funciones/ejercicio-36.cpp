/*
Escribir un algoritmo que halle un vector cuyos elementos son la suma de los
elementos de cada fila de una matriz previamente ingresada.
*/

#include <iostream>
using namespace std;

const int limite_filas = 20;
const int limite_columnas = 20;

// funcion que suma los elementos por fila

void sumarFilasDeMatriz(float matrizOrigen[][limite_columnas], float vectorResultante[], int totalFilas, int totalColumnas){
    for(int indiceFila = 0; indiceFila < totalFilas; indiceFila = indiceFila + 1){
        float acumuladorFila = 0;
        for(int indiceColumna = 0; indiceColumna < totalColumnas; indiceColumna = indiceColumna + 1){
            acumuladorFila = acumuladorFila + matrizOrigen[indiceFila][indiceColumna];
        }
        vectorResultante[indiceFila] = acumuladorFila;
    }
}

int main() {
    int filasReales;
    int columnasReales;

    float matrizPrincipal[limite_filas][limite_columnas];
    float vectorSumas[limite_filas];

    // dimensiones
    cout << "Defina la cantidad de filas de la matriz: ";
    cin >> filasReales;
    cout << "Defina la cantidad de columnas de la matriz: ";
    cin >> columnasReales;

    // error si ingresa un numero inferior o superior
    if(filasReales > limite_filas || columnasReales > limite_columnas || filasReales <= 0 || columnasReales <= 0){
        cout << "Error: dimensiones invalidas" << endl;
        return 0;
    }

    // ingreso de datos a la matriz
    for (int indiceFila = 0; indiceFila < filasReales; indiceFila = indiceFila + 1){
        for (int indiceColumna =0; indiceColumna < columnasReales; indiceColumna = indiceColumna + 1){
            cout << "Valor celda [" << indiceFila << "][" << indiceColumna << "]: ";
            cin >> matrizPrincipal[indiceFila][indiceColumna];
        }
    }

    sumarFilasDeMatriz(matrizPrincipal, vectorSumas, filasReales, columnasReales);

    // resultado

    cout << "vector resultante de la suma por filas: "<< endl;
    for(int indiceFila = 0; indiceFila < filasReales; indiceFila = indiceFila + 1){
        cout << "Suma de la fila" << indiceFila << ":\t" << vectorSumas[indiceFila] << endl;

    }
    return 0;
}