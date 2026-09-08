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
    int vectorUnion[200]; // 200 porque en el peor caso junta todos los de A y B
    int vectorInterseccion[100]; 
    
    int cantUnion = 0;
    int cantInter = 0;
    
    // 1. CARGA DE DATOS
    cout << "Ingrese la cantidad de elementos de A (N): ";
    cin >> N;
    for (int i = 0; i < N; i = i + 1) {
        cout << "Valor para A[" << i << "]: ";
        cin >> A[i];
    }
    
    cout << "\nIngrese la cantidad de elementos de B (M): ";
    cin >> M;
    for (int i = 0; i < M; i = i + 1) {
        cout << "Valor para B[" << i << "]: ";
        cin >> B[i];
    }
    
    // 2. ORDENAMIENTO (Requisito del enunciado)
    ordenarVectorAscendente(A, N);
    ordenarVectorAscendente(B, M);
    
    // 3. CALCULO DE LA INTERSECCION (Los que estan en A y en B)
    // Recorremos el vector A y por cada elemento, lo buscamos en B
    for (int i = 0; i < N; i = i + 1) {
        int candidato = A[i];
        
        // Si el elemento de A EXISTE en B, y todavía NO EXISTE en el vector resultado...
        if (existeEnVector(B, M, candidato) == true && existeEnVector(vectorInterseccion, cantInter, candidato) == false) {
            vectorInterseccion[cantInter] = candidato;
            cantInter = cantInter + 1;
        }
    }
    
    // 4. CALCULO DE LA UNION (Todos los de A + Todos los de B, sin repetir)
    // Primero, volcamos todo el vector A en el vector Union
    for (int i = 0; i < N; i = i + 1) {
        int candidato = A[i];
        if (existeEnVector(vectorUnion, cantUnion, candidato) == false) {
            vectorUnion[cantUnion] = candidato;
            cantUnion = cantUnion + 1;
        }
    }
    // Segundo, volcamos todo el vector B, solo si no estaban ya adentro
    for (int i = 0; i < M; i = i + 1) {
        int candidato = B[i];
        if (existeEnVector(vectorUnion, cantUnion, candidato) == false) {
            vectorUnion[cantUnion] = candidato;
            cantUnion = cantUnion + 1;
        }
    }
    
    // 5. SALIDA DE RESULTADOS
    cout << "\n=====================================" << endl;
    
    cout << "Vector UNION (" << cantUnion << " elementos): [ ";
    for (int i = 0; i < cantUnion; i = i + 1) cout << vectorUnion[i] << " ";
    cout << "]" << endl;
    
    cout << "Vector INTERSECCION (" << cantInter << " elementos): [ ";
    for (int i = 0; i < cantInter; i = i + 1) cout << vectorInterseccion[i] << " ";
    cout << "]" << endl;
    
    cout << "=====================================" << endl;
    
    return 0;
}