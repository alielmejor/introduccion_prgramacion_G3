#include <iostream>
#include <cmath>

using namespace std;

// Función para calcular potencia
double CalcularPotencia(double base, double exponente)
{
    return pow(base, exponente);
}

int main()
{
    double base, exponente, resultado;

    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese el exponente: ";
    cin >> exponente;

    resultado = CalcularPotencia(base, exponente);

    cout << "El resultado es: " << resultado << endl;

    return 0;
}