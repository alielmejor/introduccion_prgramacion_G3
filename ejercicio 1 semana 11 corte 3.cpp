#include <iostream>

using namespace std;

// Función con retorno
double CalcularArea(double base, double altura)
{
    double area;

    area = (base * altura) / 2;

    return area;
}

int main()
{
    double baseTriangulo, altura, resultado;

    cout << "Ingrese la base del triangulo: ";
    cin >> baseTriangulo;

    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;

    // Llamada a la función
    resultado = CalcularArea(baseTriangulo, altura);

    cout << "El area del triangulo es: " << resultado << endl;

    return 0;
}