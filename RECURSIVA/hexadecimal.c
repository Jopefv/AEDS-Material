
#include <stdio.h>


int hexadecimal(int n);


int main() {
    int n;
    float result;

    printf("Digite o limite superior: \n");
    scanf("%d", &n);

    result = hexadecimal(n);


    return 0;
}


int hexadecimal(int n) {
    if (n > 0){
        hexadecimal(n/16);
        int resto = n % 16;
        if (resto < 10){
            printf("%d", resto);
        }else{
            printf("%c", 'A' + (resto - 10));
        }
    }
}

