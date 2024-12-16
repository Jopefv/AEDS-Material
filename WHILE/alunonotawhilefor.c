
#include <stdio.h>

int main() {
    float nota=0, soma=0, media;
    int cont = 1;

   while(cont < 6){

        for(int i =1; i<5; i++){
            printf("Digite a nota %d do aluno %d\n", i, cont);
            scanf("%f", &nota);
            soma = soma + nota;
        }
        printf("A soma das notas foi: %.2f \n", soma);
        media = soma/4;
        printf("A media do aluno foi: %.2f\n", media);
        soma = 0;

        if(media >= 60){
            printf("Aluno com nota %.2f foi aprovado \n", media);
        }else{
            printf("Aluno com nota %.2f foi reprovado \n", media);
        }
        cont++;
    }
    return 0;
}


