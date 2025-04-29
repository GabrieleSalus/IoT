#include <stdio.h>
#include <stdlib.h>

void main() {
        
    int numero;

    while (1) {
        system("cls");
        printf("Digite um número maior que zero: ");
        scanf("%d", &numero);
        
        if (numero <= 0) {
            printf("%s\n", "O número deve ser maior que zero!");
            system("pause");
            continue;
        }
        break;
    }

    while (numero >= 0) {
        printf("%d\n", numero);
        numero--;
    }
}
   
