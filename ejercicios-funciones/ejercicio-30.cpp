/*
Dados dos vectores A y B, de N elementos cada uno, se desean calcular:
a. El vector suma.
b. El producto escalar
*/

#include <iostream>
using namespace std;

// Sumar dos vectores

void sumarVectores (int vectorA[], int vectorB[], int vectorSuma[], int N){
    for (int i = 0; i < N; i = i + 1) {
        vectorSuma[i] = vectorA[i] + vectorB[i];
    }
}

// producto escalar

int calcularProductoEscalar(int vectorA[], int vectorB[], int N){
    int totalEscalar = 0;
    
    for (int i = 0; i < N; i = i + 1){
        totalEscalar = totalEscalar + (vectorA[i] * vectorB[i]);
    }

    return totalEscalar;
}

int main() {
    int N;
    cout << "Cuantos elementos (N) van a tener los vectores?: ";
    cin >> N;

    int A[100];
    int B[100];
    int C[100];
    int resultadoEscalar;

    // Lleno el vector A
    for (int i = 0; i < N; i = i + 1){
        cout << "ingrese el valor para A [" << i << "]: ";
        cin >> A[i];
    }

    // LLeno el vector B

    for (int i = 0; i < N; i = i + 1){
        cout << "Ingrese el valor para B[" <<i << "[: ";
        cin >> B[i];
    }

    sumarVectores(A, B, C, N);
    resultadoEscalar = calcularProductoEscalar(A, B, N);

    // muestro los resultados

    cout << "El vector suma es: [ ";
    for(int i= 0; i < N; i = i + 1){
        cout << C[i] << " ";
    }
    cout << "]" << endl;

    cout << "El producto escalar es: " << resultadoEscalar << endl;
    return 0;
}