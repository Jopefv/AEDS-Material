#include <stdio.h>

int main() {
    int di, hi, mi, si;


    scanf("%d %d %d %d", &di, &hi, &mi, &si);


    if (hi == 0) {
        hi = 24;
    }
    if (mi >= 60) {
        mi = 0;
    }
    if (si >= 60) {
        si = 0;
    }


    printf("%d dia(s)\n %d hora(s)\n %d minuto(s)\n %d segundo(s)", di,  hi, mi, si);

    return 0;
}
