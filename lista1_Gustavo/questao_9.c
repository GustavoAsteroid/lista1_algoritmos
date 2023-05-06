#include <stdio.h>

int main() {
    int opcao, quantidade;
    float total = 0;
    do {
        printf("Escolha uma fruta:\n");
        printf("1 - ABACAXI - R$ 5,00\n");
        printf("2 - MACA - R$ 1,00\n");
        printf("3 - PERA - R$ 4,00\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                printf("Digite a quantidade de abacaxis: ");
                scanf("%d", &quantidade);
                total += quantidade * 5.0;
                break;
            case 2:
                printf("Digite a quantidade de macas: ");
                scanf("%d", &quantidade);
                total += quantidade * 1.0;
                break;
            case 3:
                printf("Digite a quantidade de peras: ");
                scanf("%d", &quantidade);
                total += quantidade * 4.0;
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida.\n");
        }
        printf("\n");
    } while(opcao != 0);
    printf("Total da compra: R$ %.2f\n", total);
    return 0;
}
