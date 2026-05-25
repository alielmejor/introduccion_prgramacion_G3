#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Procedimiento para convertir texto
void ConvertirTexto(string texto)
{
    string mayusculas = texto;
    string minusculas = texto;

    transform(mayusculas.begin(), mayusculas.end(), mayusculas.begin(), ::toupper);
    transform(minusculas.begin(), minusculas.end(), minusculas.begin(), ::tolower);

    cout << "Texto en mayusculas: " << mayusculas << endl;
    cout << "Texto en minusculas: " << minusculas << endl;
}

int main()
{
    string texto;

    cout << "Ingrese un texto: ";
    getline(cin, texto);

    ConvertirTexto(texto);

    return 0;
}