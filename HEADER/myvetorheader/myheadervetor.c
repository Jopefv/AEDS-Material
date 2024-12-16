void preencherVetor(int vetor[], int n){
    for(int i = 1; i < n; i++){
        vetor[i]=rand()%100+1;
    }
}


void imprimirVetor(int *vetor, int n){
        for(int i = 1; i < n; i++){
        printf("\n Conteudo da posicao [%d]",i, vetor[i]);
        }
    }


int *preencherVetor2(int n){
    int *vetor = (int *)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        *(vetor+1) = rand()%100+1;
    }
    return vetor;
}
