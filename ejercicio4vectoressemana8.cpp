#include <iostream>

using namespace std;

int main() {

    // Vectores de fuerzas
    int fuerzaA[5] = {1, 2, 3, 4, 5};
    int fuerzaB[5] = {5, 4, 3, 2, 1};

    int resultadoProducto = 0;

    cout << "===================================" << endl;
    cout << " ANALISIS DE FUERZAS APLICADAS " << endl;
    cout << "===================================" << endl;

    // Recorrido de los vectores
    for (int i = 0; i < 5; i++) {

        int resultadoMultiplicacion =
            fuerzaA[i] * fuerzaB[i];

        resultadoProducto += resultadoMultiplicacion;

        cout << "\nPosicion " << i + 1 << endl;
        cout << "Fuerza A: " << fuerzaA[i] << endl;
        cout << "Fuerza B: " << fuerzaB[i] << endl;
        cout << "Multiplicacion: "
             << resultadoMultiplicacion << endl;
    }

    // Resultado final
    cout << "\n-----------------------------------" << endl;
    cout << "Producto escalar total: "
         << resultadoProducto << endl;

    return 0;
}