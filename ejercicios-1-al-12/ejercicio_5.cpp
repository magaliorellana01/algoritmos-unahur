/*
 Leer la base y la altura de un rectángulo, calcular el perímetro y la superficie.
Estructuras selectivas
*/

#include <iostream>
using namespace std;

int main() {
    float base, altura;
    cout << "Ibngrese base y altura: ";
    cin >> base >> altura;
    cout << "Perimetro: " << 2 * base + 2 * altura << endl;
    cout << "Superficie: " << base * altura << endl;
    return 0;
}

