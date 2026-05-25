#include <iostream>

using namespace std;

// Función con retorno
bool EsPar(int numero)
{
    if(numero % 2 == 0)
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
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if(EsPar(numero))
    {
        cout << "El numero es par" << endl;
    }
    else
    {
        cout << "El numero es impar" << endl;
    }

    return 0;
}