#include <stdio.h>

int main(){
    int x, y;
    int *px = &x;
    int *py = &y;

    printf("Digite o valor de X: ");
    scanf("%d", px);
    printf("Digite o valor de Y: ");
    scanf("%d", py);

    px = py;
    *py = (*px)*(*py);
    *px = *px + 2;

    printf("Conteudo de PX %p, endereco de PX %p\n", px, &px);
    printf("Conteudo de PY %p, endereco de PY %p\n", py, &py);
    printf("Conteudo de X %d, endereco de X %p\n", x, &x);
    printf("Conteudo de Y %d, endereco de Y %p\n", y, py);

}
