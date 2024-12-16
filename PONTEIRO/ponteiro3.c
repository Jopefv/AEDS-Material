#include <stdio.h>

int main(){
    int x, *px, **ppx, ***pppx;
    px = &x;
    ppx = &px;
    x = 10;
    pppx = &ppx;

    printf("Conteudo de PPX %p, de PPPX %p\n" , **ppx, **pppx);
}
