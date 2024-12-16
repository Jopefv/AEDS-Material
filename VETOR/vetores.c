#include <stdio.h>

void preencherVetor(int [], int );
void imprimirVetor(int *, int );


int main(){
    int array[5];

    printf("%p", array);
    preencherVetor(array, 5);
    imprimirVetor(array, 5);
}




void preencherVetor(int vetor[], int n){
    for(int i = 1; i < n; i++){
        vetor[i]=rand()%100+1;
    }
}




void imprimirVetor(int *vetor, int n){
        for(int i = 1; i < n; i++){
        printf("\n [%d]", vetor[i]);
    }
}
