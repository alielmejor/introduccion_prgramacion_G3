#include <iostream>

using namespace std;

// Función para validar edad
bool EsMayorDeEdad(int edad)
{
    if(edad >= 18)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if(EsMayorDeEdad(edad))
    {
        cout << "Es mayor de edad" << endl;
    }
    else
    {
        cout << "Es menor de edad" << endl;
    }

    return 0;
}