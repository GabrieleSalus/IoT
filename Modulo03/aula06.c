#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");
    
    int qtdMacas;

    printf("Quantas maças deseja comprar? ");
    scanf("%d", &qtdMacas);

    if (qtdMacas >= 10) {
        printf("Você está comprando %d maças, o custo total é de %.2f.", qtdMacas, qtdMacas * 1.00);
    } else {
        printf("Você está comprando %d maças, o custo total é de %.2f.", qtdMacas, qtdMacas * 1.30);
    }

}