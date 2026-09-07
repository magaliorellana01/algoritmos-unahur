/*
Leer A y B, enteros. Calcular C = A x B mediante sumas sucesivas e imprimir el
resultado
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    int c = 0;
    cout << "Ingrese dos numeros enteros, A y B";
    cin >> a >> b;

    for (int i = 1; i <= b; i = i+1){
        c = c + a;
    }
    cout << "El resultado de " << a << " x " << b << "es: " << c <<endl;
    return 0;
}