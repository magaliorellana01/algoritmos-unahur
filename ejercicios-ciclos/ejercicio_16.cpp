/*
 Dada una serie de números reales, determinar el valor máximo, el mínimo y las
posiciones en que estos se encontraban en la serie. El programa deberá ir
preguntando si hay más números para ingresar
*/

#include <iostream>
using namespace std;

int main() {
    float numero, maximo, minimo;
    int posicion = 1, posMax, posMin;
    int continuar = 1;
    bool esPrimero = true; 

    while (continuar == 1) {
        cout << "Posicion " << posicion << " - Ingrese un numero real: ";
        cin >> numero;

        if (esPrimero == true) {
            maximo = numero;
            minimo = numero;
            posMax = posicion;
            posMin = posicion;
            esPrimero = false; 
        } else {
            if (numero > maximo) {
                maximo = numero;
                posMax = posicion;
            }
            if (numero < minimo) {
                minimo = numero;
                posMin = posicion;
            }
        }
        
        posicion = posicion + 1;
        cout << "Hay mas numeros para ingresar? (1= si, 0 = no): ";
        cin >> continuar;
    }
    
    cout << "El maximo fue " << maximo << " en la posicion " << posMax << endl;
    cout << "El minimo fue " << minimo << " en la posicion " << posMin << endl;
    
    return 0;
}