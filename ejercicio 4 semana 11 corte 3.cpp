#include <iostream>

using namespace std;

// Función para calcular salario
double CalcularSalario(double horas, double pagoHora)
{
    double salario;

    salario = horas * pagoHora;

    return salario;
}

int main()
{
    double horasTrabajadas;
    double pagoPorHora;
    double salarioFinal;

    cout << "Ingrese las horas trabajadas: ";
    cin >> horasTrabajadas;

    cout << "Ingrese el pago por hora: ";
    cin >> pagoPorHora;

    salarioFinal = CalcularSalario(horasTrabajadas, pagoPorHora);

    cout << "El salario total es: $" << salarioFinal << endl;

    return 0;
}