/*
 Por cada alumno que rindió un examen de inglés se lee el número de padrón, y la
nota obtenida. Se desea saber la cantidad de alumnos que rindieron el examen y el
porcentaje de alumnos que obtuvieron cada nota.
*/

#include <iostream>
using namespace std;

int main()
{
    int padron;
    int nota;
    int totalAlumnos = 0;

    int contadorNotas[11];

    for (int i = 1; i <= 10; i = i + 1)
    {
        contadorNotas[i] = 0;
    }

    cout << "Ingrese numero de padron, 0 para terminar) : ";
    cin >> padron;

    while (padron != 0)
    {
        cout << "Ingrese la nota obtenida (1 al 10): ";
        cin >> nota;

        if (nota >= 1 && nota <= 10)
        {
            contadorNotas[nota] = contadorNotas[nota] + 1;
            totalAlumnos = totalAlumnos + 1;
        }
        else
        {
            cout << "Error: La nota debe estar entre un numero del 1 al 10" << endl;
        }
        cout << "Ingrese siguiente numero del padron (0 para terminar): ";
        cin >> padron;
    }

    cout << "Cantidad total de alumnos: " << totalAlumnos << endl;

    if (totalAlumnos > 0)
    {
        cout << "Porcentaje por notas: " << endl;
        float porcentaje;

        for (int i = 1; i <= 10; i = i + 1)
        {
            porcentaje = (contadorNotas[i] * 100.0 / totalAlumnos);
            cout << "Nota " << i << ": " << porcentaje << "% (" << contadorNotas[i] << " alumnos" << endl;
        }
    }
    else
    {
        cout << "No se inresaron examenes validos" << endl;
    }
    return 0;
}
