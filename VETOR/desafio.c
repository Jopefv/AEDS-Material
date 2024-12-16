//Intercalar vetores

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void preencherVetor(int [], int );
void imprimirVetor(int *, int );
int *intercalar(int *, int *, int, int);


int main(){
    int array1[3], array2[6];
    int *vetor3;

    preencherVetor(array1, 3);
    imprimirVetor(array1, 3);
    printf("\n \n");
    preencherVetor(array2, 6);
    imprimirVetor(array2, 6);
    printf("\n \n");
    vetor3 = intercalar(array1, array2, 3, 6);
    imprimirVetor(vetor3, 6);
}


int *intercalar(int vetor1[], int vetor2[], int tam1, int tam2){
    int* vetor3 = (int *)malloc((tam1 + tam2)*sizeof(int));
    int j = 0;
    int tamMenor = tam1 < tam2?tam1:tam2;
    for(int i=0; i<tam1; i++){
        vetor3[j] = vetor1[i];
        j++;
        vetor3[j] = vetor2[i];
        j++;
    }
    return vetor3;
}



void preencherVetor(int vetor[], int n){
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        *vetor = rand()%100+1;
        vetor++;
    }
}




void imprimirVetor(int *vetor, int n){
    for(int i = 0; i < n; i++){
        printf("%d \t", vetor[i]);
    }
}
