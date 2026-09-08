/*
Escribir un algoritmo que determine si una matriz cuadrada ingresada es la matriz
identidad. Optimizar el código.

*/

#include <iostream>
using namespace std;

const int dimension_maxima = 20;

// funcion para saber si es matriz identidad

bool esMatrizIdentidad(float matriz[][dimension_maxima], int tamanioMatriz){
    for(int filaActual=0; filaActual < tamanioMatriz; filaActual = filaActual + 1){
        for(int columnaActual=0; columnaActual < tamanioMatriz; columnaActual = columnaActual + 1){
            if(filaActual == columnaActual){
                if (matriz[filaActual][columnaActual] != 1){
                    return false;
                }
            }
            else{
                if(matriz[filaActual][columnaActual] != 0){
                    return false;
                }
            }
        }
    }
    return true;
}

int main() {
    int tamanioMatriz;
    float matriz[dimension_maxima][dimension_maxima];

    cout << "Ingrese el tamaño de la matriz cuadrada: ";
    cin >> tamanioMatriz;

    // da error si supera el tamaño maximo
    if(tamanioMatriz > dimension_maxima || tamanioMatriz <= 0){
        cout << "Dimension invalida" << endl;
        return 0;
    }

    // armado de la matriz
    for (int filaActual = 0; filaActual < tamanioMatriz; filaActual = filaActual + 1) {
        for (int columnaActual = 0; columnaActual < tamanioMatriz; columnaActual = columnaActual + 1) {
            
            cout << "Valor celda [" << filaActual << "][" << columnaActual << "]: ";
            cin >> matriz[filaActual][columnaActual];
        }
     }

     for (int filaActual = 0; filaActual < tamanioMatriz; filaActual = filaActual + 1) {
        for (int columnaActual = 0; columnaActual < tamanioMatriz; columnaActual = columnaActual + 1) {
            cout << matriz[filaActual][columnaActual] << "\t";
        }
        cout << endl;
    }

    // llamo a la funcion y evaluo si es matriz identidad o no
    if (esMatrizIdentidad(matriz, tamanioMatriz) == true) {
        cout << "Si, es una Matriz Identidad." << endl;
    } else {
        cout << "No es una Matriz Identidad." << endl;
    }
    
    return 0;

}