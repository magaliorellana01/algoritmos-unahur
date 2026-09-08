/*
 Escribir un programa que calcule la traza de una matriz cuadrada. Recordar que la
traza de una matriz es la suma de los elementos de su diagonal principal
*/

#include <iostream>
using namespace std;

const int dimension_maxima = 20;

// funcion para sumar la diagonal principal

float calcularSumaDiagonalPrincipal(float matriz[][dimension_maxima], int tamanioMatriz){
    float sumaDiagonalPrincipal = 0;

    for (int indiceDiagonal = 0; indiceDiagonal < tamanioMatriz; indiceDiagonal = indiceDiagonal + 1){
        sumaDiagonalPrincipal = sumaDiagonalPrincipal + matriz[indiceDiagonal][indiceDiagonal];

    }
    return sumaDiagonalPrincipal;
}

int main() {
    int tamanioMatriz;
    float matriz[dimension_maxima][dimension_maxima];
    float resultadoFinal;

    cout << "Suma de diagonal principal" << endl;

    cout << "Ingrese el tamaño de la matriz cuadrada: ";
    cin >> tamanioMatriz;

    if(tamanioMatriz > dimension_maxima || tamanioMatriz <= 0){
        cout << "El tamaño de la matriz debe ser entre 1 y " << dimension_maxima << ". " << endl;
        return 0;
    }

    // ingresa los valores en la matriz
    for (int filaActual = 0; filaActual < tamanioMatriz; filaActual = filaActual + 1){
        for (int columnaActual=0; columnaActual < tamanioMatriz; columnaActual = columnaActual + 1){
            cout << "Ingrese valor para la pisicion: Fila " << filaActual << " y columna " << columnaActual << ": ";
            cin >> matriz[filaActual][columnaActual];
        }

    }

    resultadoFinal = calcularSumaDiagonalPrincipal(matriz, tamanioMatriz);

    cout << "Matriz ingresada: " << endl;
    for (int filaActual = 0; filaActual < tamanioMatriz; filaActual = filaActual + 1){
        for (int columnaActual = 0; columnaActual < tamanioMatriz; columnaActual = columnaActual + 1 ){
            cout << matriz[filaActual][columnaActual] << "\t";

        }
        cout << "La suma de la diagonal principal es: " << resultadoFinal << endl;
        cout << endl;
        return 0;
    }
}