#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char marca[100];
    int ano;
    float preco;
} Carro;

int main() {
    int n;
    float preco_maximo;

    scanf("%d", &n);
    Carro carros[n];

    for (int i = 0; i < n; i++) {
        scanf(" %s", carros[i].marca);
        scanf(" %d", &carros[i].ano);
        scanf(" %f", &carros[i].preco);
    }

    scanf("%f", &preco_maximo);

    printf("Carros com preco menor que %.2f:\n", preco_maximo);
    for (int i = 0; i < n; i++) {
        if (carros[i].preco < preco_maximo) {
            printf("Marca: %s, Ano: %d, Preco: %.2f\n", carros[i].marca, carros[i].ano, carros[i].preco);
        }
    }

    return 0;
}
