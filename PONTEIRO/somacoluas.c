#include <stdio.h>
#include <stdlib.h>

void preencherMatriz(int **matriz, int n, int m) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &matriz[i][j]);
}

int* somaColunas(int **matriz, int n, int m) {
    int *somas = (int *)malloc(m * sizeof(int));
    for (int j = 0; j < m; j++) {
        somas[j] = 0;
        for (int i = 0; i < n; i++) {
            somas[j] += matriz[i][j];
        }
    }
    return somas;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int **matriz = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matriz[i] = (int *)malloc(m * sizeof(int));
    }

    preencherMatriz(matriz, n, m);

    int *resultado = somaColunas(matriz, n, m);
    for (int j = 0; j < m; j++) {
        printf("%d ", resultado[j]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }
    free(matriz);
    free(resultado);

    return 0;
}
