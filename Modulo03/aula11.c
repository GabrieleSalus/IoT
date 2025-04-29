#include <stdio.h>

void main() {

    float numero1;
    float numero2;
    int opcao;

    printf("Insira um número: ");
    scanf("%f", &numero1);

    printf("\nInsira outro número: ");
    scanf("%f", &numero2);

    printf("Selecione uma das operações:\n");
    printf("1. Soma\n");
    printf("2. Multiplicação\n");
    printf("3. Média\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("resultado da soma: %.2f", numero1 + numero2);
            break;
        case 2:
            printf("resultado da multiplicação: %.2f", numero1 * numero2);
            break;
        case 3:
            printf("Média entre os números %.2f e %.2f é %.2f", numero1, numero2, ((numero1 + numero2) / 2));
            break;
        default:
            printf("Você digitou uma opção invalida!");
    }

}