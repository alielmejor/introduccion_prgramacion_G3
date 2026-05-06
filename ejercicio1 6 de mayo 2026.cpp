#include <stdio.h>

int main() {
    int edades[10];
    int i;
    int suma = 0;
    int max, min;
    float promedio;

    // Ingresar edades
    for(i = 0; i < 10; i++) {
        printf("Ingrese la edad %d: ", i + 1);
        scanf("%d", &edades[i]);
    }

    // Inicializar max y min con el primer valor
    max = edades[0];
    min = edades[0];

    // Recorrer el arreglo para calcular suma, max y min
    for(i = 0; i < 10; i++) {
        suma += edades[i];

        if(edades[i] > max) {
            max = edades[i];
        }

        if(edades[i] < min) {
            min = edades[i];
        }
    }

    // Calcular promedio
    promedio = suma / 10.0;

    // Mostrar resultados
    printf("Promedio: %.2f\n", promedio);
    printf("Edad maxima: %d\n", max);
    printf("Edad minima: %d\n", min);

    return 0;
}