#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Ingrese un numero: ";

    while(!(cin >> numero))
    {
        cin.clear();
        cin.ignore(1000, '\n');

        cout << "Dato invalido. Intente nuevamente: ";
    }

    cout << "Numero valido: " << numero << endl;

    return 0;
}