#include <iostream>

using namespace std;

int main() {

    // Declaración de vectores
    int desplazamientoA[5];
    int desplazamientoB[5];
    int resultado[5];

    // Asignación de valores al primer vector
    desplazamientoA[0] = 2;
    desplazamientoA[1] = 4;
    desplazamientoA[2] = 6;
    desplazamientoA[3] = 8;
    desplazamientoA[4] = 10;

    // Asignación de valores al segundo vector
    desplazamientoB[0] = 1;
    desplazamientoB[1] = 3;
    desplazamientoB[2] = 5;
    desplazamientoB[3] = 7;
    desplazamientoB[4] = 9;

    cout << "Sistema de registro de desplazamientos del dron" << endl;
    cout << "-----------------------------------------------" << endl;

    // Proceso de suma de vectores
    for (int i = 0; i < 5; i++) {

        resultado[i] = desplazamientoA[i] + desplazamientoB[i];

        cout << "Intervalo " << i + 1 << ": "
             << desplazamientoA[i] << " + "
             << desplazamientoB[i] << " = "
             << resultado[i] << endl;
    }

    // Mostrar vector final
    cout << "\nDesplazamiento total acumulado:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << resultado[i] << " ";
    }

    cout << endl;

    return 0;
}