#include <stdio.h>

int main() {
    int N;

    // Le o tamanho do vetor desejado
    scanf("%d", &N);

    int v1[N], v2[N], v3[N];

    // Le os numeros do primeiro vetor
    for (int i = 0; i < N; i++) {
        scanf("%d", &v1[i]);
    }

    // Le os numeros do segundo vetor
    for (int i = 0; i < N; i++) {
        scanf("%d", &v2[i]);
    }

    // Soma os numeros do vetor um e dois e cria um terceiro vetor com a soma dos dois vetores
    for (int i = 0; i < N; i++) {
        v3[i] = v1[i] + v2[i];
    }

    // Exibe o terceiro vetor com a soma resultante
    for (int i = 0; i < N; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");

    return 0;
}
