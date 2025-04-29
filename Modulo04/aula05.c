#include <stdio.h>

void main() {

    int hora;

    printf("Que horas são? ");
    scanf("%d", &hora);

    if (hora >= 0 && hora <= 12) {
        printf("Bom dia!");
    } else {
        if (hora >= 13 && hora <= 18) {
            printf("Boa tarde!");
        } else {
            if (hora >= 19 && hora <= 24) {
                printf("Boa noite!");
            } else {
                printf("Você informou um horário inválido!");
            }
        }        
        
    }
}