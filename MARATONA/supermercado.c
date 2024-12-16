#include <stdio.h>

int main(){

    int n;
    float p;
    int g;
    int soma = 0;
    int menor;
    int menorpreco = 1000;

    for(int i = 1; i < n; i++ ){
        scanf(" %.2f\n", &p);
        scanf(" %d\n", &g);

        soma += p;
        menor = soma / n;

        if(menor < menorpreco){
            menor = menorpreco;
        }
    }
    printf(" %d", menorpreco);
}



