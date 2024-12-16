#include <stdio.h>
#include <stdlib.h>

void preencherMatriz (int a, int b, int mat[][b]){
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            scanf ("%d", &mat[i][j]);
        }
    }
}

void imprimirMatriz (int a, int b, int mat[][b]){
    for (int i = 0; i < a; i++){
    //printf ("Linha %d: ", i+1);
        for (int j = 0; j < b; j++){
            printf ("%d ", mat[i][j]);
        }
        printf ("\n");
    }
}

void somarAcimaDs (int a, int b, int mat[][b]){

    int soma = 0;
    for (int i = 0; i < a; i++){
    for (int j = 0; j < b; j++){
        if (i+j < a-1){
            soma += mat [i][j];
        }
    }
    }
    printf ("A soma seria %d", soma);
}


int preencherMatriz2 (int nlinhas, int ncolunas){

    int mat = (int) malloc (nlinhas * ncolunas * sizeof (int));
    for (int i = 0; i < nlinhas * ncolunas; i++){
        scanf ("%d", mat);
       printf ("Memoria %d: %p Conteudo: %d\n", i, mat, *mat);
        mat++;
    }
    return mat;
}


int main (){

    int n, m;
    printf ("Digite o numero de linhas e colunas: ");
    scanf ("%d %d", &n, &m);
    int mat [n][m];
    preencherMatriz2 (n, m);
    printf ("\nA matriz seria: \n");
    imprimirMatriz2 (n, m);
    somarAcimaDs (n, m, mat);
    return 0;
}
