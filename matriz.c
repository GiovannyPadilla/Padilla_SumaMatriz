#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int fila, columna;
    printf("Ingrese el numero de filas:\n");
    scanf("%d", &fila);
    printf("Ingrese el numero de columnas:\n");
    scanf("%d", &columna);

    int A[fila][columna]; 
    int B[fila][columna];

//usamos srand para generar numeros leatorios para la matriz
    srand(time(NULL));

    printf("\nMatriz A:\n");

    for (int i = 0; i < fila; i++){
        for (int j = 0; j < columna; j++)
        {
            A[i][j] = rand() % 100; // Generar un número aleatorio entre 0 y 99
            printf("%d ", A[i][j]);
            
        }
        printf("\n");
}
    printf("\nMatriz B:\n");
    for (int i = 0; i < fila; i++){
        for (int j = 0; j < columna; j++)
        {
            B[i][j] = rand() % 100; // Generar un número aleatorio entre 0 y 99
            printf("%d ", B[i][j]);
            
        }
        printf("\n");
}
//Generar la suma de la matriz
    int C[fila][columna];

    printf("La suma de las matrices es\n");
    for (int i = 0; i < fila; i++){
        for (int j = 0; j < columna; j++)
        {
            C[i][j] = A[i][j]+B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
}

    return 0;
}
