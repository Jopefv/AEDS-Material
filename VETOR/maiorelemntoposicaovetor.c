#include <stdio.h>

int main() {
    int N, i, maior, pos;
    scanf("%d", &N);
    int vetor[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    pos = 0;

    for (i = 1; i < N; i++) {
        if (vetor[i] >= maior) {
            maior = vetor[i];
            pos = i;
        }
    }

    printf("%d %d\n", maior, pos);
    
    return 0;
}
