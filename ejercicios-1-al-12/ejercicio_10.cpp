/*
 Leer dos números y luego una opción que puede ser “ + ”: suma, “ – “: resta, “ *
”: multiplicación o “ / “: división. Según la opción elegida realizar el cálculo
*/

#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char opcion;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese la opcion (+, -, *, /): ";
    cin >> opcion;

    if(opcion == '+'){
        cout << "Resultado: " << num1 + num2 << endl;
    }
    else if (opcion == '-') {
        cout << "Resultado: " << num1 - num2 << endl;
    }
    else if (opcion == '*') {
        cout << "Resultado: " << num1 * num2 << endl;
    }
    else if (opcion == '/') {
        cout << "Resultado: " << num1 / num2 << endl;
    }
    else {
        cout << "Opcion incorrecta" << endl;
    }
    return 0;
}

// Otra manera de hacerlo:

int main() {
    float num1, num2;
    char opcion;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if(opcion == '+') cout << "Resultado: " << num1 + num2 << endl;
    else if (opcion == '-') cout << "Resultado: " << num1 - num2 << endl;
    else if (opcion == '*') cout << "Resultado: " << num1 * num2 << endl;
    else if (opcion == '/') cout << "Resultado: " << num1 / num2 << endl;
    else cout << "Opcion incorrecta" << endl;
    return 0;
}