#include <stdio.h>
#include <stdlib.h>

void preencherMatriz(int **matriz, int n, int m) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &matriz[i][j]);
}

int somaBorda(int **matriz, int n, int m) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += matriz[i][0] + matriz[i][m - 1];
    }
    for (int j = 1; j < m - 1; j++) {
        soma += matriz[0][j] + matriz[n - 1][j];
    }
    return soma;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int **matriz = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matriz[i] = (int *)malloc(m * sizeof(int));
    }

    preencherMatriz(matriz, n, m);

    int resultado = somaBorda(matriz, n, m);
    printf("%d\n", resultado);

    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
