/*
 Se carga un vector X de N elementos enteros. Escribir un algoritmo que devuelva
un
vector que tenga todos los elementos de X, pero sin elementos repetidos
*/

#include <iostream>
using namespace std;

bool existeEnVector(int vectorNuevo[], int tamanioActual, int valorBuscado){
    for (int i = 0; i < tamanioActual; i = i + 1){
        if (vectorNuevo[i] == valorBuscado){
            return true;
        }
    }
    return false;
}

int main() {
    int N;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> N;

    int vectorX[100];
    int vectorY[100];
    int cantidadY = 0;

    // carga del vector original
    for (int i = 0; i < N; i = i + 1){
        cout << "Ingrese el valor" << i + 1 << ": ";
        cin >> vectorX[i];
    }

    // filtrado
    for (int i = 0 ; i < N; i = i + 1){
        int valorActual = vectorX[i];

        // si el valor no existe en el vetor nuevo, lo incorporo
        if(existeEnVector(vectorY, cantidadY, valorActual) == false){
            vectorY[cantidadY] = valorActual;
            cantidadY = cantidadY + 1;
        }
    }

    // salida de los resuultados
    cout << "Vector original (" << N << " elementos): [ ";
    for (int i = 0; i < N ; i = i + 1){
        cout << vectorX[i]<< " ";
    
    }
    cout << "]" << endl;

    cout << "Vector sin repetidos ( " << cantidadY << " elementos): [ ";
    for (int i=0; i < cantidadY; i = i + 1){
        cout << vectorY[i] << " ";
    }
    cout << "]" << endl;
    return 0;
}