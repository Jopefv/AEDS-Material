#include <stdio.h>

int main() {
    int N, i, max, pos;
    scanf("%d", &N);
    int vet[N];
    
    for (i = 0; i < N; i++) {
        scanf("%d", &vet[i]);
    }
    
    max = vet[0];
    pos = 0;
    
    for (i = 1; i < N; i++) {
        if (vet[i] >= max) {
            max = vet[i];
            pos = i;
        }
    }
    
    printf("%d %d\n", max, pos);
    
    return 0;
}
