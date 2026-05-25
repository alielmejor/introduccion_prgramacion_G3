#include <iostream>

using namespace std;

// Función para calcular promedio
double CalcularPromedio(double nota1, double nota2, double nota3)
{
    double promedio;

    promedio = (nota1 + nota2 + nota3) / 3;

    return promedio;
}

int main()
{
    double nota1, nota2, nota3, promedio;

    cout << "Ingrese la primera nota: ";
    cin >> nota1;

    cout << "Ingrese la segunda nota: ";
    cin >> nota2;

    cout << "Ingrese la tercera nota: ";
    cin >> nota3;

    promedio = CalcularPromedio(nota1, nota2, nota3);

    cout << "El promedio del estudiante es: " << promedio << endl;

    return 0;
}