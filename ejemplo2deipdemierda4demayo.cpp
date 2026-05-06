//crea un arreglo de notas de 15 estudiantes, luego calcula el promedio de las notas, y los 3 primeros lugares, no se puede ingresar notas menores a 0 ni mayores a 100.
#include <stdio.h>

int main() {
    float notas[15];
    int i;
    float suma = 0, promedio;

    float primero, segundo, tercero;

    // Ingreso de notas con validación
    for(i = 0; i < 15; i++) {
        do {
            printf("Ingrese la nota del estudiante %d (0 - 100): ", i + 1);
            scanf("%f", &notas[i]);

            if(notas[i] < 0 || notas[i] > 100) {
                printf("Nota invalida. Intente nuevamente.\n");
            }
        } while(notas[i] < 0 || notas[i] > 100);

        suma += notas[i];
    }

    // Inicializar los 3 primeros lugares
    primero = segundo = tercero = -1;

    // Buscar los 3 mayores
    for(i = 0; i < 15; i++) {
        if(notas[i] > primero) {
            tercero = segundo;
            segundo = primero;
            primero = notas[i];
        } else if(notas[i] > segundo) {
            tercero = segundo;
            segundo = notas[i];
        } else if(notas[i] > tercero) {
            tercero = notas[i];
        }
    }

    // Calcular promedio
    promedio = suma / 15;

    // Resultados
    printf("Promedio: %.2f\n", promedio);
    printf("Primer lugar: %.2f\n", primero);
    printf("Segundo lugar: %.2f\n", segundo);
    printf("Tercer lugar: %.2f\n", tercero);

    return 0;
}