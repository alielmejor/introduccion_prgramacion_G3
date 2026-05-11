#include <iostream>
using namespace std;

int main() {
    float notas[8];
    float suma = 0;
    int reprobados = 0;

    // Pedir las notas
    for (int i = 0; i < 8; i++) {
        cout << "Ingrese la nota del estudiante: ";
        cin >> notas[i];
    }

    // Mostrar notas aprobadas
    cout << "Notas aprobadas:" << endl;

    for (int i = 0; i < 8; i++) {
        if (notas[i] >= 60) {
            cout << notas[i] << endl;
        }
    }

    // Contar reprobados y sumar notas
    for (int i = 0; i < 8; i++) {
        suma = suma + notas[i];

        if (notas[i] < 60) {
            reprobados = reprobados + 1;
        }
    }

    // Calcular promedio
    float promedio = suma / 8;

    cout << "Cantidad de estudiantes reprobados: " << reprobados << endl;
    cout << "Promedio general: " << promedio << endl;

    return 0;
}