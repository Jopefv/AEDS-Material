
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int nota;
    int resultado;

    printf("Digite a nota do aluno: \n");
    scanf("%d", &nota);

    resultado = nota >= 60 ? 100 : 0;
    printf("%d", resultado);

  return 0;
}

s
