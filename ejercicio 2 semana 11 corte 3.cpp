#include <iostream>

using namespace std;

// Procedimiento (función sin retorno)
void MostrarMenu()
{
    cout << "====================" << endl;
    cout << "        MENU        " << endl;
    cout << "====================" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "5. Salir" << endl;
    cout << "====================" << endl;
}

int main()
{
    // Llamada al procedimiento
    MostrarMenu();

    return 0;
}