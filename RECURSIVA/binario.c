
#include <stdio.h>


int binario(int n);


int main() {
    int n;
    float result;

    printf("Digite o limite superior: \n");
    scanf("%d", &n);

    result = binario(n);


    return 0;
}


int binario(int n) {
    int aux = 0;
    if (n > 1){
        binario(n/2);
    }
    printf("%d", n % 2);
    return aux;
}
