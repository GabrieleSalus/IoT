#include <stdio.h>

void main() {

    int modelo;
    int diarias;
    float quilometragem;

    printf("Qual o modelo de carro você deseja alugar?\n");
    printf("1 - Popular\n");
    printf("2 - Luxo\n");
    printf("Digite sua opção: ");
    scanf("%d", &modelo);
    printf("\n");
    printf("Qual o número de dias que você usou o carro? ");
    scanf("%d", &diarias);
    printf("\n");
    printf("Qual a quantidade de quilometros rodados? ");
    scanf("%f", &quilometragem);

    printf("\n");

    if (modelo == 1) {
        if (quilometragem <= 100.0) { 
            printf("Diárias: %d Quilometragem: %.2f Valor a pagar R$: %.2f", diarias, quilometragem, ((diarias * 90.0) + (quilometragem * 0.2)));
        } else {
            printf("Diárias: %d Quilometragem: %.2f Valor a pagar R$: %.2f", diarias, quilometragem, ((diarias * 90.0) + (quilometragem * 0.1)));
        }
    } else {
        if (quilometragem <= 200.0) { 
            printf("Diárias: %d Quilometragem: %.2f Valor a pagar R$: %.2f", diarias, quilometragem, ((diarias * 150.0) + (quilometragem * 0.3)));
        } else {
            printf("Diárias: %d Quilometragem: %.2f Valor a pagar R$: %.2f", diarias, quilometragem, ((diarias * 150.0) + (quilometragem * 0.25)));
        }
    }
}