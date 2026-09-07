/*
La relación entre temperaturas Celsius y Fahrenheit está dada por: C = 5/9 * (F –
32). Escribir un algoritmo que haga una tabla de valores Celsius-Fahrenheit, para
valores entre OºF y 200ºF, a intervalos de 10º.
*/

#include <iostream>
using namespace std;

int main() {
    float celsius;

    cout << "Tabla de conversion Fahrenheit a Celsius" << endl;
    cout << "Fahrenheit\tCelsius" << endl;

    for (int fahrenheit = 0; fahrenheit <= 200; fahrenheit = fahrenheit + 10) {
        celsius = (5.0/9.0) * (fahrenheit - 32);

        cout << fahrenheit << " F\t\t" << celsius << " C" << endl;
    }
    return 0;
}