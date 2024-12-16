#ifndef VENDA_H_INCLUDED
#define VENDA_H_INCLUDED


#define MAX_VENDAS 100

typedef struct {
    char nomePizza[50];
    int quantidade;
    float precoTotal;
} Venda;


void realizarVenda();

#endif // VENDA_H_INCLUDED
