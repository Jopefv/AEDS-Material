#include <stdio.h>

void preencherMatriz(int, int, int mat[][10]);
void imprimirMatriz(int, int, int mat[][10]);
int somaDiagonal(int, int, int mat[][10]);

int main() {
    int i, j;

    printf("Digite o numero de linhas: ");
    scanf("%d", &i);
    printf("Digite o numero de colunas: ");
    scanf("%d", &j);

    if (j > 10) {
        printf("O número máximo de colunas é 10.\n");
        return 1;
    }

    int mat[i][10];

    preencherMatriz(i, j, mat);
    printf("Matriz preenchida:\n");
    imprimirMatriz(i, j, mat);

    int soma = somaDiagonal(i, j, mat);
    printf("Soma da diagonal: %d\n", soma);

    return 0;
}

void preencherMatriz(int i, int j, int mat[][10]) {
    for (int l = 0; l < i; l++) {
        for (int c = 0; c < j; c++) {
            printf("Digite o elemento [%d][%d]: ", l, c);
            scanf("%d", &mat[l][c]);
        }
    }
}

void imprimirMatriz(int i, int j, int mat[][10]) {
    for (int l = 0; l < i; l++) {
        for (int c = 0; c < j; c++) {
            printf("%d ", mat[l][c]);
        }
        printf("\n");
    }
}


int somaDiagonal(int i, int j, int mat[][10]) {
    int soma = 0;
    for (int l = 0; l < i && l < j; l++) {
        soma += mat[l][l];
    }
    return soma;
}
