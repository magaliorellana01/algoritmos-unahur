/*
Se leen dos vectores A y B, de N y M elementos respectivamente. Construir un
algoritmo que halle los vectores unión e intersección de A y B. Previamente habrá
que ordenarlos.
*/

#include <iostream>
using namespace std; 

// FUNCION REUTILIZADA DEL EJERCICIO 32: 
bool existeEnVector(int vectorTarget[], int tamañoActual, int valorBuscado) {
    for (int i = 0; i < tamañoActual; i = i + 1) {
        if (vectorTarget[i] == valorBuscado) {
            return true;
        }
    }
    return false;
}

void ordenarVectorAscendente(int vector[], int longitud){
    int variableTemporal;
    for (int i = 0; i < longitud - 1; i = i + 1){
        for(int j = 0; j < longitud - i - 1; j = j + 1){
            if(vector[j] > vector[j + 1]){
                variableTemporal = vector [j];
                vector[j] = vector[j + 1];
                vector[j + 1] = variableTemporal;
            }
        }
    }
}

int main() {
    int N, M;
    int A[100], B[100];
    int vectorUnion[200]; 
    int vectorInterseccion[100];
    
    int cantUnion = 0;
    int cantInter = 0;
    
    // carga de datos
    cout << "Ingrese la cantidad de elementos de A: ";
    cin >> N;
    for (int i = 0; i < N; i = i + 1) {
        cout << "Valor para A[" << i << "]: ";
        cin >> A[i];
    }
    
    cout << "Ingrese la cantidad de elementos de B: ";
    cin >> M;
    for (int i = 0; i < M; i = i + 1) {
        cout << "Valor para B[" << i << "]: ";
        cin >> B[i];
    }
    
    // ordena
    ordenarVectorAscendente(A, N);
    ordenarVectorAscendente(B, M);
    
    
    for (int i = 0; i < N; i = i + 1) {
        int candidato = A[i];
        
       
        if (existeEnVector(B, M, candidato) == true && existeEnVector(vectorInterseccion, cantInter, candidato) == false) {
            vectorInterseccion[cantInter] = candidato;
            cantInter = cantInter + 1;
        }
    }
    
    
    for (int i = 0; i < N; i = i + 1) {
        int candidato = A[i];
        if (existeEnVector(vectorUnion, cantUnion, candidato) == false) {
            vectorUnion[cantUnion] = candidato;
            cantUnion = cantUnion + 1;
        }
    }
    
    for (int i = 0; i < M; i = i + 1) {
        int candidato = B[i];
        if (existeEnVector(vectorUnion, cantUnion, candidato) == false) {
            vectorUnion[cantUnion] = candidato;
            cantUnion = cantUnion + 1;
        }
    }
    
    // salida
    
    
    cout << "Vector UNION (" << cantUnion << " elementos): [ ";
    for (int i = 0; i < cantUnion; i = i + 1) cout << vectorUnion[i] << " ";
    cout << "]" << endl;
    
    cout << "Vector INTERSECCION (" << cantInter << " elementos): [ ";
    for (int i = 0; i < cantInter; i = i + 1) cout << vectorInterseccion[i] << " ";
    cout << "]" << endl;
    
    
    return 0;
}