#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void preencherVetor(int [], int );
void preencherVetor2(int [], int );
void imprimirVetor(int *, int );


int main(){
    int array[5];
    preencherVetor(array, 5);
    imprimirVetor(array, 5);
}

void preencherVetor2(int vetor[], int n){
    //int *paux = vetor;
    //srand(time(NULL));
    for(int i = 0; i < n; i++){
        *vetor = rand()%100+1;
        vetor++;
        //*paux = rand()%100+1;
       //paux++;
    }
}


void preencherVetor(int vetor[], int n){
    //int *paux = vetor;
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        *vetor = rand()%100+1;
        vetor++;
        //*paux = rand()%100+1;
       //paux++;
    }
}




void imprimirVetor(int *vetor, int n){
    for(int i = 0; i < n; i++){
        printf("\n %d \t", vetor[i]);
    }
}
