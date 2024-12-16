#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    float x, y, z;
    float resultado;
    char opcao;

    scanf("%f %f %f", &x, &y, &z);

    printf("Selecione a opção desejada: \n");
    printf("A) Media Aritmetica: \n");
    printf("G) Media Geometrica: \n");
    printf("H) Media Harmonica: \n");
    printf("P) Media Ponderada: \n");
    scanf(" %c", &opcao);


    if (opcao == 'a' || opcao == 'A'){
        resultado = (x + y + z)/3 ;
    }else if(opcao == 'g' || opcao == 'G'){
        resultado = cbrt(x * y * z);
    }else if(opcao == 'h' || opcao == 'H'){
        resultado = 1 / ((1 / x) + (1 / y) + (1 / z));
    }else if(opcao == 'p' || opcao == 'P'){
        resultado = (x + 2 * y + 3 * z)/6;
    }else{
        printf ("Valor invalido!\n");
    }

  printf("Sua opção foi %c e o resultado é: %.2f\n", opcao, resultado);

  return 0;
}
