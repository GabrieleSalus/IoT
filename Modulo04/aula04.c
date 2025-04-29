#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");

    int codigoCaractere;
    char caractere;

    printf("Digite um caractere entre a e z ou A e Z: ");
    scanf("%c", &caractere);

    codigoCaractere = caractere;
    
    if ((codigoCaractere >= 65) && (codigoCaractere <= 90)) {
        printf("Maiusculo: %c", codigoCaractere + 32);
    } else {
        if ((codigoCaractere >= 97) && (codigoCaractere <= 122)) {
            printf("Minusculo: %c", codigoCaractere - 32);
        } else {
            printf("O caractere %c é invalido!", caractere);
        }    
    }  

}