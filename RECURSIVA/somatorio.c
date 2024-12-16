#include <stdio.h>

int somaGauss(int n);
int soma(int n);
float expressao(int n);

int main() {
    int n;
    float result;

    printf("Digite o limite superior: \n");
    scanf("%d", &n);

    result = expressao(n);
    printf("O resultado e: %.2f\n", result);

    return 0;
}

float expressao(int n) {
    float num, den;
    num = soma(n);
    den = somaGauss(n);
    return num / den;
}


int somaGauss(int n) {
    if (n == 0) {
        return 0;
    }
    return n + somaGauss(n - 1);
}

int soma(int n) {
    int aux = 0;
    for (int i = 1; i <= n; i++) {
        aux = aux + i * (n - i + 1);
    }
    return aux;
}
