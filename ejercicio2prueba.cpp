// Implementar un menú interactivo con control de flujo y validaciones.
#include <iostream>
using namespace std;

int main() {
    int opcion;
    double num1, num2;

    // Ciclo for: máximo 5 repeticiones
    for (int i = 1; i <= 5; i++) {
        cout << "\n--- MENU (Intento " << i << " de 5) ---" << endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Validar si la entrada es incorrecta
        if (cin.fail()) {
            cout << "❌ Error: Entrada invalida." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        switch (opcion) {
            case 1:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;

                if (num1 > 0 && num2 > 0) {
                    cout << "✅ Resultado: " << (num1 + num2) << endl;
                } else {
                    cout << "❌ Error: Ambos numeros deben ser positivos." << endl;
                }
                break;

            case 2:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;

                if (num1 > 0 && num2 > 0) {
                    cout << "✅ Resultado: " << (num1 - num2) << endl;
                } else {
                    cout << "❌ Error: Ambos numeros deben ser positivos." << endl;
                }
                break;

            case 3:
                cout << "👋 Saliendo del programa..." << endl;
                return 0; // termina antes de las 5 iteraciones

            default:
                cout << "❌ Opcion invalida. Debe ser 1, 2 o 3." << endl;
        }
    }

    cout << "\n⚠️ Se alcanzo el maximo de intentos (5)." << endl;
    return 0;
}