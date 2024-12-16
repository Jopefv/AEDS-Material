#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int contaChar(char *, char n);
int contaChar2(char *, char n);


int main()
{
    int totalChar;
    char str[50], caractere;
    printf("Digite a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Digite o caracter: ");
    scanf(" %c", &caractere);
    totalChar = contaChar(str, caractere);
    printf("O total de %c na string %s e: %d\n", caractere, str, totalChar);
    totalChar = contaChar2(str, caractere);
    printf("O total de %c na string %s e: %d\n", caractere, str, totalChar);
}

int contaChar(char *str, char n){
    int cont = 0, i = 0;
    while (str[i] != '\0'){
        if (toupper(str[i]) == toupper(n)){
            cont ++;
        }
        i++;
    }
    return cont;
}


int contaChar2(char *str, char n){
    int cont;
    //passo base
    if (*str == '\0'){
        return 0;
    }
    //comparacao
    cont = (toupper(*str)==toupper(n))?1:0;
    //passo recursivo
    return cont+contaChar2(str+1, n);
}
