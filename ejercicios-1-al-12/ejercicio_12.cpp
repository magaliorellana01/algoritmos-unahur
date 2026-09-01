/*
Pasar un período expresado en segundos a un período expresado en días, horas,
minutos y segundos.

*/

#include <iostream>
using namespace std;

int main() {
    int total, dias, horas, minutos, segundos, sobrante1, sobrante2;
    cout << "Ingrese el total de segudos: ";
    cin >> total;

    dias = total / 86400;
    sobrante1 = total % 86400;

    horas = sobrante1 / 3600;
    sobrante2 = sobrante1 % 3600;

    minutos = sobrante2 / 60;
    segundos = sobrante2 % 60;

    cout << "Dias: " << dias << endl;
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos: " << segundos << endl;
    return 0;
}