#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() { 

    setlocale(LC_ALL, "");

    float numero1;
    float numero2;

    printf("Algoritmo de soma\n");

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    printf("A soma entre %.2f e %.2f = %.2f", numero1, numero2, (numero1 + numero2));

}