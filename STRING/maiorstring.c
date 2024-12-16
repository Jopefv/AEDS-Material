#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char string[101], maior_tamanho[101] = "", maior_lexico[101] = "";

    for (int i = 0; i < n; i++) {
        scanf("%s", string);

        if (strlen(string) > strlen(maior_tamanho)) {
            strcpy(maior_tamanho, string);
        }

        if (strcmp(string, maior_lexico) > 0) {
            strcpy(maior_lexico, string);
        }
    }

    printf("%s\n", maior_tamanho);
    printf("%s\n", maior_lexico);

    return 0;
}
