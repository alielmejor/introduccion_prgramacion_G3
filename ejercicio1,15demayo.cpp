//Multiplicacion de la matriz por escalar
#include <stdio.h>

int main() {

    int matriz[3][3];
    int escalar;
    int i, j;

    printf("MULTIPLICACION DE MATRIZ POR ESCALAR\n\n");

    // Ingresar datos de la matriz
    for(i = 0; i < 3; i++) {

        for(j = 0; j < 3; j++) {

            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

        }
    }

    // Ingresar escalar
    printf("\nIngrese el numero escalar: ");
    scanf("%d", &escalar);

    // Multiplicar matriz por escalar
    for(i = 0; i < 3; i++) {

        for(j = 0; j < 3; j++) {

            matriz[i][j] = matriz[i][j] * escalar;

        }
    }

    // Mostrar resultado
    printf("\nMatriz resultante:\n\n");

    for(i = 0; i < 3; i++) {

        for(j = 0; j < 3; j++) {

            printf("%d\t", matriz[i][j]);

        }

        printf("\n");
    }

    return 0;
}