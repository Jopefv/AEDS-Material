#include <stdio.h>

void f1(int, int *, int *);

int main(){
    int x = 2, y = 3, z = -1;

    while(y < 10){
        f1(x, &y, &z);
        printf("\n %d \t %d \t %d", x, y, z);
    }
}

void f1(int a, int *b, int *c){
    *b += a;
    a++;
    *c = *b + a;
    b= &a;
}
