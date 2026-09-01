/*
Leer dos números reales e imprimir el mayor de ellos.
*/

#include <iostream>
using namespace std;

int main(){
    float n1, n2;
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: " ;
    cin >> n2;

    if (n1 > n2) {
        cout << "El mayor es: " << n1 << endl;
    } else {
        cout << "El mayor es: " << n2 << endl;
    }
    return 0;
}