#include <iostream>

using namespace std;

int main() {

    // Arreglos de produccion de las maquinas
    int produccionMaquinaA[5] = {15, 18, 20, 25, 30};
    int produccionMaquinaB[5] = {5, 8, 10, 12, 15};

    // Vector donde se almacenaran las diferencias
    int diferenciaProduccion[5];

    int totalDiferencia = 0;

    cout << "========================================" << endl;
    cout << " SISTEMA DE MONITOREO INDUSTRIAL " << endl;
    cout << "========================================" << endl;

    // Recorrer los arreglos
    for (int i = 0; i < 5; i++) {

        diferenciaProduccion[i] =
            produccionMaquinaA[i] - produccionMaquinaB[i];

        totalDiferencia += diferenciaProduccion[i];

        cout << "\nPeriodo #" << i + 1 << endl;
        cout << "Maquina A: " << produccionMaquinaA[i] << endl;
        cout << "Maquina B: " << produccionMaquinaB[i] << endl;
        cout << "Diferencia: "
             << diferenciaProduccion[i] << endl;
    }

    // Mostrar vector final
    cout << "\n========================================" << endl;
    cout << "VECTOR RESULTANTE" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "[" << diferenciaProduccion[i] << "] ";
    }

    cout << "\n\nTotal acumulado de diferencias: "
         << totalDiferencia << endl;

    return 0;
}