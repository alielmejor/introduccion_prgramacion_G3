#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // Vector de movimientos del robot
    int movimientosRobot[5] = {3, 4, 5, 6, 7};

    double suma = 0;
    double magnitudVector;

    cout << "===================================" << endl;
    cout << " ANALISIS DE TRAYECTORIA DEL ROBOT " << endl;
    cout << "===================================" << endl;

    // Recorrer el vector
    for (int i = 0; i < 5; i++) {

        int potencia = pow(movimientosRobot[i], 2);

        suma += potencia;

        cout << "\nMovimiento #" << i + 1 << endl;
        cout << "Valor original: "
             << movimientosRobot[i] << endl;
        cout << "Valor al cuadrado: "
             << potencia << endl;
    }

    // Calcular magnitud
    magnitudVector = sqrt(suma);

    cout << "\n-----------------------------------" << endl;
    cout << "Suma total de cuadrados: "
         << suma << endl;

    cout << "Magnitud del vector: "
         << magnitudVector << endl;

    return 0;
}