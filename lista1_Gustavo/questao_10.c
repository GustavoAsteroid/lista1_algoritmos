#include <stdio.h>

int main() {
    int soma = 0, num;
    float media;
    int i;

    printf("Digite 10 numeros inteiros:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        soma += num;
    }

    media = (float) soma / 10;
    printf("A media dos numeros digitados e: %.2f\n", media);

    return 0;
}
