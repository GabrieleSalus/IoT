#include <stdio.h>

void main() {

    int codigoCaractere;
    char caractere;

    printf("Digite um caractere entre a e z ou A e Z: ");
    scanf("%c", &caractere);

    codigoCaractere = caractere;
    
    if ((codigoCaractere >= 65) && (codigoCaractere <= 90)) {
        printf("%c", codigoCaractere + 32);
    } else {
        if ((codigoCaractere >= 97) && (codigoCaractere <= 122)) {
            printf("%c", codigoCaractere - 32);
        } else {
            printf("Você digitou um caractere invalido!");
        }    
    }  

}