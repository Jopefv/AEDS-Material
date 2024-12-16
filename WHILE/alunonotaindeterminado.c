
#include <stdio.h>

int main() {
    float nota=0, media, soma=0;
    int i = 1;

    while(nota >= 0){
        soma = soma + nota;
        i++;

        if(nota >= 60){
            printf("Aluno com nota %.2f foi aprovado \n", nota);
        }else{
            printf("Aluno com nota %.2f foi reprovado \n", nota);
        }
        printf("Digite a nota\n", i);
        scanf("%f", &nota);

    }
    if(i == 0){
        printf("Nota invalida\n", soma);
    }else{
        printf("A soma das notas foi: %.2f \n", soma);
        media = soma/i;
        printf("A media do aluno foi: %.2f\n", media);
    }


    return 0;
}


