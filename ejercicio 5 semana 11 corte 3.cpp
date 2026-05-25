#include <iostream>

using namespace std;

// Función suma
double Sumar(double a, double b)
{
    return a + b;
}

// Función resta
double Restar(double a, double b)
{
    return a - b;
}

// Función multiplicación
double Multiplicar(double a, double b)
{
    return a * b;
}

// Función división
double Dividir(double a, double b)
{
    if(b == 0)
    {
        cout << "No se puede dividir entre cero" << endl;
        return 0;
    }

    return a / b;
}

int main()
{
    double num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Suma: " << Sumar(num1, num2) << endl;
    cout << "Resta: " << Restar(num1, num2) << endl;
    cout << "Multiplicacion: " << Multiplicar(num1, num2) << endl;
    cout << "Division: " << Dividir(num1, num2) << endl;

    return 0;
}