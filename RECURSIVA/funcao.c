#include <stdio.h>

void ordena(int A, int B, int C){
    if(A > B){
        int temp = A;
        A = B;
        B = temp;
    }
    if(A > C){
        int temp = A;
        A = C;
        C = temp;
    }
    if(B > C){
        int temp = B;
        B = C;
        C = temp;
    }

    int main(){
        int a, b, c;
        printf("Digite os valores");
        scanf("%d %d %d", &a, &b, &c);

        ordena(a, b, c);
        printf("Os valores ja ordenados sao: %d %d %d", a, b, c);
        return 0;
    }

}
