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


    switch(opcao){
    case 'A':
        resultado = (x + y + z)/3 ;
    break;
    case 'G':
        resultado = cbrt(x * y * z);
    break;
    case 'H':
        resultado = 3 / ((1.0 / x) + (1.0 / y) + (1.0 / z));
    break;
    case 'P':
        resultado = (x + 2.0 * y + 3.0 * z)/6;
    break;
    default:
        printf ("Valor invalido!\n");
    break;

    }


  printf("Sua opção foi %c e o resultado é: %.2f\n", opcao, resultado);

  return 0;
}

