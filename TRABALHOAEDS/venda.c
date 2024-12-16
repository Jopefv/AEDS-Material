#include <stdio.h>
#include <string.h>
#include "venda.h"
#include "pizza.h"


Venda vendas[MAX_VENDAS];
int totalVendas = 0;

void realizarVenda() {
    char nomePizza[50];
    int quantidade;
    float precoUnitario, precoTotal;
    int pizzaEncontrada = 0;

    if (totalVendas >= MAX_VENDAS) {
        printf("Limite de vendas atingido! Não é possível registrar mais vendas.\n");
        return;
    }

    printf("\n==== Realizar Venda ====\n");
    printf("Digite o nome da pizza: ");
    scanf(" %[^\n]s", nomePizza);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    // Verificar se a pizza existe (simulado)
    for (int i = 0; i < totalPizzas; i++) { // supondo que totalPizzas e pizzas[] existam
        if (strcmp(pizzas[i].nome, nomePizza) == 0) {
            pizzaEncontrada = 1;
            precoUnitario = pizzas[i].preco;
            precoTotal = precoUnitario * quantidade;

            // Registrar venda
            strcpy(vendas[totalVendas].nomePizza, nomePizza);
            vendas[totalVendas].quantidade = quantidade;
            vendas[totalVendas].precoTotal = precoTotal;
            totalVendas++;

            printf("Venda registrada com sucesso!\n");
            printf("Pizza: %s\n", nomePizza);
            printf("Quantidade: %d\n", quantidade);
            printf("Preço Total: R$%.2f\n", precoTotal);
            return;
        }
    }

    if (!pizzaEncontrada) {
        printf("Pizza não encontrada! Verifique o nome informado.\n");
    }
}
