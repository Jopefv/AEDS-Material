#include <stdio.h>

int main() {
    int opcao;
    int i;


    scanf("%d ", &opcao);


    switch(opcao) {
        case 1:
            printf("Sequencia escolhida foi A)\n");
            for(i = 1; i <= 10; i++){
                printf("%d ", i);
            }
            break;
        case 2:
            printf("Sequencia escolhida foi B)\n");
            for(i = 1; i<= 9; i+2){
                printf("%d ", i=i+2);
            }
            break;
        case 3:
            printf("Sequencia escolhida foi C)\n");
            for(i = 1; i<= 10; i+3){
                printf("%d ", i=i+3);
            }
            break;
        case 4:
            printf("Sequencia escolhida foi D)\n");
            for(i = 10; i<=50; i=i+10){
                printf("%d ", i);
            }
            break;
        case 5:
            printf("Sequencia escolhida foi E)\n");
            for(i = 10; i>=1; i=i-1){
                printf("%d ", i);
            }
            break;
        case 6:
            printf("Sequencia escolhida foi F)\n");
            for(i=10; i>=2; i=i-2){
                printf("%d ", i);
            }
            break;
        case 7:
            printf("Sequencia escolhida foi G)\n");
            for(i=1; i<=32; i=i*2){
                printf("%d ", i);
            }
            break;
        case 8:
            printf("Sequencia escolhida foi H)\n");
            for(i=32; i>=1; i=i/2){
                printf("%d ", i);
            }
            break;
        default:
            printf("Sequencia nao existenteo\n");
            break;
    }

    printf("Opcao: %d", opcao);
    return 0;
}

