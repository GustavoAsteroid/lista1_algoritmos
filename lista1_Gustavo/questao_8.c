#include <stdio.h>

int main() {
    int num, maior, menor;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    maior = menor = num; // inicializa maior e menor com o primeiro número lido
    
    while (num >= 0) {
        if (num > maior) {
            maior = num;
        }
        
        if (num < menor) {
            menor = num;
        }
        
        printf("Digite outro numero inteiro: ");
        scanf("%d", &num);
    }
    
    printf("O maior numero lido foi %d e o menor foi %d\n", maior, menor);
    
    return 0;
}
