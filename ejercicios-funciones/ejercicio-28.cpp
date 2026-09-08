/*
 Escribir una función que devuelva el máximo común divisor y el mínimo común
múltiplo entre dos enteros. Nota: cuidado al modularizar (recordar que una
función solo tiene que realizar una tarea).
Vectores y Matrices

*/

#include <iostream>
using namespace std;

int calcularMCD(int a, int b){
    int resto;
    while (b != 0){
        resto = a % b;
        a = b;
        b = resto;
    }
    return 0;
}

int calcularMCM(int a, int b){
    int mcd;
    int mcm;

    mcd = calcularMCD(a, b);
    mcm = (a * b ) / mcd;

    return mcm;
}

int main() {
    int num1, num2;
    int resultadoMCD, resultadoMCM;

    cout << "Calculadora de MCD Y MCM" << endl;
    cout << "Ingrese el primero numero entero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero entero: ";
    cin >> num2;
    if(num1 <= 0 || num2 <= 0){
        cout << "Por favor ingrese numeros mayores a cero " << endl;
        return 0;
    }

    resultadoMCD = calcularMCD(num1, num2);
    resultadoMCM = calcularMCM(num1, num2);

    cout << " ---- RESULTADO ---- " << endl;
    cout << "El maximo comun divisor es: " << resultadoMCD << endl;
    cout << "El minimo comun multiplo es: " << resultadoMCM << endl;
    return 0;
}