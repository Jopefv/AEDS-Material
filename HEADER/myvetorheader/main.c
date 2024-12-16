#include <stdio.h>
#include "myheadervetor.h"
#include <stdlib.h>

int main()
{
 int *vetor;
 int n = 10;
    vetor = preencherVetor2(n);

    imprimirVetor(vetor, n);
}
