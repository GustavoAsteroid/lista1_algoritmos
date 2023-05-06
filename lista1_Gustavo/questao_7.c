#include <stdio.h>

int main() {
    int n, i, termoAtual, termoAnterior = 0, termoAnterior2 = 1;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    
    if (n == 0) {
        termoAtual = 0;
    } else if (n == 1) {
        termoAtual = 1;
    } else {
        for (i = 2; i <= n; i++) {
            termoAtual = termoAnterior2 + termoAnterior;
            termoAnterior = termoAnterior2;
            termoAnterior2 = termoAtual;
        }
    }
    
    printf("O enesimo termo da sequencia de Fibonacci eh: %d\n", termoAtual);
    return 0;
}
