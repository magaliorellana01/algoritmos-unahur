/*
 Dada una serie de nombres con sus salarios respectivos, determinar el salario
máximo, el mínimo y la persona que percibe cada uno.

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    float salario;

    string nombreMax, nombreMin;
    float salarioMax, salarioMin;

    int seguir = 1;
    bool esPrimero = true;

    while (seguir == 1){
        cout << "Ingrese el nombre del empleado: ";
        cin >> nombre;
        cout << "Ingrese el salario del empleado: ";
        cin >> salario;

        if (esPrimero) {
            salarioMax = salario;
            salarioMin = salario;
            nombreMax = nombre;
            nombreMin = nombre;
            esPrimero = false;
        }
        else {
            if (salario > salarioMax){
                salarioMax = salario;
                nombreMax = nombre;
            } 
            if (salario < salarioMin){
                salarioMin = salario;
                nombreMin = nombre;
            }
        }
        cout << "Desea ingresar otro empleado? (1 para sí, 0 para no): ";
        cin >> seguir;
    }

    cout << "----- RESULTADOS FINALES -----" << endl;
    cout << "El mayor salario es de $" << salarioMax << " y le pertenece a " << nombreMax << endl;
    cout << "El menor salario es de $" << salarioMin << " y le corresponde a " << nombreMin << endl;

    return 0;
}